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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v20, 0);
  if ( !DstBuf || !(_DWORD)Size )
  {
    v4 = _errno();
    v18 = 0x16;
LABEL_3:
    v5 = v18;
    *v4 = v18;
    _invalid_parameter(0, (int)DstBuf, v18);
    goto LABEL_25;
  }
  v6 = HIDWORD(Val);
  v7 = HIDWORD(Val) < (unsigned int)Size;
  *DstBuf = 0;
  if ( !v7 )
  {
    v4 = _errno();
    v18 = 0x22;
    goto LABEL_3;
  }
  LODWORD(v17) = 0x16;
  v8 = *(_DWORD *)(_fltout2(SBYTE4(Size), SLODWORD(Val), (int)v19, (int)v23, v17) + 4);
  if ( v8 - 1 < (int)0xFFFFFFFF || v8 - 1 > v6 - 1 )
    v9 = _cftoe((char *)&Size + 4, DstBuf, Size, v6 - 1, 0);
  else
    v9 = _cftof((char *)&Size + 4, DstBuf, Size, v6 - v8);
  v5 = v9;
  if ( v9 )
  {
    *_errno() = v9;
  }
  else
  {
    v10 = *DstBuf;
    for ( i = DstBuf; *i; v10 = *++i )
    {
      if ( v10 == ***(_BYTE ***)(v20 + 0xBC) )
        break;
    }
    v12 = *i;
    v13 = i + 1;
    if ( v12 )
    {
      while ( *v13 && *v13 != 0x65 )
        ++v13;
      v14 = v13;
      do
        --v13;
      while ( *v13 == 0x30 );
      do
      {
        v15 = *v14;
        ++v13;
        ++v14;
        *v13 = v15;
      }
      while ( v15 );
    }
  }
LABEL_25:
  if ( v22 )
    *(_DWORD *)(v21 + 0x70) &= ~2u;
  return v5;
}
