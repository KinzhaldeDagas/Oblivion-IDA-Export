void __usercall sub_5B11A0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int **v6; // edi
  int v7; // ebx
  char **v8; // eax
  char *v9; // eax
  InterfaceManager *Singleton; // ebp
  char v11; // bl
  int i; // edi
  signed int v13; // ebp
  signed int v14; // edi
  int v15; // ebx
  int v16; // edi

  if ( !InterfaceManager_MenuModeHasFocus(0x3F6) )
  {
    v6 = (int **)(a1 + 0xA0);
    v7 = 5;
    do
    {
      if ( *v6 )
      {
        if ( sub_6B7260(*v6) )
          sub_6B7220(*v6);
      }
      v6 += 0xA;
      --v7;
    }
    while ( v7 );
  }
  v8 = *(char ***)(4 * GetLockLevel(*(_DWORD *)(a1 + 0x48)) + 0xB03E1C);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0;
  Tile_SetString(*(_DWORD **)(a1 + 0x28), (_DWORD *)0xFB0, v9);
  if ( sub_6DA150(0xA) == 2 && InterfaceManager_MenuModeHasFocus(0x3F6) )
  {
    if ( byte_B3B3F4 )
    {
      sub_5AFD50("DRSLockOpenFail");
      byte_B3B3F4 = 0;
    }
    sub_583DF0(0xFF);
    sub_5AF960(a2, a3);
  }
  *(_DWORD *)(a1 + 0x44) = *(_DWORD *)(a1 + 0x40);
  *(_DWORD *)(a1 + 0x40) = Seed;
  switch ( *(_DWORD *)(a1 + 0x150) )
  {
    case 0:
      if ( InterfaceManager_MenuModeHasFocus(0x3F6) )
      {
        sub_5AFA80((char *)a1);
        sub_5B0E70(a1, a4);
      }
      break;
    case 1:
      sub_5B0E70(a1, a4);
      sub_5B03B0(a1);
      break;
    case 3:
      sub_5B0E70(a1, a4);
      sub_5AFA40(a1, a3, a4);
      break;
    case 4:
      sub_5B0E70(a1, a4);
      sub_5B0620(a1);
      break;
    default:
      break;
  }
  Singleton = InterfaceManager_GetSingleton(0, 1);
  v11 = 1;
  for ( i = 0; i < 0xA; ++i )
  {
    if ( sub_57CFA0(Singleton, i) )
    {
      if ( sub_57CFA0(Singleton, i) != 0x3F6 )
        v11 = 0;
    }
  }
  if ( !v11 )
    sub_583DF0(0xFF);
  v13 = *(_DWORD *)(a1 + 0x168);
  if ( v13 > (int)0xFFFFFFFF && 0.0 == *(float *)(a1 + 0x158) && 0.0 == *(float *)(a1 + 0x14C) )
  {
    v14 = *(_DWORD *)(a1 + 0x160);
    if ( v13 != v14 )
    {
      v15 = Double_To_SInt32(*(float *)(a1 + 0x148));
      if ( v14 == sub_5AF190((signed int *)a1, v15) )
      {
        if ( v13 >= v14 )
          v16 = v14 + 1;
        else
          v16 = v14 - 1;
        *(_DWORD *)(a1 + 0x160) = v16;
        if ( !*(_BYTE *)(a1 + 0x28 * sub_5AF190((signed int *)a1, v15) + 0x95) )
          sub_5AFD50("UILockPickScrape");
      }
    }
  }
}
