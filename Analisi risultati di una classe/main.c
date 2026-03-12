// Analisi risultati di una classe
#include <stdio.h>

int main( void )
{
    // inizializza le variabili nelle definizioni
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result; // un risultato dell'esame
    
    // processa 10 studenti
    // ciclo controllato da contatore
    while ( student <= 10 ) {
        printf( "%s", "Enter Result (1=pass, 2=fail) : " );
        scanf( "%d", &result );
        
        if ( result == 1 ) {
            passes = passes + 1;
        } // fine di if
        else { // incrementa le bocciature
            failures = failures + 1;
        } // fine di else
        student = student + 1;
    } // fine di while
    
    // fase di terminazione; stampa i risultati
    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );
    
    // decidi se stampare "Bonus to instructor!"
    if ( passes > 8 ) {
        puts( "Bonus to instructor!" );
    } // fine di if
// fine della funzione main
    
    return 0;
} 
