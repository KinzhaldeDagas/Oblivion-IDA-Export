signed int __thiscall NiFile_GetFileSize(FILE **this)
{
  int v2; // ebx
  int v4; // edi

  v2 = ftell(*(this + 7)); /*0x747d8d*/
  if ( v2 < 0 ) /*0x747d94*/
    return 0; /*0x747d97*/
  fseek(*(this + 7), 0, 2); /*0x747da4*/
  v4 = ftell(*(this + 7)); /*0x747db4*/
  fseek(*(this + 7), v2, 0); /*0x747dbb*/
  return v4 < 0 ? 0 : v4;
}
