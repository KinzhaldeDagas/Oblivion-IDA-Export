void __usercall sub_5B11A0(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>)
{
  int **v9; // edi
  int v10; // ebx
  char **v11; // eax
  char *v12; // eax
  InterfaceManager *Singleton; // ebp
  char v14; // bl
  int i; // edi
  signed int v16; // ebp
  signed int v17; // edi
  int v18; // ebx
  int v19; // edi

  if ( !InterfaceManager_MenuModeHasFocus(0x3F6) ) /*0x5b11ab*/
  {
    v9 = (int **)(a1 + 0xA0); /*0x5b11b7*/
    v10 = 5; /*0x5b11bd*/
    do /*0x5b11de*/
    {
      if ( *v9 ) /*0x5b11c2*/
      {
        if ( SoundHandle::IsPlaying((UInt32 *)*v9) ) /*0x5b11c8*/
          sub_6B7220(*v9); /*0x5b11d3*/
      }
      v9 += 0xA; /*0x5b11d8*/
      --v10; /*0x5b11db*/
    }
    while ( v10 ); /*0x5b11de*/
  }
  v11 = *(char ***)(4 * GetLockLevel(*(_DWORD *)(a1 + 0x48)) + 0xB03E1C); /*0x5b11e9*/
  if ( v11 ) /*0x5b11f5*/
    v12 = *v11; /*0x5b11f7*/
  else
    v12 = 0; /*0x5b11fb*/
  Tile_SetString(*(_DWORD **)(a1 + 0x28), (_DWORD *)0xFB0, v12); /*0x5b1206*/
  if ( sub_6DA150(0xA) == 2 && InterfaceManager_MenuModeHasFocus(0x3F6) ) /*0x5b1225*/
  {
    if ( LOBYTE(dword_B3B0B4[0xD0]) ) /*0x5b1231*/
    {
      sub_5AFD50("DRSLockOpenFail"); /*0x5b1241*/
      LOBYTE(dword_B3B0B4[0xD0]) = 0; /*0x5b1246*/
    }
    sub_583DF0(0xFF); /*0x5b1252*/
    sub_5AF960(a2, a5, a6, a7, a8); /*0x5b125a*/
  }
  *(_DWORD *)(a1 + 0x44) = *(_DWORD *)(a1 + 0x40); /*0x5b1262*/
  *(_DWORD *)(a1 + 0x40) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5b126a*/
  switch ( *(_DWORD *)(a1 + 0x150) ) /*0x5b1278*/
  {
    case 0: /*0x5b1278*/
      if ( InterfaceManager_MenuModeHasFocus(0x3F6) ) /*0x5b12b4*/
      {
        sub_5AFA80((char *)a1); /*0x5b12c2*/
        sub_5B0E70(a1, a4); /*0x5b12c9*/
      }
      break; /*0x5b12c9*/
    case 1: /*0x5b1278*/
      sub_5B0E70(a1, a4); /*0x5b1281*/
      sub_5B03B0(a1, a5, a6, a7, a8, a2, a3, a4); /*0x5b1288*/
      break; /*0x5b128d*/
    case 3: /*0x5b1278*/
      sub_5B0E70(a1, a4); /*0x5b12a1*/
      sub_5AFA40(a1, a3, a4); /*0x5b12a8*/
      break; /*0x5b12ad*/
    case 4: /*0x5b1278*/
      sub_5B0E70(a1, a4); /*0x5b1291*/
      sub_5B0620(a1, a5, a6, a7, a8, a2, a3); /*0x5b1298*/
      break; /*0x5b129d*/
    default:
      break;
  }
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5b12ce*/
  v14 = 1; /*0x5b12dc*/
  for ( i = 0; i < 0xA; ++i ) /*0x5b12de*/
  {
    if ( sub_57CFA0(Singleton, i) ) /*0x5b12e3*/
    {
      if ( sub_57CFA0(Singleton, i) != 0x3F6 ) /*0x5b12f9*/
        v14 = 0; /*0x5b12fb*/
    }
  }
  if ( !v14 ) /*0x5b1307*/
    sub_583DF0(0xFF); /*0x5b130e*/
  v16 = *(_DWORD *)(a1 + 0x168); /*0x5b1316*/
  if ( v16 > (int)0xFFFFFFFF && 0.0 == *(float *)(a1 + 0x158) && 0.0 == *(float *)(a1 + 0x14C) ) /*0x5b133b*/
  {
    v17 = *(_DWORD *)(a1 + 0x160); /*0x5b133d*/
    if ( v16 != v17 ) /*0x5b1345*/
    {
      v18 = Double_To_SInt32(*(float *)(a1 + 0x148)); /*0x5b1352*/
      if ( v17 == sub_5AF190((signed int *)a1, v18) ) /*0x5b135e*/
      {
        if ( v16 >= v17 ) /*0x5b1362*/
          v19 = v17 + 1; /*0x5b1369*/
        else
          v19 = v17 - 1; /*0x5b1364*/
        *(_DWORD *)(a1 + 0x160) = v19; /*0x5b136f*/
        if ( !*(_BYTE *)(a1 + 0x28 * sub_5AF190((signed int *)a1, v18) + 0x95) ) /*0x5b137d*/
          sub_5AFD50("UILockPickScrape"); /*0x5b138e*/
      }
    }
  }
}
