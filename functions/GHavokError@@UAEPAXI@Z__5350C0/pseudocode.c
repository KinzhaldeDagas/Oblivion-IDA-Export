HavokError *__thiscall HavokError::`scalar deleting destructor'(HavokError *this, char a2)
{
  HavokError::~HavokError(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(HavokError *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this;
}
