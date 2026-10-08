NiMaterialProperty *__thiscall NiMaterialProperty::NiMaterialProperty(NiMaterialProperty *this)
{
  double v2; // st6

  NiObjectNET::NiObjectNET((NiObjectNET *)this); /*0x7095a3*/
  *(_DWORD *)this = &NiMaterialProperty::`vftable'; /*0x7095aa*/
  *((float *)this + 7) = 0.0; /*0x7095b0*/
  *((float *)this + 8) = 0.0; /*0x7095b3*/
  *((float *)this + 9) = 0.0; /*0x7095bb*/
  *((float *)this + 0xA) = 0.0; /*0x7095be*/
  *((float *)this + 0xB) = 0.0; /*0x7095c1*/
  *((float *)this + 0xC) = 0.0; /*0x7095c4*/
  *((float *)this + 0xD) = 0.0; /*0x7095c7*/
  *((float *)this + 0xE) = 0.0; /*0x7095ca*/
  *((float *)this + 0xF) = 0.0; /*0x7095cd*/
  *((float *)this + 0x10) = 0.0; /*0x7095d0*/
  *((float *)this + 0x11) = 0.0; /*0x7095d3*/
  *((float *)this + 0x12) = 0.0; /*0x7095d6*/
  v2 = kHeadBodyNormalMatchRadius; /*0x7095d9*/
  *((float *)this + 9) = kHeadBodyNormalMatchRadius; /*0x7095df*/
  *((float *)this + 8) = v2; /*0x7095e2*/
  *((float *)this + 7) = v2; /*0x7095e5*/
  *((float *)this + 0xC) = v2; /*0x7095e8*/
  *((float *)this + 0xB) = v2; /*0x7095eb*/
  *((float *)this + 0xA) = v2; /*0x7095ee*/
  *((float *)this + 0xF) = 0.0; /*0x7095f1*/
  *((float *)this + 0xE) = 0.0; /*0x7095f4*/
  *((float *)this + 0xD) = 0.0; /*0x7095f7*/
  *((float *)this + 0x12) = 0.0; /*0x7095fa*/
  *((float *)this + 0x11) = 0.0; /*0x7095fd*/
  *((float *)this + 0x10) = 0.0; /*0x709600*/
  *((float *)this + 0x13) = flt_A46B10; /*0x709609*/
  *((float *)this + 0x14) = 1.0; /*0x70960e*/
  *((_DWORD *)this + 6) = InterlockedIncrement(&dword_B25AF4); /*0x709617*/
  *((_DWORD *)this + 0x15) = 1; /*0x70961a*/
  *((_DWORD *)this + 0x16) = 0; /*0x709621*/
  return this; /*0x70962a*/
}
