// Pass269 native BSBound constructor used only for one of four selected exact-root TESObjectSTAT sources when BBX is absent; center/extents are filled from that source's own world bound.
NiObject *__thiscall TESBound_constr(NiObject *this)
{
  NiExtraData_ctor(this, (const char *)&off_A7D2CC); /*0x6fb8b8*/
  this->__vftable = (NiObjectVtbl *)&BSBound::`vftable'; /*0x6fb8bd*/
  *((float *)this + 3) = g_zeroNiPoint3; /*0x6fb8c8*/
  *((float *)this + 4) = MEMORY[0xB3F9AC]; /*0x6fb8d1*/
  *((float *)this + 5) = MEMORY[0xB3F9B0][0]; /*0x6fb8da*/
  *((float *)this + 6) = g_zeroNiPoint3; /*0x6fb8e2*/
  *((float *)this + 7) = MEMORY[0xB3F9AC]; /*0x6fb8eb*/
  *((float *)this + 8) = MEMORY[0xB3F9B0][0]; /*0x6fb8f4*/
  return this; /*0x6fb8f9*/
}
