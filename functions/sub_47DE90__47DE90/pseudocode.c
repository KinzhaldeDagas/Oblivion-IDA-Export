bhkRefObject *__thiscall sub_47DE90(bhkRefObject *this, int a2)
{
  bhkRefObject::bhkRefObject(this); /*0x47deb8*/
  this->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x47debf*/
  *((_DWORD *)this + 3) = 0; /*0x47dec5*/
  ++unk_BA7D00; /*0x47dec8*/
  this->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable'; /*0x47decf*/
  ++unk_BA7D0C; /*0x47ded5*/
  this->__vftable = (NiObjectVtbl *)&bhkMouseSpringAction::`vftable'; /*0x47dee7*/
  sub_89E620(this, a2); /*0x47deed*/
  ++unk_BA7D18; /*0x47def2*/
  return this; /*0x47defb*/
}
