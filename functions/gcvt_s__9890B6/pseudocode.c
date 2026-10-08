errno_t __cdecl _gcvt_s(char *DstBuf, size_t Size, double Val, int NumOfDigits)
{
  int *v4; // eax
  errno_t v5; // esi
  int v6; // esi
  bool v7; // cf
  int v8; // eax
  int v9; // eax
  char v10; // cl
  char *i; // eax
  char v12; // cl
  char *v13; // eax
  char *v14; // edx
  char v15; // cl
  rsize_t v17; // [esp-4h] [ebp-4Ch]
  int v18; // [esp-4h] [ebp-4Ch]
  int v19[4]; // [esp+Ch] [ebp-3Ch] BYREF
  int v20; // [esp+1Ch] [ebp-2Ch] BYREF
  int v21; // [esp+24h] [ebp-24h]
  char v22; // [esp+28h] [ebp-20h]
  int v23[6]; // [esp+2Ch] [ebp-1Ch] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v20, 0); /*0x9890d2*/
  if ( !DstBuf || !(_DWORD)Size ) /*0x9890fa*/
  {
    v4 = _errno(); /*0x9890db*/
    v18 = 0x16; /*0x9890e0*/
LABEL_3:
    v5 = v18; /*0x9890e2*/
    *v4 = v18; /*0x9890e8*/
    _invalid_parameter(0, (int)DstBuf, v18); /*0x9890ea*/
    goto LABEL_25; /*0x9890f2*/
  }
  v6 = HIDWORD(Val); /*0x9890fc*/
  v7 = HIDWORD(Val) < (unsigned int)Size; /*0x9890ff*/
  *DstBuf = 0; /*0x989102*/
  if ( !v7 ) /*0x989104*/
  {
    v4 = _errno(); /*0x989106*/
    v18 = 0x22; /*0x98910b*/
    goto LABEL_3; /*0x98910d*/
  }
  LODWORD(v17) = 0x16; /*0x98910f*/
  v8 = _fltout2(SHIDWORD(Size), SLODWORD(Val), v19, (char *)v23, v17)[1]; /*0x989124*/
  if ( v8 - 1 < (int)0xFFFFFFFF || v8 - 1 > v6 - 1 ) /*0x989137*/
    v9 = _cftoe((_DWORD *)&Size + 1, DstBuf, Size, v6 - 1, 0); /*0x989159*/
  else
    v9 = _cftof((_DWORD *)&Size + 1, DstBuf, Size, v6 - v8); /*0x989144*/
  v5 = v9; /*0x989161*/
  if ( v9 ) /*0x989165*/
  {
    *_errno() = v9; /*0x9891b5*/
  }
  else
  {
    v10 = *DstBuf; /*0x989167*/
    for ( i = DstBuf; *i; v10 = *++i ) /*0x989167*/
    {
      if ( v10 == ***(_BYTE ***)(v20 + 0xBC) ) /*0x98917e*/
        break; /*0x98917e*/
    }
    v12 = *i; /*0x989187*/
    v13 = i + 1; /*0x989189*/
    if ( v12 ) /*0x98918c*/
    {
      while ( *v13 && *v13 != 0x65 ) /*0x989193*/
        ++v13; /*0x989195*/
      v14 = v13; /*0x98919c*/
      do /*0x9891a2*/
        --v13; /*0x98919e*/
      while ( *v13 == 0x30 ); /*0x9891a2*/
      do /*0x9891ac*/
      {
        v15 = *v14; /*0x9891a4*/
        ++v13; /*0x9891a6*/
        ++v14; /*0x9891a7*/
        *v13 = v15; /*0x9891aa*/
      }
      while ( v15 ); /*0x9891ac*/
    }
  }
LABEL_25:
  if ( v22 ) /*0x9891ba*/
    *(_DWORD *)(v21 + 0x70) &= ~2u; /*0x9891bf*/
  return v5; /*0x9891c3*/
}
