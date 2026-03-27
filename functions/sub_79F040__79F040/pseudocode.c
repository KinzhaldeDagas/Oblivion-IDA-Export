void __thiscall __noreturn sub_79F040(unsigned int *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) / 0x2C;
  else
    v4 = 0;
  if ( v3 )
  {
    if ( v4 < (int)(*(this + 3) - v3) / 0x2C )
    {
      v5 = (_DWORD *)*(this + 2);
      LOBYTE(v7) = 0;
      sub_79B620(v5, 1, a2);
    }
  }
  v6 = *(this + 2);
  if ( v3 > v6 )
    _invalid_parameter_noinfo();
  sub_79EB00(this, (int)&v7, this, v6, a2);
}
