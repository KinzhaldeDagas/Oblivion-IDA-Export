void __thiscall BSFile::~BSFile(BSFile *this)
{
  *(_DWORD *)this = &BSFile::`vftable';
  if ( *((_BYTE *)this + 0x24) )
  {
    if ( *((_DWORD *)this + 7) )
    {
      NiFile_Flush((int)this);
      fclose(*((FILE **)this + 7));
    }
  }
  FormHeapFree(*((_DWORD *)this + 6));
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  NiFile::~NiFile(this);
}
