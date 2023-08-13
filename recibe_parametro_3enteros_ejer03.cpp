/* Una función recibe como parámetro 3 enteros que indican el año, mes y día del nacimiento de una persona.  
 La función debe devolver la edad de la persona en años, meses y días.  
 Debe investigar como capturar la fecha actual de la computadora. 
 */ 
 #include <iostream> 
 #include <ctime> 
  
 using namespace std; 
  
 bool Validacion(int ano, int mes, int dia)  
 { 
     time_t TimeAc = time(0); 
     tm* FechAc = localtime(&TimeAc); 
  
     if (ano > (FechAc->tm_year + 1900) || 
         (ano == (FechAc->tm_year + 1900) && mes > (FechAc->tm_mon + 1)) || 
         (ano == (FechAc->tm_year + 1900) && mes == (FechAc->tm_mon + 1) && dia >= FechAc->tm_mday)) { 
         return false; 
     } 
     return true; 
 } 
  
 void Edad(int AnoNac, int MesNac, int DiaNac)  
 { 
     int AnoAc, MesAc, DiaAc; 
     time_t TimeAc = time(0); 
     tm* FechAc = localtime(&TimeAc); 
     AnoAc = FechAc->tm_year + 1900; 
     MesAc = FechAc->tm_mon + 1; 
     DiaAc = FechAc->tm_mday; 
  
     if (!Validacion(AnoNac, MesNac, DiaNac))  
     { 
         cout << "Fecha de nacimiento inválida. Debe ser anterior a la fecha actual." << endl; 
         return; 
     } 
     int anos = AnoAc - AnoNac; 
     int meses = MesAc - MesNac; 
     int dias = DiaAc - DiaNac; 
     if (dias < 0)  
     { 
         meses--; 
         int diasMesAnterior; 
         if (MesAc == 1)  
         { 
             anos--; 
             diasMesAnterior = 31; 
         } 
         else if (MesAc == 3)  
         { 
             diasMesAnterior = (AnoAc % 4 == 0 && AnoAc % 100 != 0) || (AnoAc % 400 == 0) ? 29 : 28; 
         }  
         else if (MesAc == 5 || MesAc == 7 || MesAc == 8 || MesAc == 10 || MesAc == 12)  
         { 
             diasMesAnterior = 31; 
         }  
         else  
         { 
             diasMesAnterior = 30; 
         } 
         dias += diasMesAnterior; 
     } 
     if (meses < 0)  
     { 
         anos--; 
         meses += 12; 
     } 
     cout << "Edad: " << anos << " años, " << meses << " meses, " << dias << " días" << endl; 
 } 
  
 main()  
 { 
     int ano, mes, dia; 
  
     cout << "Ingrese el año de nacimiento: "; 
     cin >> ano; 
  
     cout << "Ingrese el mes de nacimiento: "; 
     cin >> mes; 
  
     cout << "Ingrese el día de nacimiento: "; 
     cin >> dia; 
  
     Edad(ano, mes, dia); 
  
     return 0; 
 }
