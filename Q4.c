#include <stdio.h>
int main()
{
    double Faturamento_SP=67.836,Faturamento_RJ=36.678, Faturamento_MG=29.229;
    double Faturamento_ES=27.165, Faturamento_Outros=19.849;
    double Porcem_sp,Porcem_rj,Porcem_mg,Porcem_es,Porcem_outros;
    double Faturamento_Total;
    Faturamento_Total=Faturamento_SP+Faturamento_RJ+Faturamento_MG+Faturamento_ES+Faturamento_Outros;

    Porcem_sp=(Faturamento_SP*100)/Faturamento_Total;
    Porcem_rj=(Faturamento_RJ*100)/Faturamento_Total;
    Porcem_mg=(Faturamento_MG*100)/Faturamento_Total;
    Porcem_es=(Faturamento_ES*100)/Faturamento_Total;
    Porcem_outros=(Faturamento_Outros*100)/Faturamento_Total;

    printf("Porcentagem de São Paulo é : %.2lf %%\n",Porcem_sp);
    printf("Porcentagem do Rio de Janeiro é : %.2lf %%\n",Porcem_rj);
    printf("Porcentagem de Minas Gerais é : %.2lf %%\n",Porcem_mg);
    printf("Porcentagem do Espirito Sant é : %.2lf %%\n",Porcem_es);
    printf("Porcentagem de outros é : %.2lf %%\n",Porcem_outros);
    return 0;
}
