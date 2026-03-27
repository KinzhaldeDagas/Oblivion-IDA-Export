void __cdecl sub_57B990(char a1, char a2, char a3, char a4, signed int a5)
{
  char v9; // al
  InterfaceManager *Singleton; // eax
  char v11; // al
  InterfaceManager *v12; // eax
  char v13; // al
  InterfaceManager *v14; // eax
  char v15; // al
  InterfaceManager *v16; // eax
  signed int v17; // eax
  InterfaceManager *v18; // eax
  char v19; // [esp-4h] [ebp-4h]
  char v20; // [esp-4h] [ebp-4h]
  char v21; // [esp-4h] [ebp-4h]
  char v22; // [esp-4h] [ebp-4h]
  signed int v23; // [esp-4h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( a1 < 1 )
      {
        v9 = 1;
      }
      else
      {
        v9 = a1;
        if ( a1 > 5 )
          v9 = 5;
      }
      v19 = v9;
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57CDE0(Singleton, v19);
      if ( a2 < 1 )
      {
        v11 = 1;
      }
      else
      {
        v11 = a2;
        if ( a2 > 5 )
          v11 = 5;
      }
      v20 = v11;
      v12 = InterfaceManager_GetSingleton(0, 1);
      sub_57CE20(v12, v20);
      if ( a3 < 1 )
      {
        v13 = 1;
      }
      else
      {
        v13 = a3;
        if ( a3 > 5 )
          v13 = 5;
      }
      v21 = v13;
      v14 = InterfaceManager_GetSingleton(0, 1);
      sub_57CE60(v14, v21);
      if ( a4 < 1 )
      {
        v15 = 1;
      }
      else
      {
        v15 = a4;
        if ( a4 > 5 )
          v15 = 5;
      }
      v22 = v15;
      v16 = InterfaceManager_GetSingleton(0, 1);
      sub_57CEA0(v16, v22);
      v17 = a5;
      if ( a5 != 0x3EB && a5 != 0x3EA && a5 != 0x3FE && a5 != 0x3FF )
        v17 = 0x3EB;
      v23 = v17;
      v18 = InterfaceManager_GetSingleton(0, 1);
      sub_57D530(v18, v23);
    }
  }
}
