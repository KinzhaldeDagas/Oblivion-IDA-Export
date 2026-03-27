void __thiscall FutBinaryFileC::~FutBinaryFileC(FutBinaryFileC *this)
{
  *(_DWORD *)this = &FutBinaryFileC::`vftable';
  sub_6F5FA0((FILE **)this);
  if ( *((_DWORD *)this + 0xE) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 9));
  *((_DWORD *)this + 0xE) = 0xF;
  *((_DWORD *)this + 0xD) = 0;
  *((_BYTE *)this + 0x24) = 0;
  if ( *((_DWORD *)this + 7) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 2));
  *((_DWORD *)this + 7) = 0xF;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 8) = 0;
}
