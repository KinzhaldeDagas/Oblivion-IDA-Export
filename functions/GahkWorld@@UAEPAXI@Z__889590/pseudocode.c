ahkWorld *__thiscall ahkWorld::`scalar deleting destructor'(ahkWorld *this, char a2)
{
  *(_DWORD *)this = &ahkWorld::`vftable'; /*0x889593*/
  sub_89AD80(this); /*0x889599*/
  if ( (a2 & 1) != 0 ) /*0x8895a3*/
    (*(void (__stdcall **)(ahkWorld *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8895b8*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2C);
  return this; /*0x8895bc*/
}
