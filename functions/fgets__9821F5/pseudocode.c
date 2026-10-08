char *__cdecl fgets(char *Buf, int MaxCount, FILE *File)
{
  int v3; // ebp
  int v4; // edi
  FILE *v5; // esi
  char *result; // eax
  FILE *v7; // edi
  _DWORD *v8; // edi
  _BYTE *v9; // eax
  _DWORD *v10; // edi
  char *v11; // eax
  int v13; // eax
  char *v14; // eax
  char *v15; // [esp+18h] [ebp-20h]
  char *v16; // [esp+1Ch] [ebp-1Ch]

  v16 = Buf; /*0x982204*/
  v15 = Buf; /*0x982207*/
  if ( !Buf && MaxCount || MaxCount < 0 || (v5 = File) == 0 ) /*0x98224c*/
  {
    *_errno() = 0x16; /*0x98221a*/
    _invalid_parameter(0, v4, (int)v5); /*0x982225*/
    return 0; /*0x98222f*/
  }
  if ( !MaxCount ) /*0x982251*/
    return 0; /*0x982251*/
  v7 = File; /*0x982253*/
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x982259*/
  if ( (File->_flag & 0x40) == 0 )
  {
    if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE ) /*0x982282*/
    {
      v9 = &aA_1; /*0x9822a8*/
    }
    else
    {
      v8 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0); /*0x98228d*/
      v9 = (_BYTE *)(*v8 + 0x28 * (_fileno(File) & 0x1F)); /*0x9822a2*/
      v7 = File; /*0x9822a4*/
    }
    if ( (v9[0x24] & 0x7F) != 0
      || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
        ? (v11 = (char *)&aA_1)
        : (char *)(v10 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0),
                   v11 = (char *)(*v10 + 0x28 * (_fileno(File) & 0x1F)),
                   v7 = File),
          v11[0x24] < 0) )
    {
      *_errno() = 0x16; /*0x982300*/
      _invalid_parameter(0, (int)v7, (int)File); /*0x98230b*/
      v15 = 0; /*0x982313*/
    }
  }
  if ( v15 ) /*0x982319*/
  {
    while ( 1 ) /*0x98231b*/
    {
      if ( !--MaxCount ) /*0x98231e*/
      {
LABEL_29:
        v14 = v16; /*0x982357*/
        goto LABEL_30; /*0x982357*/
      }
      if ( --v7->_cnt < 0 ) /*0x982320*/
        v13 = _filbuf(v7); /*0x982330*/
      else
        v13 = *(unsigned __int8 *)v7->_ptr++; /*0x982327*/
      if ( v13 == 0xFFFFFFFF ) /*0x98233c*/
        break; /*0x98233c*/
      *v16++ = v13; /*0x98234e*/
      if ( (_BYTE)v13 == 0xA ) /*0x982355*/
        goto LABEL_29; /*0x982355*/
    }
    v14 = v16; /*0x98233e*/
    if ( v16 == Buf ) /*0x982344*/
      goto LABEL_31; /*0x982344*/
LABEL_30:
    *v14 = 0; /*0x98235a*/
    fgets_::_done_25927(v3); /*0x98235b*/
  }
  else
  {
LABEL_31:
    fgets_::_done_25927(v3); /*0x982319*/
  }
  return result; /*0x98236b*/
}
