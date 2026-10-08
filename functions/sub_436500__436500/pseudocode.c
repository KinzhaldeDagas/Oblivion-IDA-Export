IOTask *__thiscall sub_436500(IOTask *this, unsigned __int8 a2)
{
  this->vtbl = &BSTask<__int64>::`vftable'; /*0x436506*/
  this->members.unk08 = 0; /*0x436511*/
  this->members.unk0C = 0; /*0x436514*/
  this->members.unk10 = 0; /*0x436517*/
  this->members.unk14 = 0; /*0x43651a*/
  InterlockedIncrement(&MEMORY[0xB33A20]); /*0x43651d*/
  this->vtbl = &IOTask::`vftable'; /*0x436531*/
  *(_QWORD *)&this->members.unk10 = __PAIR64__(this->members.unk14, this->members.unk10 & 0xFF00FFFF) /*0x43654c*/
                                  + ((unsigned __int64)a2 << 0x10);
  return this; /*0x43654f*/
}
