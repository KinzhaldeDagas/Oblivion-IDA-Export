double __usercall sub_5AD980@<st0>(double a1@<st2>, double result@<st0>, char a3)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // ebx
  int ParentMenu; // esi
  float *v6; // edi
  int v7; // eax
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

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EF); /*0x5ad989*/
  v4 = OpenMenuTile; /*0x5ad98e*/
  if ( OpenMenuTile ) /*0x5ad995*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5ad99d*/
    {
      ParentMenu = Tile_GetParentMenu(v4); /*0x5ad9b4*/
      v6 = *(float **)(ParentMenu + 0x54); /*0x5ad9b6*/
      v7 = ((int (__usercall *)@<eax>(double@<st0>))GetTickCount)(result); /*0x5ad9b9*/
      sub_47D170(v6, v7); /*0x5ad9c2*/
      v8 = *(_DWORD *)(ParentMenu + 0x54); /*0x5ad9c7*/
      v9 = *(_DWORD *)(v8 + 0x10); /*0x5ad9ca*/
      v10 = v9 - *(_DWORD *)(ParentMenu + 0x68); /*0x5ad9cf*/
      v11 = v9 - *(_DWORD *)(ParentMenu + 0x6C); /*0x5ad9d4*/
      if ( v10 <= dword_B14160 ) /*0x5ad9dd*/
      {
        v12 = *(_DWORD *)(ParentMenu + 0x64); /*0x5ad9e5*/
        if ( v12 < *(_DWORD *)(ParentMenu + 0x3C) /*0x5ada01*/
          && (v10 > dword_B14168 || *(_BYTE *)(ParentMenu + 0x70) && v10 > dword_B14170) )
        {
          *(_DWORD *)(ParentMenu + 0x64) = v12 + 1; /*0x5ada06*/
        }
      }
      else
      {
        ++*(_DWORD *)(ParentMenu + 0x64); /*0x5ad9df*/
      }
      v13 = (double)v11; /*0x5ada12*/
      if ( v11 < 0 ) /*0x5ada16*/
        v13 = v13 + flt_A2FC78; /*0x5ada18*/
      v20 = *(float *)(ParentMenu + 0x40) - v13 / dbl_A2FC70; /*0x5ada26*/
      result = v20; /*0x5ada2a*/
      *(float *)(ParentMenu + 0x40) = v20; /*0x5ada2e*/
      if ( v20 <= 0.0 || (v19 = 0, a3) ) /*0x5ada46*/
        v19 = 1; /*0x5ada48*/
      v14 = *(_DWORD *)(ParentMenu + 0x64); /*0x5ada4d*/
      v15 = *(_DWORD *)(ParentMenu + 0x60); /*0x5ada50*/
      if ( (v14 != v15 || v19) && v15 < 0x64 ) /*0x5ada65*/
      {
        if ( v15 != v14 ) /*0x5ada6d*/
        {
          *(_DWORD *)(ParentMenu + 0x68) = *(_DWORD *)(v8 + 0x10); /*0x5ada72*/
          *(_DWORD *)(ParentMenu + 0x60) = v14; /*0x5ada75*/
        }
        v21 = (float)*(int *)(ParentMenu + 0x60); /*0x5ada7e*/
        Tile_SetFloat(v4, (_DWORD *)0xFB1, v21); /*0x5ada8e*/
        result = v21; /*0x5ada93*/
        if ( v21 < dbl_A6C4C8 ) /*0x5adaa2*/
        {
          if ( v19 ) /*0x5adaa9*/
          {
            sub_5AD780((_DWORD *)ParentMenu, v4); /*0x5adaae*/
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B14158); /*0x5adab8*/
            result = *(float *)SafeFloatPointer; /*0x5adabd*/
            *(float *)(ParentMenu + 0x40) = *(float *)SafeFloatPointer; /*0x5adabf*/
          }
          if ( InterfaceManager_GetSingleton(0, 1) ) /*0x5adac6*/
          {
            if ( MEMORY[0xB33A10] ) /*0x5adad2*/
              sub_432860((volatile LONG *)MEMORY[0xB33A10]); /*0x5adadc*/
            Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5adae5*/
            InterfaceManager::UpdateMenuFades(Singleton, v9, a1, 0.0, result); /*0x5adaef*/
            sub_579260(a1, 0.0, 0); /*0x5adaf6*/
            sub_5792B0(); /*0x5adafe*/
            if ( MEMORY[0xB33A10] ) /*0x5adb03*/
              sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x5adb0d*/
          }
        }
      }
      *(_DWORD *)(ParentMenu + 0x6C) = v9; /*0x5adb12*/
      mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x5adb1b*/
      if ( GetCurrentThreadId() == mainThreadID ) /*0x5adb29*/
        Shared_NoOpVirtual_60D0A0(MEMORY[0xB33398]); /*0x5adb35*/
    }
  }
  return result; /*0x5adb31*/
}
