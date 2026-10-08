void __thiscall NiFile::~NiFile(NiFile *this)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 0x24) == 0; /*0x747de3*/
  *(_DWORD *)this = &NiFile::`vftable'; /*0x747de7*/
  if ( !v2 ) /*0x747ded*/
  {
    if ( *((_DWORD *)this + 7) ) /*0x747def*/
    {
      NiFile_Flush((int)this); /*0x747df5*/
      fclose(*((FILE **)this + 7)); /*0x747dfe*/
    }
  }
  FormHeapFree(*((_DWORD *)this + 6)); /*0x747e0a*/
  NiBinaryStream_destr(this); /*0x747e15*/
}
