FutBinaryFileC *__thiscall FutBinaryFileC::FutBinaryFileC(FutBinaryFileC *this, OB_stString28_010201A0 source)
{
  _DWORD *v3; // edi
  _DWORD *v4; // edi

  *(_DWORD *)this = &FutBinaryFileC::`vftable'; /*0x6f5efc*/
  *((_DWORD *)this + 7) = 0xF; /*0x6f5f07*/
  *((_DWORD *)this + 6) = 0; /*0x6f5f0a*/
  *((_BYTE *)this + 8) = 0; /*0x6f5f11*/
  v3 = (_DWORD *)((char *)this + 0x20); /*0x6f5f14*/
  *((_DWORD *)this + 0xE) = 0xF; /*0x6f5f17*/
  *((_DWORD *)this + 0xD) = 0; /*0x6f5f1a*/
  *((_BYTE *)this + 0x24) = 0; /*0x6f5f1d*/
  OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)((char *)this + 0x20), &source, 0, 0xFFFFFFFF); /*0x6f5f2f*/
  if ( *((_DWORD *)this + 0xD) != 8 ) /*0x6f5f38*/
    FaceGen_ReportAssertionViolation(".\\binaryFile.cpp", 0x1B); /*0x6f5f41*/
  *((_DWORD *)this + 0xF) = 0; /*0x6f5f49*/
  if ( v3[5] < 5u ) /*0x6f5f50*/
    _invalid_parameter_noinfo(); /*0x6f5f52*/
  if ( v3[6] < 0x10u ) /*0x6f5f5f*/
    v4 = v3 + 1; /*0x6f5f66*/
  else
    v4 = (_DWORD *)v3[1]; /*0x6f5f61*/
  *((_BYTE *)v4 + 5) = 0x30; /*0x6f5f69*/
  if ( source.capacity >= 0x10 ) /*0x6f5f71*/
    FormHeapFree((unsigned int)source.storage.heapData); /*0x6f5f78*/
  return this; /*0x6f5f82*/
}
