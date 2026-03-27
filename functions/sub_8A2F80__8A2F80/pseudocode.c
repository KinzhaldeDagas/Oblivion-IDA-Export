int __thiscall sub_8A2F80(_DWORD *this, int a2)
{
  _DWORD **v3; // edi
  int result; // eax

  if ( this )
  {
    v3 = (_DWORD **)*(this + 2);
    if ( v3 )
    {
      sub_89F570(this);
      sub_8A9E00(v3, a2);
      return sub_89F570(this);
    }
  }
  return result;
}
