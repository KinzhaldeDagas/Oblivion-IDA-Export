NiObject *__thiscall sub_75E800(NiObject *this)
{
  sub_752BF0(this); /*0x75e803*/
  *((float *)this + 7) = 0.0; /*0x75e80a*/
  *((float *)this + 8) = 0.0; /*0x75e80f*/
  *((_DWORD *)this + 6) = 0; /*0x75e812*/
  *((float *)this + 0xA) = 0.0; /*0x75e815*/
  *((_BYTE *)this + 0x24) = 0; /*0x75e818*/
  *((float *)this + 0xB) = 0.0; /*0x75e81b*/
  this->__vftable = (NiObjectVtbl *)&NiPSysFieldModifier::`vftable'; /*0x75e81e*/
  return this; /*0x75e826*/
}
