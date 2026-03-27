void __thiscall NiFile::~NiFile(NiFile *this)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 0x24) == 0;
  *(_DWORD *)this = &NiFile::`vftable';
  if ( !v2 )
  {
    if ( *((_DWORD *)this + 7) )
    {
      NiFile_Flush((int)this);
      fclose(*((FILE **)this + 7));
    }
  }
  FormHeapFree(*((_DWORD *)this + 6));
  NiBinaryStream_destr(this);
}
