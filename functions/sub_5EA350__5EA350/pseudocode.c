int __thiscall sub_5EA350(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int result; // eax
  _DWORD *v5; // ecx

  v3 = (_DWORD *)*(this + 0xD9);
  if ( v3 )
    result = sub_89F4D0(v3, a2);
  v5 = (_DWORD *)*(this + 0xDA);
  if ( v5 )
    return sub_89F4D0(v5, a2);
  return result;
}
