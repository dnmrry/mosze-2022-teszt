int main()
{
    // elírt változónév

    int *b = new int[NELEMENTS];
    // aposztróf idézőjel helyett

    std::cout << '1-100 ertekek duplazasa'
   // nincs feltétel

    for (int i = 0;)                           
    {
      // hibás hivatkozás (kimaradt a * és a +1)

        b[i] = i * 2;                                             
    }
     // hiányos feltétel for ciklusban (N_ELEMENTS)

    for (int i = 0; i; i++)                                       
    {
         // lemaradt hivatkozás ( << *(b + i) << '\n';)

        std::cout << "Ertek:"                                     
    }    
    std::cout << "Atlag szamitasa: " << std::endl;    
    // inicializálatlan változó (atlag = 0)

    int atlag;      
     // pontosvessző helyett vessző                                             
    for (int i = 0; i < N_ELEMENTS, i++)                          
    {
        // lemaradt a * és a ;
        atlag += b[i]                                             
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;