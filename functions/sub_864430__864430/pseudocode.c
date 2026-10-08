// Constructs Oblivion TallGrassTriStrips from NiTriStripsData and installs the TallGrassTriStrips vtable.
NiAVObject *__thiscall TallGrassTriStrips__ctor(NiAVObject *this, NiScreenElementsData *a2)
{
  sub_719A20(this, a2); /*0x864438*/
  this->vtbl = (NiAVObjectVtbl *)&TallGrassTriStrips::`vftable'; /*0x86443d*/
  return this; /*0x864445*/
}
