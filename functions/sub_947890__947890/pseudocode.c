_DWORD *__thiscall sub_947890(_DWORD *this, char a2)
{
  _DWORD *v3; // edi

  v3 = this + 8;
  *this = &off_AA2A04;
  *(this + 2) = &off_AA29EC;
  *(this + 8) = &off_AA29B8;
  sub_8A77D0((LPCRITICAL_SECTION *)dword_BA7DA0, (int)(this + 8));
  *v3 = &off_AA2984;
  *(this + 2) = &off_A9D1C0;
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this;
}
