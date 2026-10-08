NiObject *__thiscall Tile::Extra::Extra(NiObject *this, unsigned int a2, unsigned int a3)
{
  sub_721350(this); /*0x5905a8*/
  *((_DWORD *)this + 4) = a3; /*0x5905b5*/
  this->__vftable = (NiObjectVtbl *)&Tile::Extra::`vftable'; /*0x5905c7*/
  *((_DWORD *)this + 3) = a2; /*0x5905cd*/
  sub_721440((unsigned int *)this, "Tileptr"); /*0x5905d0*/
  return this; /*0x5905d7*/
}
