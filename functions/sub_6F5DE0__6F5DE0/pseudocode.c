signed int __thiscall sub_6F5DE0(_DWORD *this, unsigned int a2, unsigned int a3, _DWORD *a4, unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  _DWORD *v7; // edi
  signed int result; // eax

  if ( *(this + 5) < a2 )
    std::_String_base::_Xran();
  v5 = a3;
  if ( *(this + 5) - a2 < a3 )
    v5 = *(this + 5) - a2;
  v6 = v5;
  if ( v5 >= a5 )
    v6 = a5;
  if ( *(this + 6) < 0x10u )
    v7 = this + 1;
  else
    v7 = (_DWORD *)*(this + 1);
  result = sub_6F5CB0((_DWORD *)((char *)v7 + a2), a4, v6);
  if ( !result )
  {
    if ( v5 >= a5 )
      return v5 != a5;
    else
      return 0xFFFFFFFF;
  }
  return result;
}
