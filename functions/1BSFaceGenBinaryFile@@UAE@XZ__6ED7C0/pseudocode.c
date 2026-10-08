void __usercall BSFaceGenBinaryFile::~BSFaceGenBinaryFile(BSFaceGenBinaryFile *this@<ecx>, int a2@<edi>)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this = &BSFaceGenBinaryFile::`vftable'; /*0x6ed7e8*/
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 0x10); /*0x6ed7ee*/
  if ( v3 ) /*0x6ed7fb*/
    (**v3)(v3, 1); /*0x6ed803*/
  *((_DWORD *)this + 0x10) = 0; /*0x6ed807*/
  FutBinaryFileC::~FutBinaryFileC(this, a2); /*0x6ed816*/
}
