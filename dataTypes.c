#include <stdio.h>

int main() {
    char* location = "New York";
    int no_reactors = 4;
    unsigned short int max_core_temp_k = 1204;  
    float average_output_gwh = 1.18246;
    bool is_operational = true;

    if (is_operational) {
        printf("The nuclear power plant in $s has %d reactors, with a maximum core temperature of %hu Kelvin and an average output of %.5f GWh.\n", location, no_reactors, max_core_temp_k, average_output_gwh);
    }
    else{
        printf("The nuclear power plant in $s with $s reactors is currently not operational.\n The grid is currently operating with an average deficit of %.5f GWh.", location, no_reactors, average_output_gwh);
    }

    return 0;
}
