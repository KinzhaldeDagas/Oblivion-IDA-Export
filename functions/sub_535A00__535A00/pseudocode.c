float *__thiscall sub_535A00(float *this, signed int a2, TESObjectREFR *a3)
{
  TESObjectREFR *v4; // ecx
  bool v5; // zf
  signed int v6; // eax
  char v7; // cl

  *(this + 9) = 1.0;
  *(this + 9) = 1.0;
  *(this + 0xC) = 0.0;
  *(this + 1) = 1.0;
  v4 = a3;
  v5 = a3 == 0;
  *(_DWORD *)this = &SpecificItemCollector::`vftable';
  *(this + 0x10) = 0.0;
  if ( !v5 )
  {
    sub_65ABE0(v4, (TESObjectREFR *)&a3);
    v6 = a2;
    v7 = (char)a3;
    *((_DWORD *)this + 0x10) = a3;
    if ( a2 < 0x18 )
      v6 = 0x1C;
    *(_DWORD *)(4 * v6 + 0xBA7DB0) = (1 << (v7 & 0x3F)) | 0xA277F;
  }
  return this;
}
