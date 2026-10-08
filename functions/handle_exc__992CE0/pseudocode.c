BOOL __cdecl _handle_exc(char a1, double *a2, __int16 a3)
{
  int v3; // esi
  int v4; // eax
  double *v5; // ecx
  double v6; // st7
  BOOL v7; // esi
  int v8; // ecx
  double v9; // st7
  BOOL v10; // edx
  unsigned int v11; // eax
  double v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+20h] [ebp-8h] BYREF
  int v15; // [esp+24h] [ebp-4h]

  v3 = a1 & 0x1F; /*0x992cef*/
  v15 = v3; /*0x992cf5*/
  if ( (a1 & 8) != 0 && (a3 & 1) != 0 ) /*0x992cfd*/
  {
    _set_statfp(); /*0x992d00*/
    v3 = a1 & 0x17; /*0x992d06*/
    goto LABEL_46; /*0x992d09*/
  }
  if ( (a1 & 4) != 0 && (a3 & 4) != 0 ) /*0x992d16*/
  {
    _set_statfp(); /*0x992d1a*/
    v3 = a1 & 0x1B; /*0x992d20*/
    goto LABEL_46; /*0x992d23*/
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 ) /*0x992d34*/
  {
    _set_statfp(); /*0x992d3c*/
    v4 = a3 & 0xC00; /*0x992d4a*/
    if ( (a3 & 0xC00) != 0 ) /*0x992d4c*/
    {
      if ( v4 != 0x400 ) /*0x992d53*/
      {
        if ( v4 != 0x800 ) /*0x992d5a*/
        {
          if ( v4 != 0xC00 ) /*0x992d5e*/
          {
LABEL_24:
            v3 = a1 & 0x1E; /*0x992dc2*/
            goto LABEL_46; /*0x992dc5*/
          }
          v5 = a2; /*0x992d62*/
          v6 = dbl_B31B50; /*0x992d69*/
          if ( *a2 <= 0.0 ) /*0x992d72*/
            goto LABEL_22; /*0x992d72*/
LABEL_23:
          *v5 = v6; /*0x992dc0*/
          goto LABEL_24; /*0x992dc0*/
        }
        v5 = a2; /*0x992d78*/
        if ( *a2 <= 0.0 ) /*0x992d82*/
        {
          v6 = dbl_B31B50; /*0x992d84*/
LABEL_22:
          v6 = -v6; /*0x992dbe*/
          goto LABEL_23; /*0x992dbe*/
        }
LABEL_20:
        v6 = dbl_B31B40; /*0x992db0*/
        goto LABEL_23; /*0x992db6*/
      }
      v5 = a2; /*0x992d8e*/
      if ( *a2 > 0.0 ) /*0x992d98*/
      {
        v6 = dbl_B31B50; /*0x992d9a*/
        goto LABEL_23; /*0x992da0*/
      }
    }
    else
    {
      v5 = a2; /*0x992da4*/
      if ( *a2 > 0.0 ) /*0x992dae*/
        goto LABEL_20; /*0x992dae*/
    }
    v6 = dbl_B31B40; /*0x992db8*/
    goto LABEL_22; /*0x992db8*/
  }
  if ( (a1 & 2) != 0 && (a3 & 0x10) != 0 ) /*0x992dd6*/
  {
    v7 = (a1 & 0x10) != 0; /*0x992de2*/
    if ( 0.0 == *a2 ) /*0x992df1*/
    {
      v7 = 1; /*0x992e89*/
      goto LABEL_43; /*0x992e89*/
    }
    v13 = _decomp(*a2, &v14); /*0x992e0a*/
    v8 = v14 - 0x600; /*0x992e0d*/
    if ( v14 - 0x600 >= (int)0xFFFFFBCE ) /*0x992e1c*/
    {
      v10 = v13 < 0.0; /*0x992e35*/
      HIWORD(v13) = BYTE6(v13) & 0xF | 0x10; /*0x992e47*/
      if ( v8 < (int)0xFFFFFC03 ) /*0x992e52*/
      {
        v11 = 0xFFFFFC03 - v8; /*0x992e54*/
        do /*0x992e74*/
        {
          if ( (LOBYTE(v13) & 1) != 0 && !v7 ) /*0x992e5d*/
            v7 = 1; /*0x992e5f*/
          LODWORD(v13) >>= 1; /*0x992e61*/
          if ( (BYTE4(v13) & 1) != 0 ) /*0x992e67*/
            LODWORD(v13) |= 0x80000000; /*0x992e69*/
          HIDWORD(v13) >>= 1; /*0x992e70*/
          --v11; /*0x992e73*/
        }
        while ( v11 ); /*0x992e74*/
      }
      if ( !v10 ) /*0x992e78*/
        goto LABEL_41; /*0x992e78*/
      v9 = -v13; /*0x992e7d*/
    }
    else
    {
      v7 = 1; /*0x992e21*/
      v9 = v13 * 0.0; /*0x992e23*/
    }
    v13 = v9; /*0x992e7f*/
LABEL_41:
    *a2 = v13; /*0x992e82*/
LABEL_43:
    if ( v7 ) /*0x992e8e*/
      _set_statfp(); /*0x992e92*/
    v15 &= ~2u; /*0x992e98*/
    v3 = v15; /*0x992e9c*/
  }
LABEL_46:
  if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 ) /*0x992ea9*/
  {
    _set_statfp(); /*0x992ead*/
    v3 &= ~0x10u; /*0x992eb3*/
  }
  return v3 == 0; /*0x992eba*/
}
