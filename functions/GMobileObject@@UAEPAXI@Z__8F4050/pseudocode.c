MobileObject *__thiscall MobileObject::`scalar deleting destructor'(MobileObject *this, char a2)
{
  MobileObject::~MobileObject(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(MobileObject *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *(unsigned __int16 *)&this->super.super.type,
      8);
  return this;
}
