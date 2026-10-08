void __usercall sub_5ADEC0(double a1@<st1>, double st5_0@<st2>, int ArgList, float a4)
{
  Tile *OpenMenuTile; // eax
  Tile *v6; // esi
  double v7; // st7
  int ParentMenu; // esi
  int v9; // eax
  int v10; // eax
  bool i; // zf
  int v12; // eax
  int *v13; // eax
  int *v14; // ecx
  double v15; // st7
  double v16; // st7
  InterfaceManager *Singleton; // eax
  float v18; // [esp+8h] [ebp-4h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EF); /*0x5adec7*/
  v6 = OpenMenuTile; /*0x5adecc*/
  if ( OpenMenuTile ) /*0x5aded3*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5adedb*/
    {
      v7 = fConstant_2; /*0x5adee8*/
      Tile_SetFloat(v6, 0xFA1u, fConstant_2); /*0x5adef9*/
      sub_58FBA0((int)v6, st5_0, a1, v7, 0); /*0x5adf02*/
      ParentMenu = Tile_GetParentMenu(v6); /*0x5adf0e*/
      if ( *(int *)(ParentMenu + 0x3C) < 0x64 ) /*0x5adf14*/
        sub_572F60(st5_0, 0); /*0x5adf1e*/
      if ( byte_B14130 ) /*0x5adf23*/
      {
        if ( *(_DWORD *)(ParentMenu + 0x28) == ArgList ) /*0x5adf35*/
        {
          v9 = Double_To_SInt32(a4 / dbl_A3F3E8); /*0x5adf5b*/
          if ( v9 > dword_B3B0B4[0xCE] ) /*0x5adf66*/
          {
            dword_B3B0B4[0xCE] = v9; /*0x5adf6f*/
            PrintToLog___("Loading Bar Section %d %d0%%", ArgList, v9); /*0x5adf74*/
          }
        }
        else
        {
          PrintToLog___("Loading Bar Section %d", ArgList); /*0x5adf3d*/
          dword_B3B0B4[0xCE] = 0; /*0x5adf45*/
        }
      }
      v10 = *(_DWORD *)(ParentMenu + 0x28); /*0x5adf7c*/
      if ( ArgList < v10 ) /*0x5adf81*/
      {
        PrintError( /*0x5adf94*/
          "LoadingMenu sections loading out of order. Trying to use (%d:%d%%) but (%d:%d%%) was our last section.",
          ArgList,
          *(_DWORD *)(ParentMenu + 4 * ArgList + 0x2C),
          v10,
          *(_DWORD *)(ParentMenu + 4 * v10 + 0x2C));
        *(_DWORD *)(ParentMenu + 0x28) = ArgList; /*0x5adfa2*/
        if ( ArgList + 1 < 4 ) /*0x5adfa5*/
          memset((void *)(ParentMenu + 4 * (ArgList + 1) + 0x2C), 0, 4 * (4 - (ArgList + 1))); /*0x5adfb4*/
      }
      for ( i = *(_DWORD *)(ParentMenu + 0x28) == ArgList; /*0x5adfbe*/
            *(_DWORD *)(ParentMenu + 0x28) < ArgList;
            i = *(_DWORD *)(ParentMenu + 0x28) == ArgList )
      {
        v12 = *(_DWORD *)(ParentMenu + 0x28); /*0x5adfc0*/
        if ( v12 != 0xFFFFFFFF ) /*0x5adfc6*/
          *(_DWORD *)(ParentMenu + 4 * v12 + 0x2C) = 0x64; /*0x5adfc8*/
        ++*(_DWORD *)(ParentMenu + 0x28); /*0x5adfd0*/
      }
      if ( i ) /*0x5adfd8*/
      {
        a1 = a4; /*0x5adfde*/
        if ( a4 > (double)*(int *)(ParentMenu + 4 * ArgList + 0x2C) ) /*0x5adfeb*/
          *(_DWORD *)(ParentMenu + 4 * ArgList + 0x2C) = Double_To_SInt32(a4); /*0x5adff2*/
      }
      v13 = &dword_B3B0B4[0xCA]; /*0x5adffc*/
      v18 = 0.0; /*0x5ae001*/
      v14 = (int *)(ParentMenu + 0x2C); /*0x5ae005*/
      do /*0x5ae020*/
      {
        v15 = (double)*v14; /*0x5ae008*/
        ++v13; /*0x5ae00a*/
        ++v14; /*0x5ae00d*/
        v18 = v15 * *((float *)v13 + 0xFFFFFFFF) + v18; /*0x5ae01c*/
      }
      while ( (int)v13 < (int)&dword_B3B0B4[0xCE] ); /*0x5ae020*/
      *(_DWORD *)(ParentMenu + 0x3C) = Double_To_SInt32(v18); /*0x5ae02d*/
      v16 = sub_5AD980(st5_0, v18, 0); /*0x5ae030*/
      sub_5AD440((int *)ParentMenu, *(TESObjectCELL **)(ParentMenu + 0x44)); /*0x5ae03e*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5ae046*/
      sub_57E150((int)Singleton, v16, st5_0, a1); /*0x5ae056*/
    }
  }
}
