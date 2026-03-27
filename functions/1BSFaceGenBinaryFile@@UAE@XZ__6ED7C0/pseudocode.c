void __thiscall BSFaceGenBinaryFile::~BSFaceGenBinaryFile(BSFaceGenBinaryFile *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &BSFaceGenBinaryFile::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0x10);
  if ( v2 )
    (**v2)(v2, 1);
  *((_DWORD *)this + 0x10) = 0;
  FutBinaryFileC::~FutBinaryFileC(this);
}
