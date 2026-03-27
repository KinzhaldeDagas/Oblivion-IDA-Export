int __thiscall sub_8A2FB0(_DWORD *this, int a2, int a3)
{
  _DWORD **v4; // edi
  int result; // eax

  if ( this )
  {
    v4 = (_DWORD **)*(this + 2);
    if ( v4 )
    {
      sub_89F570(this);
      sub_8A9E20(v4, a2, a3);
      return sub_89F570(this);
    }
  }
  return result;
}
