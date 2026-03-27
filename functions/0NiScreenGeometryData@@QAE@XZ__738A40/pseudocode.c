NiScreenGeometryData *__thiscall NiScreenGeometryData::NiScreenGeometryData(NiScreenGeometryData *this)
{
  sub_71FBB0(this);
  *((_BYTE *)this + 0x58) = 0;
  *((_BYTE *)this + 0x59) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *(_DWORD *)this = &NiScreenGeometryData::`vftable';
  *((_WORD *)this + 0x34) = 4;
  *((_WORD *)this + 0x37) = 4;
  *((_WORD *)this + 0x35) = 0;
  *((_WORD *)this + 0x36) = 0;
  *((_DWORD *)this + 0x18) = &NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable';
  *((_DWORD *)this + 0x19) = FormHeapAlloc(0x10u);
  return this;
}
