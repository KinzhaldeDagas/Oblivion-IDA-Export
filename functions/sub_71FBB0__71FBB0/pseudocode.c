// Default-construct NiTriShapeData with empty triangle and shared-normal storage.
NiObject *__thiscall NiTriShapeData_Construct(NiObject *this)
{
  sub_732DD0(this); /*0x71fbb3*/
  *((_DWORD *)this + 0x11) = 0; /*0x71fbba*/
  *((_DWORD *)this + 0x12) = 0; /*0x71fbbd*/
  *((_DWORD *)this + 0x13) = 0; /*0x71fbc0*/
  *((_WORD *)this + 0x28) = 0; /*0x71fbc3*/
  *((_DWORD *)this + 0x15) = 0; /*0x71fbc7*/
  this->__vftable = (NiObjectVtbl *)&NiTriShapeData::`vftable'; /*0x71fbca*/
  return this; /*0x71fbd2*/
}
