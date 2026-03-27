ahkCharacterProxy *__thiscall ahkCharacterProxy::`scalar deleting destructor'(ahkCharacterProxy *this, char a2)
{
  ahkCharacterProxy::~ahkCharacterProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(ahkCharacterProxy *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x31);
  return this;
}
