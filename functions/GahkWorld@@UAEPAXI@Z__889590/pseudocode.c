ahkWorld *__thiscall ahkWorld::`scalar deleting destructor'(ahkWorld *this, char a2)
{
  *(_DWORD *)this = &ahkWorld::`vftable';
  sub_89AD80(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(ahkWorld *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x2C);
  return this;
}
