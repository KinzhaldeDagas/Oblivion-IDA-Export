NiScreenGeometryData *__thiscall NiScreenGeometryData::NiScreenGeometryData(NiScreenGeometryData *this)
{
  NiTriShapeData_Construct((NiObject *)this); /*0x738a68*/
  *((_BYTE *)this + 0x58) = 0; /*0x738a6f*/
  *((_BYTE *)this + 0x59) = 0; /*0x738a72*/
  *((_DWORD *)this + 0x17) = 0; /*0x738a75*/
  *(_DWORD *)this = &NiScreenGeometryData::`vftable'; /*0x738a78*/
  *((_WORD *)this + 0x34) = 4; /*0x738a85*/
  *((_WORD *)this + 0x37) = 4; /*0x738a89*/
  *((_WORD *)this + 0x35) = 0; /*0x738a93*/
  *((_WORD *)this + 0x36) = 0; /*0x738a97*/
  *((_DWORD *)this + 0x18) = &NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable'; /*0x738a9e*/
  *((_DWORD *)this + 0x19) = FormHeapAlloc(0x10u); /*0x738aaf*/
  return this; /*0x738ab7*/
}
