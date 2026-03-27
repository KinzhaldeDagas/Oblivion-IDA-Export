int __thiscall sub_756710(_DWORD *this, int a2)
{
  _BYTE *v2; // edx
  int result; // eax

  v2 = (_BYTE *)*(this + 0x11);
  result = a2;
  if ( v2[0x14] != (_BYTE)a2 )
    return (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 0x58))(a2);
  return result;
}
