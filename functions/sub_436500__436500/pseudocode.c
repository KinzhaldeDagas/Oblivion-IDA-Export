IOTask *__thiscall sub_436500(IOTask *this, unsigned __int8 a2)
{
  this->vtbl = &BSTask<__int64>::`vftable';
  this->members.unk08 = 0;
  this->members.unk0C = 0;
  this->members.unk10 = 0;
  this->members.unk14 = 0;
  InterlockedIncrement(&Addend);
  this->vtbl = &IOTask::`vftable';
  *(_QWORD *)&this->members.unk10 = __PAIR64__(this->members.unk14, this->members.unk10 & 0xFF00FFFF)
                                  + ((unsigned __int64)a2 << 0x10);
  return this;
}
