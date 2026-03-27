int __thiscall sub_8B7300(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax
  _BYTE v4[52]; // [esp+4h] [ebp-34h] BYREF

  v2 = (_DWORD *)*(this + 4);
  if ( v2 )
  {
    if ( v2[2] )
    {
      sub_8AEDC0(v2, (int)v4);
      return (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 0x78))(this, v4);
    }
  }
  return result;
}
