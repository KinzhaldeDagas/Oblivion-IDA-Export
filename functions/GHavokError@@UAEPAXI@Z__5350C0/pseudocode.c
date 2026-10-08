HavokError *__thiscall HavokError::`scalar deleting destructor'(HavokError *this, char a2)
{
  HavokError::~HavokError(this); /*0x5350c3*/
  if ( (a2 & 1) != 0 ) /*0x5350cd*/
    (*(void (__stdcall **)(HavokError *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x5350e2*/
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this; /*0x5350e6*/
}
