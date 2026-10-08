int __cdecl _input_l(FILE *File, _DWORD *a2, struct localeinfo_struct *a3, int a4)
{
  _DWORD *v4; // edi
  _BYTE *v5; // eax
  char *v6; // eax
  unsigned __int8 v7; // al
  bool v8; // zf
  _BYTE *v9; // edi
  int v10; // eax
  unsigned __int8 *v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v16; // [esp-4h] [ebp-80h]
  int v17; // [esp-4h] [ebp-80h]
  _BYTE v18[16]; // [esp+10h] [ebp-6Ch] BYREF
  int v19; // [esp+20h] [ebp-5Ch]
  int v20; // [esp+24h] [ebp-58h]
  int v21; // [esp+28h] [ebp-54h]
  int v22; // [esp+30h] [ebp-4Ch]
  int v23; // [esp+34h] [ebp-48h]
  int v24; // [esp+38h] [ebp-44h]
  char v25; // [esp+3Fh] [ebp-3Dh]
  int v26; // [esp+40h] [ebp-3Ch]
  int v27; // [esp+48h] [ebp-34h]
  int v28; // [esp+4Ch] [ebp-30h]
  int v29; // [esp+50h] [ebp-2Ch]
  _DWORD *v30; // [esp+54h] [ebp-28h]
  char *v31; // [esp+58h] [ebp-24h]
  int v32; // [esp+60h] [ebp-1Ch]
  char v33; // [esp+64h] [ebp-18h]
  char v34; // [esp+65h] [ebp-17h]
  char v35; // [esp+66h] [ebp-16h]
  char v36; // [esp+67h] [ebp-15h]
  FILE *v37; // [esp+68h] [ebp-14h]
  char v38; // [esp+6Eh] [ebp-Eh]
  char v39; // [esp+6Fh] [ebp-Dh]
  int v40; // [esp+70h] [ebp-Ch]
  char v41; // [esp+77h] [ebp-5h]
  int v42; // [esp+78h] [ebp-4h]
  _BYTE v43[4]; // [esp+7Ch] [ebp+0h] BYREF
  int v44; // [esp+80h] [ebp+4h] BYREF
  char v45; // [esp+84h] [ebp+8h] BYREF

  v4 = a2; /*0x995d5f*/
  v20 = a4; /*0x995d67*/
  v37 = File; /*0x995d6d*/
  v30 = a2; /*0x995d70*/
  v31 = &v45; /*0x995d73*/
  v22 = 0x15E; /*0x995d76*/
  v24 = 0; /*0x995d7d*/
  v19 = 0; /*0x995d80*/
  v42 = 0; /*0x995d83*/
  if ( !a2 || !File ) /*0x995daa*/
    goto LABEL_2; /*0x995daa*/
  if ( (File->_flag & 0x40) != 0 ) /*0x995db0*/
    goto LABEL_16; /*0x995db0*/
  if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE ) /*0x995dcc*/
  {
    v5 = &aA_1; /*0x995df0*/
  }
  else
  {
    v4 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0); /*0x995dd8*/
    v5 = (_BYTE *)(*v4 + 0x28 * (_fileno(File) & 0x1F)); /*0x995dea*/
  }
  if ( (v5[0x24] & 0x7F) != 0
    || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
      ? (v6 = (char *)&aA_1)
      : (v4 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v6 = (char *)(*v4 + 0x28 * (_fileno(File) & 0x1F))),
        v6[0x24] < 0) )
  {
LABEL_2:
    *_errno() = 0x16; /*0x995d92*/
    _invalid_parameter(0, (int)v4, (int)File); /*0x995d98*/
    JUMPOUT(0x996968); /*0x996968*/
  }
  v4 = v30; /*0x995e44*/
LABEL_16:
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v18, a3); /*0x995e47*/
  v7 = *(_BYTE *)v4; /*0x995e55*/
  v8 = *(_BYTE *)v4 == 0; /*0x995e57*/
  v36 = 0; /*0x995e59*/
  v44 = 0; /*0x995e5c*/
  v26 = 0; /*0x995e5f*/
  if ( v8 ) /*0x995e62*/
    JUMPOUT(0x996958); /*0x996958*/
  v9 = v30; /*0x995e68*/
  if ( isspace(v7) ) /*0x995e6f*/
  {
    --v44; /*0x995e7c*/
    v10 = _whiteout(v16, &v44, v37); /*0x995e82*/
    if ( v10 != 0xFFFFFFFF ) /*0x995e8b*/
      _ungetc_nolock(v10, v37); /*0x995e91*/
    do /*0x995e9d*/
      ++v9; /*0x995e98*/
    while ( isspace((unsigned __int8)*v9) ); /*0x995e9d*/
    JUMPOUT(0x9968F1); /*0x9968f1*/
  }
  if ( *v9 != 0x25 ) /*0x995eaf*/
    JUMPOUT(0x996899); /*0x996899*/
  v21 = 0; /*0x995eb7*/
  v25 = 0; /*0x995eba*/
  v32 = 0; /*0x995ebd*/
  v29 = 0; /*0x995ec0*/
  v40 = 0; /*0x995ec3*/
  v33 = 0; /*0x995ec6*/
  v34 = 0; /*0x995ec9*/
  v39 = 0; /*0x995ecc*/
  v43[3] = 0; /*0x995ecf*/
  v35 = 0; /*0x995ed2*/
  v41 = 0; /*0x995ed5*/
  v38 = 1; /*0x995ed8*/
  v23 = 0; /*0x995edc*/
  v11 = v9 + 1; /*0x995ee1*/
  v12 = *v11; /*0x995ee2*/
  v13 = isdigit((unsigned __int8)v12); /*0x995ee9*/
  v14 = v17; /*0x995ef0*/
  if ( v13 ) /*0x995ef1*/
  {
    ++v29; /*0x995ef6*/
    v40 = 0xA * v40 + v12 - 0x30; /*0x995f00*/
    goto LABEL_52; /*0x995f03*/
  }
  if ( v12 > 0x4E ) /*0x995f0b*/
  {
    switch ( v12 ) /*0x995f81*/
    {
      case 'h': /*0x995f81*/
        JUMPOUT(0x995FA2); /*0x995fa2*/
      case 'l': /*0x995f81*/
        JUMPOUT(0x995F92); /*0x995f92*/
      case 'w': /*0x995f81*/
        JUMPOUT(0x995F9D); /*0x995f9d*/
    }
    return _input_l_::_DEFAULT_LABEL_25497(v14, (int)v43, v11, 0); /*0x995f8b*/
  }
  switch ( v12 ) /*0x995f0d*/
  {
    case 'N': /*0x995f0d*/
      goto LABEL_52; /*0x995f0d*/
    case '*': /*0x995f0d*/
      ++v39; /*0x995f79*/
      goto LABEL_52; /*0x995f7c*/
    case 'F': /*0x995f0d*/
      goto LABEL_52; /*0x995f1b*/
    case 'I': /*0x995f0d*/
      LOBYTE(v14) = v11[1]; /*0x995f30*/
      if ( (_BYTE)v14 == 0x36 && v11[2] == 0x34 ) /*0x995f3e*/
      {
        ++v23; /*0x995f40*/
        v27 = 0; /*0x995f45*/
        v28 = 0; /*0x995f48*/
      }
      else if ( ((_BYTE)v14 != 0x33 || v11[2] != 0x32) /*0x995f75*/
             && (_BYTE)v14 != 0x64
             && (_BYTE)v14 != 0x69
             && (_BYTE)v14 != 0x6F
             && (_BYTE)v14 != 0x78
             && (_BYTE)v14 != 0x58 )
      {
        return _input_l_::_DEFAULT_LABEL_25497(v14, (int)v43, v11, 0); /*0x995f75*/
      }
LABEL_52:
      JUMPOUT(0x995FA8); /*0x995fa8*/
    case 'L': /*0x995f0d*/
      ++v38; /*0x995f2b*/
      goto LABEL_52; /*0x995f2e*/
  }
  return _input_l_::_DEFAULT_LABEL_25497(v14, (int)v43, v11, 0);
}
