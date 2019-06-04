#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float matrix1[2][2], matrix2[2][1],result[2][1];
    float eigenValue;
    int i,j;
    printf("Enter 2x2 matrix:\n");//Read from user elements of 2X2 Matrix
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%f",&matrix1[i][j]);
        }
    }
    //Now initialize the Eigen vector initially with 1.0
    for(i = 0; i < 2; i++){
        for(j = 0; j < 1; j++){
            matrix2[i][j] = 1.0;
        }
    }
    //Now run the code infinitely
    while(1){
        mat_multi(matrix1,matrix2,result);
        eigenValue = Fmax(result);
        for(i = 0; i < 2; i++){
            result[i][0]/=eigenValue;
        }
        if(Equal(matrix2,result)==1){
            break;
        }
        for(i = 0; i < 2; i++){
            matrix2[i][0] = result[i][0];
        }
    }
    printf("Eigen Value = %f", eigenValue);
    printf("\nEigen Vector for the entered matrix is: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 1; j++){
            printf("/t%.2f",result[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}


int Equal(float matrix1[2][1], float matrix2[2][1]){// Check whether both the matrices are equal.
    if(matrix1[0][0] == matrix2[0][0]&& matrix1[1][0] == matrix2[1][0])
        return 1;
    return 0;
}

float Fmax(float array[2][1]){ // find the maximum Eigen value and return it
    int i;
    float  maximum;
    maximum = array[0][0];
    for(i = 0; i < 2; i++){
        if(maximum < array[i][0])
            maximum = array[i][0];
    }
    return maximum;
}

void mat_multi(float matrix1[2][2],float matrix2[2][1],float matrix3[2][1]){
    int i,j,k;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 1; j++){
            matrix3[i][j] = 0; // Initially initialize the resultant matrix i.e matrix3 with 0
            for(k = 0; k < 2; k++){
                matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}

