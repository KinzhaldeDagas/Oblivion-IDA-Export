double __usercall sub_5AD980@<st0>(double a1@<st2>, double result@<st0>, char a3)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // ebx
  int ParentMenu; // esi
  float *v6; // edi
  int a2; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  double v13; // st6
  int v14; // eax
  int v15; // ecx
  int *SafeFloatPointer; // eax
  InterfaceManager *Singleton; // eax
  UInt32 mainThreadID; // esi
  char v19; // [esp+17h] [ebp-5h]
  float v20; // [esp+18h] [ebp-4h]
  float v21; // [esp+18h] [ebp-4h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EF);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      ParentMenu = Tile_GetParentMenu(v4);
      v6 = *(float **)(ParentMenu + 0x54);
      a2 = ((int (__usercall *)@<eax>(double@<st0>))GetTickCount)(result);
      sub_47D170(v6, a2);
      v8 = *(_DWORD *)(ParentMenu + 0x54);
      v9 = *(_DWORD *)(v8 + 0x10);
      v10 = v9 - *(_DWORD *)(ParentMenu + 0x68);
      v11 = v9 - *(_DWORD *)(ParentMenu + 0x6C);
      if ( v10 <= dword_B14160 )
      {
        v12 = *(_DWORD *)(ParentMenu + 0x64);
        if ( v12 < *(_DWORD *)(ParentMenu + 0x3C)
          && (v10 > dword_B14168 || *(_BYTE *)(ParentMenu + 0x70) && v10 > dword_B14170) )
        {
          *(_DWORD *)(ParentMenu + 0x64) = v12 + 1;
        }
      }
      else
      {
        ++*(_DWORD *)(ParentMenu + 0x64);
      }
      v13 = (double)v11;
      if ( v11 < 0 )
        v13 = v13 + flt_A2FC78;
      v20 = *(float *)(ParentMenu + 0x40) - v13 / dbl_A2FC70;
      result = v20;
      *(float *)(ParentMenu + 0x40) = v20;
      if ( v20 <= 0.0 || (v19 = 0, a3) )
        v19 = 1;
      v14 = *(_DWORD *)(ParentMenu + 0x64);
      v15 = *(_DWORD *)(ParentMenu + 0x60);
      if ( (v14 != v15 || v19) && v15 < 0x64 )
      {
        if ( v15 != v14 )
        {
          *(_DWORD *)(ParentMenu + 0x68) = *(_DWORD *)(v8 + 0x10);
          *(_DWORD *)(ParentMenu + 0x60) = v14;
        }
        v21 = (float)*(int *)(ParentMenu + 0x60);
        Tile_SetFloat(v4, (_DWORD *)0xFB1, v21);
        result = v21;
        if ( v21 < dbl_A6C4C8 )
        {
          if ( v19 )
          {
            sub_5AD780((_DWORD *)ParentMenu, v4);
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B14158);
            result = *(float *)SafeFloatPointer;
            *(float *)(ParentMenu + 0x40) = *(float *)SafeFloatPointer;
          }
          if ( InterfaceManager_GetSingleton(0, 1) )
          {
            if ( ioManager )
              sub_432860((volatile LONG *)ioManager);
            Singleton = InterfaceManager_GetSingleton(0, 1);
            sub_583F40(Singleton, v9, a1, 0.0, result);
            sub_579260(a1, 0.0, 0);
            sub_5792B0();
            if ( ioManager )
              sub_432890((volatile LONG *)ioManager);
          }
        }
      }
      *(_DWORD *)(ParentMenu + 0x6C) = v9;
      mainThreadID = OSGlobals->mainThreadID;
      if ( GetCurrentThreadId() == mainThreadID )
        TESTexture::ClearComponentReferences(OSGlobals);
    }
  }
  return result;
}
