ahkCharacterProxy *__thiscall sub_8AD040(ahkCharacterProxy *this, char a2)
{
  ahkCharacterProxy::~ahkCharacterProxy(this); /*0x8ad043*/
  if ( (a2 & 1) != 0 ) /*0x8ad04d*/
    (*(void (__stdcall **)(ahkCharacterProxy *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8ad05f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x31);
  return this; /*0x8ad064*/
}
