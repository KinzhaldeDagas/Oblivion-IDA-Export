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
  unsigned __int8 v13; // cl
  int v15; // [esp-4h] [ebp-80h]
  _BYTE v16[16]; // [esp+10h] [ebp-6Ch] BYREF
  int v17; // [esp+20h] [ebp-5Ch]
  int v18; // [esp+24h] [ebp-58h]
  int v19; // [esp+28h] [ebp-54h]
  int v20; // [esp+30h] [ebp-4Ch]
  int v21; // [esp+34h] [ebp-48h]
  int v22; // [esp+38h] [ebp-44h]
  char v23; // [esp+3Fh] [ebp-3Dh]
  int v24; // [esp+40h] [ebp-3Ch]
  int v25; // [esp+48h] [ebp-34h]
  int v26; // [esp+4Ch] [ebp-30h]
  int v27; // [esp+50h] [ebp-2Ch]
  int v28; // [esp+54h] [ebp-28h]
  char *v29; // [esp+58h] [ebp-24h]
  int v30; // [esp+60h] [ebp-1Ch]
  char v31; // [esp+64h] [ebp-18h]
  char v32; // [esp+65h] [ebp-17h]
  char v33; // [esp+66h] [ebp-16h]
  char v34; // [esp+67h] [ebp-15h]
  FILE *v35; // [esp+68h] [ebp-14h]
  char v36; // [esp+6Eh] [ebp-Eh]
  char v37; // [esp+6Fh] [ebp-Dh]
  int v38; // [esp+70h] [ebp-Ch]
  char v39; // [esp+77h] [ebp-5h]
  int v40; // [esp+78h] [ebp-4h]
  char v41; // [esp+7Fh] [ebp+3h]
  int v42; // [esp+80h] [ebp+4h] BYREF
  char v43; // [esp+84h] [ebp+8h] BYREF

  v4 = a2;
  v18 = a4;
  v35 = File;
  v28 = (int)a2;
  v29 = &v43;
  v20 = 0x15E;
  v22 = 0;
  v17 = 0;
  v40 = 0;
  if ( !a2 || !File )
    goto LABEL_2;
  if ( (File->_flag & 0x40) != 0 )
    goto LABEL_16;
  if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE )
  {
    v5 = &aA_1;
  }
  else
  {
    v4 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0);
    v5 = (_BYTE *)(*v4 + 0x28 * (_fileno(File) & 0x1F));
  }
  if ( (v5[0x24] & 0x7F) != 0
    || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
      ? (v6 = (char *)&aA_1)
      : (v4 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v6 = (char *)(*v4 + 0x28 * (_fileno(File) & 0x1F))),
        v6[0x24] < 0) )
  {
LABEL_2:
    *_errno() = 0x16;
    _invalid_parameter(0, (int)v4, (int)File);
    JUMPOUT(0x996968);
  }
  v4 = (_DWORD *)v28;
LABEL_16:
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v16, a3);
  v7 = *(_BYTE *)v4;
  v8 = *(_BYTE *)v4 == 0;
  v34 = 0;
  v42 = 0;
  v24 = 0;
  if ( v8 )
    JUMPOUT(0x996958);
  v9 = (_BYTE *)v28;
  if ( isspace(v7) )
  {
    --v42;
    v10 = _whiteout(v15, &v42, v35);
    if ( v10 != 0xFFFFFFFF )
      _ungetc_nolock(v10, v35);
    do
      ++v9;
    while ( isspace((unsigned __int8)*v9) );
    JUMPOUT(0x9968F1);
  }
  if ( *v9 != 0x25 )
    JUMPOUT(0x996899);
  v19 = 0;
  v23 = 0;
  v30 = 0;
  v27 = 0;
  v38 = 0;
  v31 = 0;
  v32 = 0;
  v37 = 0;
  v41 = 0;
  v33 = 0;
  v39 = 0;
  v36 = 1;
  v21 = 0;
  v11 = v9 + 1;
  v12 = *v11;
  if ( isdigit((unsigned __int8)v12) )
  {
    ++v27;
    v38 = 0xA * v38 + v12 - 0x30;
    goto LABEL_52;
  }
  if ( v12 > 0x4E )
  {
    switch ( v12 )
    {
      case 'h':
        JUMPOUT(0x995FA2);
      case 'l':
        JUMPOUT(0x995F92);
      case 'w':
        JUMPOUT(0x995F9D);
    }
    return _input_l_::_DEFAULT_LABEL_25497();
  }
  switch ( v12 )
  {
    case 'N':
      goto LABEL_52;
    case '*':
      ++v37;
      goto LABEL_52;
    case 'F':
      goto LABEL_52;
    case 'I':
      v13 = v11[1];
      if ( v13 == 0x36 && v11[2] == 0x34 )
      {
        ++v21;
        v25 = 0;
        v26 = 0;
      }
      else if ( (v13 != 0x33 || v11[2] != 0x32)
             && v13 != 0x64
             && v13 != 0x69
             && v13 != 0x6F
             && v13 != 0x78
             && v13 != 0x58 )
      {
        return _input_l_::_DEFAULT_LABEL_25497();
      }
LABEL_52:
      JUMPOUT(0x995FA8);
    case 'L':
      ++v36;
      goto LABEL_52;
  }
  return _input_l_::_DEFAULT_LABEL_25497();
}
