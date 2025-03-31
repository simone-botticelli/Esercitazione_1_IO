#include <iostream>
#include <fstream>
#include <iomanip>


// creo una funzione che riscala i valori da [1 5] a [-1 2] 
double riscala(double d)
{
	return -1.0 + (d - 1.0) * 3.0 / 4.0;
}


int main()
{
    std::ifstream inputfile("data.txt");
    std::ofstream outputfile("result.txt");
    // controllo di aver aperto correttamente i file
    if (!inputfile || !outputfile) {
        std::cerr << "Errore nell'aprire i file." << std::endl;
        return 1;
    }
    // inizializzo le variabili
    int N = 0;
    double d;
    double media = 1;
    // Scrivo la prima riga
    outputfile << "# N Mean\n";
    while(inputfile >> d){
	    double d_scaled = riscala(d);
	    media = (N * media + d_scaled)/(N + 1);
	    N++;
	    outputfile << N << " " << std :: scientific << std::setprecision(16) << media << "\n";
    }
    
    
    return 0;
}
