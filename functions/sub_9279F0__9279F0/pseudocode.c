_DWORD *__thiscall sub_9279F0(_DWORD *this, char a2)
{
  sub_8895C0(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this;
}
