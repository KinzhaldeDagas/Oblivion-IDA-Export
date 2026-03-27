void __thiscall __noreturn sub_7A0B50(unsigned int *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) / 0x30;
  else
    v4 = 0;
  if ( v3 )
  {
    if ( v4 < (int)(*(this + 3) - v3) / 0x30 )
    {
      v5 = (_DWORD *)*(this + 2);
      LOBYTE(v7) = 0;
      sub_79E190(v5, 1, a2);
    }
  }
  v6 = *(this + 2);
  if ( v3 > v6 )
    _invalid_parameter_noinfo();
  sub_7A0A50(this, (int)&v7, this, v6, a2);
}
