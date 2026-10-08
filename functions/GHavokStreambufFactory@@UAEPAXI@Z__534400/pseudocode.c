HavokStreambufFactory *__thiscall HavokStreambufFactory::`scalar deleting destructor'(
        HavokStreambufFactory *this,
        char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x534408*/
  if ( (a2 & 1) != 0 ) /*0x53440e*/
    (*(void (__thiscall **)(int, HavokStreambufFactory *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x534423*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this; /*0x534427*/
}
