void **__thiscall sub_946570(void **this, char a2)
{
  sub_946470(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(void **, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this;
}
