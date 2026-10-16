#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int N_patients = 10;
    int N_measurements = 3;
    float patient_data[3][10] = {{23., 35., 67., 42., 54., 18., 29., 72., 31., 88.}, {1.78, 1.62, 1.50, 1.90, 1.70, 1.55, 1.82, 1.60, 1.75, 1.85}, {70.5, 55.3, 60.2, 85.7, 72.4, 50.1, 68.9, 64.0, 75.3, 90.2}};
    char *measurement_names[3];
    measurement_names[0] = "Age:    ";
    measurement_names[1] = "Height: ";
    measurement_names[2] = "Weight: ";
    // 2) Udregn gennemsnittet af alder, højde og vægt
    for (int i = 0; i < N_measurements; i++)
    {
        float sum = 0.0;
        float average = 0.0;
        for (int j = 0; j < N_patients; j++)
        {
            // printf("%5.2f, ", patient_data[i][j]);
            sum += patient_data[i][j];
        }

        average = sum / N_patients;
        printf("%s %.2f\n", measurement_names[i], average);
    }
    // 3) Udregn standard afvigelse af alder, højde og vægt

    float standard_deviation = 0;

    // 4) Print descriptive tabel ud : mean (std)
    return 0;
}