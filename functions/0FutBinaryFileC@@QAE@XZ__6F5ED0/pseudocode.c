FutBinaryFileC *__thiscall FutBinaryFileC::FutBinaryFileC(
        FutBinaryFileC *this,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  _DWORD *v9; // edi
  _DWORD *v10; // edi

  *(_DWORD *)this = &FutBinaryFileC::`vftable';
  *((_DWORD *)this + 7) = 0xF;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 8) = 0;
  v9 = (_DWORD *)((char *)this + 0x20);
  *((_DWORD *)this + 0xE) = 0xF;
  *((_DWORD *)this + 0xD) = 0;
  *((_BYTE *)this + 0x24) = 0;
  sub_414420((int)this + 0x20, &a2, 0, 0xFFFFFFFF);
  if ( *((_DWORD *)this + 0xD) != 8 )
    sub_6ED6D0(".\\binaryFile.cpp", 0x1B);
  *((_DWORD *)this + 0xF) = 0;
  if ( v9[5] < 5u )
    _invalid_parameter_noinfo();
  if ( v9[6] < 0x10u )
    v10 = v9 + 1;
  else
    v10 = (_DWORD *)v9[1];
  *((_BYTE *)v10 + 5) = 0x30;
  if ( a8 >= 0x10 )
    FormHeapFree(a3);
  return this;
}
