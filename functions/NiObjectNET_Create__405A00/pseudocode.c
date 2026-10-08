NiObjectNET *__thiscall NiObjectNET_Create(NiObjectNET *this)
{
  NiObjectNET::NiObjectNET(this); /*0x405a03*/
  this->vtbl = (NiObjectVtbl **)&NiZBufferProperty::`vftable'; /*0x405a08*/
  *((_WORD *)this + 0xC) = 0xF; /*0x405a0e*/
  return this; /*0x405a16*/
}
