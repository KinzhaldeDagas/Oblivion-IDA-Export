void __usercall sub_5ADEC0(char a1@<bpl>, double a2@<st1>, double st5_0@<st2>, int ArgList, float a5)
{
  Tile *OpenMenuTile; // eax
  Tile *v6; // esi
  double v7; // st7
  int ParentMenu; // esi
  int v9; // eax
  int v10; // eax
  bool i; // zf
  int v12; // eax
  float *v13; // eax
  int *v14; // ecx
  double v15; // st7
  double v16; // st7
  InterfaceManager *Singleton; // eax
  float v18; // [esp+8h] [ebp-4h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EF);
  v6 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      v7 = fConstant_2;
      Tile_SetFloat(v6, (_DWORD *)0xFA1, fConstant_2);
      sub_58FBA0((int)v6, st5_0, a2, v7, 0);
      ParentMenu = Tile_GetParentMenu(v6);
      if ( *(int *)(ParentMenu + 0x3C) < 0x64 )
        sub_572F60(0);
      if ( byte_B14130 )
      {
        if ( *(_DWORD *)(ParentMenu + 0x28) == ArgList )
        {
          v9 = Double_To_SInt32(a5 / dbl_A3F3E8);
          if ( v9 > dword_B3B3EC )
          {
            dword_B3B3EC = v9;
            PrintToLog___("Loading Bar Section %d %d0%%", ArgList, v9);
          }
        }
        else
        {
          PrintToLog___("Loading Bar Section %d", ArgList);
          dword_B3B3EC = 0;
        }
      }
      v10 = *(_DWORD *)(ParentMenu + 0x28);
      if ( ArgList < v10 )
      {
        PrintError(
          "LoadingMenu sections loading out of order. Trying to use (%d:%d%%) but (%d:%d%%) was our last section.",
          ArgList,
          *(_DWORD *)(ParentMenu + 4 * ArgList + 0x2C),
          v10,
          *(_DWORD *)(ParentMenu + 4 * v10 + 0x2C));
        *(_DWORD *)(ParentMenu + 0x28) = ArgList;
        if ( ArgList + 1 < 4 )
          memset((void *)(ParentMenu + 4 * (ArgList + 1) + 0x2C), 0, 4 * (4 - (ArgList + 1)));
      }
      for ( i = *(_DWORD *)(ParentMenu + 0x28) == ArgList;
            *(_DWORD *)(ParentMenu + 0x28) < ArgList;
            i = *(_DWORD *)(ParentMenu + 0x28) == ArgList )
      {
        v12 = *(_DWORD *)(ParentMenu + 0x28);
        if ( v12 != 0xFFFFFFFF )
          *(_DWORD *)(ParentMenu + 4 * v12 + 0x2C) = 0x64;
        ++*(_DWORD *)(ParentMenu + 0x28);
      }
      if ( i && a5 > (double)*(int *)(ParentMenu + 4 * ArgList + 0x2C) )
        *(_DWORD *)(ParentMenu + 4 * ArgList + 0x2C) = Double_To_SInt32(a5);
      v13 = flt_B3B3DC;
      v18 = 0.0;
      v14 = (int *)(ParentMenu + 0x2C);
      do
      {
        v15 = (double)*v14;
        ++v13;
        ++v14;
        v18 = v15 * v13[0xFFFFFFFF] + v18;
      }
      while ( (int)v13 < (int)&dword_B3B3EC );
      *(_DWORD *)(ParentMenu + 0x3C) = Double_To_SInt32(v18);
      v16 = sub_5AD980(st5_0, v18, 0);
      sub_5AD440((int *)ParentMenu, *(TESObjectCELL **)(ParentMenu + 0x44));
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57E150((int)Singleton, a1, v16, st5_0);
    }
  }
}
