NiFile *__userpurge NiFile::NiFile@<eax>(NiFile *this@<ecx>, char *Filename, int a3, size_t Size)
{
  const char *v5; // eax
  bool v6; // al

  NiBinaryStream_constr(this); /*0x747c73*/
  *(_DWORD *)this = &NiFile::`vftable'; /*0x747c7c*/
  NiFile_SetByteSwap(this, 0); /*0x747c82*/
  *((_DWORD *)this + 8) = a3; /*0x747c8d*/
  if ( a3 ) /*0x747c90*/
  {
    v5 = "wb"; /*0x747c9c*/
    if ( a3 != 1 ) /*0x747ca1*/
      v5 = (const char *)&aAb; /*0x747ca3*/
  }
  else
  {
    v5 = "rb"; /*0x747c92*/
  }
  v6 = !fopen_s((FILE **)this + 7, Filename, v5) && *((_DWORD *)this + 7); /*0x747cca*/
  *((_BYTE *)this + 0x24) = v6; /*0x747cd2*/
  *((_DWORD *)this + 3) = Size; /*0x747cd5*/
  *((_DWORD *)this + 4) = 0; /*0x747cd8*/
  *((_DWORD *)this + 5) = 0; /*0x747cdf*/
  if ( v6 && (_DWORD)Size ) /*0x747ceb*/
  {
    *((_DWORD *)this + 6) = FormHeapAlloc(Size); /*0x747cf3*/
    return this; /*0x747cf9*/
  }
  else
  {
    *((_DWORD *)this + 6) = 0; /*0x747cff*/
    return this; /*0x747d06*/
  }
}
