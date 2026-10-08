int __thiscall sub_8B7300(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax
  _BYTE v4[52]; // [esp+4h] [ebp-34h] BYREF

  v2 = (_DWORD *)*(this + 4); /*0x8b7306*/
  if ( v2 ) /*0x8b730b*/
  {
    if ( v2[2] ) /*0x8b730d*/
    {
      sub_8AEDC0(v2, (int)v4); /*0x8b7318*/
      return (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 0x78))(this, v4); /*0x8b7329*/
    }
  }
  return result; /*0x8b732b*/
}
