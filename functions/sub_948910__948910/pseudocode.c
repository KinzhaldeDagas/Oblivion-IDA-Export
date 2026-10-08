void __thiscall sub_948910(_DWORD **this, Concurrency::details::InternalContextBase *a2)
{
  int v2; // ebx
  _OWORD *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char v10; // al
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char Proxy; // al
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  float v19; // [esp+0h] [ebp-84h]
  float v20; // [esp+0h] [ebp-84h]
  float v21; // [esp+0h] [ebp-84h]
  float v22; // [esp+0h] [ebp-84h]
  float v23; // [esp+0h] [ebp-84h]
  __int128 v24; // [esp+14h] [ebp-70h] BYREF
  __int128 v25; // [esp+24h] [ebp-60h] BYREF
  __int128 v26; // [esp+34h] [ebp-50h] BYREF
  __int128 v27; // [esp+44h] [ebp-40h] BYREF
  __int128 v28; // [esp+54h] [ebp-30h] BYREF
  __int128 v29; // [esp+64h] [ebp-20h] BYREF
  __int128 v30; // [esp+74h] [ebp-10h] BYREF

  v2 = *((_DWORD *)a2 + 0x15); /*0x94891f*/
  sub_9181B0(this, v2); /*0x948925*/
  switch ( v2 ) /*0x948936*/
  {
    case 1: /*0x948936*/
      sub_948810(this, (__int128 *)a2 + 1); /*0x948962*/
      v4 = sub_94D240(a2, &v24); /*0x94896e*/
      sub_918440(this, *((_DWORD *)v4 + 3)); /*0x948979*/
      v5 = (char *)sub_94D240(a2, &v25); /*0x948985*/
      sub_918480(this, v5, 3); /*0x94898f*/
      sub_918440(this, *((_DWORD *)a2 + 0x1C)); /*0x94899a*/
      sub_918440(this, *((_DWORD *)a2 + 0x1D)); /*0x9489a5*/
      break; /*0x9489b0*/
    case 2: /*0x948936*/
      sub_948810(this, (__int128 *)a2 + 1); /*0x948a11*/
      sub_918480(this, (char *)a2 + 0x60, 3); /*0x948a1e*/
      break; /*0x948a29*/
    case 3: /*0x948936*/
      v6 = sub_94D5D0((char *)a2); /*0x948a2e*/
      sub_918480(this, v6, 3); /*0x948a38*/
      v7 = sub_9492D0((char *)a2); /*0x948a3f*/
      sub_918480(this, v7, 3); /*0x948a49*/
      break; /*0x948a54*/
    case 4: /*0x948936*/
      v8 = (char *)sub_94D240(a2, &v26); /*0x948a5e*/
      sub_918480(this, v8, 3); /*0x948a68*/
      v9 = (char *)sub_94DAD0(a2, &v27); /*0x948a74*/
      sub_918480(this, v9, 3); /*0x948a7e*/
      v19 = sub_94DA70((float *)a2); /*0x948a8d*/
      sub_918440(this, SLOBYTE(v19)); /*0x948a90*/
      v20 = sub_94DA60((float *)a2); /*0x948a9f*/
      sub_918440(this, SLOBYTE(v20)); /*0x948aa2*/
      v10 = sub_94DA80(a2); /*0x948aa9*/
      sub_918440(this, v10); /*0x948ab1*/
      break; /*0x948abc*/
    case 5: /*0x948936*/
      v11 = (char *)sub_94D250(a2, &v28); /*0x948ac6*/
      sub_918480(this, v11, 3); /*0x948ad0*/
      v12 = (char *)sub_94D240(a2, &v29); /*0x948adc*/
      sub_918480(this, v12, 3); /*0x948ae6*/
      v13 = (char *)sub_94DAD0(a2, &v30); /*0x948af2*/
      sub_918480(this, v13, 3); /*0x948afc*/
      v21 = sub_94D1D0((float *)a2); /*0x948b0b*/
      sub_918440(this, SLOBYTE(v21)); /*0x948b0e*/
      v22 = sub_94D1B0((float *)a2); /*0x948b1d*/
      sub_918440(this, SLOBYTE(v22)); /*0x948b20*/
      v23 = sub_94D1C0((float *)a2); /*0x948b2f*/
      sub_918440(this, SLOBYTE(v23)); /*0x948b32*/
      Proxy = (unsigned __int8)Concurrency::details::InternalContextBase::GetProxy(a2); /*0x948b39*/
      sub_918440(this, Proxy); /*0x948b41*/
      break; /*0x948b4c*/
    case 6: /*0x948936*/
      sub_948810(this, (__int128 *)a2 + 1); /*0x948943*/
      sub_948880(this, *((_DWORD **)a2 + 0x14)); /*0x94894e*/
      break; /*0x948959*/
    case 7: /*0x948936*/
      v15 = sub_9492D0((char *)a2); /*0x948b51*/
      sub_918480(this, v15, 3); /*0x948b5b*/
      v16 = sub_94D5D0((char *)a2); /*0x948b62*/
      sub_918480(this, v16, 3); /*0x948b6c*/
      v17 = sub_94D5E0((char *)a2); /*0x948b73*/
      sub_918480(this, v17, 3); /*0x948b7d*/
      v18 = sub_94D5F0((char *)a2); /*0x948b84*/
      sub_918440(this, *(_DWORD *)v18); /*0x948b8e*/
      def_948936((int)a2); /*0x948b8f*/
      break; /*0x948b8f*/
    case 8: /*0x948936*/
    case 9: /*0x948936*/
      sub_948810(this, (__int128 *)a2 + 1); /*0x9489b9*/
      sub_918440(this, *((_DWORD *)a2 + 0x20)); /*0x9489c7*/
      sub_918480(this, (char *)a2 + 0x60, 3); /*0x9489d4*/
      sub_918480(this, (char *)a2 + 0x70, 3); /*0x9489e1*/
      sub_918440(this, *((_DWORD *)a2 + 0x21)); /*0x9489ef*/
      sub_918440(this, *((_DWORD *)a2 + 0x22)); /*0x9489fd*/
      break; /*0x948a08*/
    default:
      JUMPOUT(0x948B93); /*0x948b93*/
  }
}
