NiObjectNET *__thiscall NiObjectNET_Create(NiObjectNET *this)
{
  NiObjectNET::NiObjectNET(this);
  this->vtbl = (NiObjectVtbl **)&NiZBufferProperty::`vftable';
  *((_WORD *)this + 0xC) = 0xF;
  return this;
}
