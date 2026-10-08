void __thiscall BSFile::~BSFile(BSFile *this)
{
  *(_DWORD *)this = &BSFile::`vftable'; /*0x430698*/
  if ( *((_BYTE *)this + 0x24) ) /*0x43069e*/
  {
    if ( *((_DWORD *)this + 7) ) /*0x4306ac*/
    {
      NiFile_Flush((int)this); /*0x4306b2*/
      fclose(*((FILE **)this + 7)); /*0x4306bb*/
    }
  }
  FormHeapFree(*((_DWORD *)this + 6)); /*0x4306c7*/
  *((_DWORD *)this + 6) = 0; /*0x4306d1*/
  *((_DWORD *)this + 7) = 0; /*0x4306d8*/
  NiFile::~NiFile(this); /*0x4306e7*/
}
