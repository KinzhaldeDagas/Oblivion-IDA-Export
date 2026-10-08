int __cdecl fgetpos(FILE *File, fpos_t *Pos)
{
  int v2; // ebx
  int v3; // esi
  int result; // eax
  fpos_t v5; // rax
  int v6; // ecx

  if ( File ) /*0x988945*/
  {
    if ( Pos ) /*0x98896b*/
    {
      v5 = _ftelli64(File); /*0x98898e*/
      *Pos = v5; /*0x988996*/
      v6 = HIDWORD(v5) & v5; /*0x988998*/
      result = 0xFFFFFFFF; /*0x98899a*/
      if ( v6 != 0xFFFFFFFF ) /*0x9889a2*/
        return 0; /*0x9889a4*/
    }
    else
    {
      *_errno() = 0x16; /*0x988977*/
      _invalid_parameter(v2, 0, 0); /*0x98897d*/
      return 0xFFFFFFFF; /*0x988985*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x988951*/
    _invalid_parameter(v2, 0, v3); /*0x988957*/
    return 0xFFFFFFFF; /*0x98895f*/
  }
  return result; /*0x988962*/
}
