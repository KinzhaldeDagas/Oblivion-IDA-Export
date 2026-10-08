void __cdecl sub_57B990(char a1, char a2, char a3, char a4, signed int a5)
{
  char v5; // al
  InterfaceManager *Singleton; // eax
  char v7; // al
  InterfaceManager *v8; // eax
  char v9; // al
  InterfaceManager *v10; // eax
  char v11; // al
  InterfaceManager *v12; // eax
  signed int v13; // eax
  InterfaceManager *v14; // eax
  char v15; // [esp-4h] [ebp-4h]
  char v16; // [esp-4h] [ebp-4h]
  char v17; // [esp-4h] [ebp-4h]
  char v18; // [esp-4h] [ebp-4h]
  signed int v19; // [esp-4h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b994*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b9b0*/
    {
      if ( a1 < 1 ) /*0x57b9c0*/
      {
        v5 = 1; /*0x57b9d1*/
      }
      else
      {
        v5 = a1; /*0x57b9c2*/
        if ( a1 > 5 ) /*0x57b9c8*/
          v5 = 5; /*0x57b9ca*/
      }
      v15 = v5; /*0x57b9d6*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b9db*/
      sub_57CDE0(Singleton, v15); /*0x57b9e5*/
      if ( a2 < 1 ) /*0x57b9f0*/
      {
        v7 = 1; /*0x57ba01*/
      }
      else
      {
        v7 = a2; /*0x57b9f2*/
        if ( a2 > 5 ) /*0x57b9f8*/
          v7 = 5; /*0x57b9fa*/
      }
      v16 = v7; /*0x57ba06*/
      v8 = InterfaceManager_GetSingleton(0, 1); /*0x57ba0b*/
      sub_57CE20(v8, v16); /*0x57ba15*/
      if ( a3 < 1 ) /*0x57ba20*/
      {
        v9 = 1; /*0x57ba31*/
      }
      else
      {
        v9 = a3; /*0x57ba22*/
        if ( a3 > 5 ) /*0x57ba28*/
          v9 = 5; /*0x57ba2a*/
      }
      v17 = v9; /*0x57ba36*/
      v10 = InterfaceManager_GetSingleton(0, 1); /*0x57ba3b*/
      sub_57CE60(v10, v17); /*0x57ba45*/
      if ( a4 < 1 ) /*0x57ba50*/
      {
        v11 = 1; /*0x57ba61*/
      }
      else
      {
        v11 = a4; /*0x57ba52*/
        if ( a4 > 5 ) /*0x57ba58*/
          v11 = 5; /*0x57ba5a*/
      }
      v18 = v11; /*0x57ba66*/
      v12 = InterfaceManager_GetSingleton(0, 1); /*0x57ba6b*/
      sub_57CEA0(v12, v18); /*0x57ba75*/
      v13 = a5; /*0x57ba7a*/
      if ( a5 != 0x3EB && a5 != 0x3EA && a5 != 0x3FE && a5 != 0x3FF ) /*0x57ba98*/
        v13 = 0x3EB; /*0x57ba9a*/
      v19 = v13; /*0x57ba9f*/
      v14 = InterfaceManager_GetSingleton(0, 1); /*0x57baa4*/
      sub_57D530(v14, v19); /*0x57baae*/
    }
  }
}
