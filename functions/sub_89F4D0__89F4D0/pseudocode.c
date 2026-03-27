int __thiscall sub_89F4D0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // edx

  if ( this && (v2 = *(this + 2)) != 0 && (v3 = v2 + 0x14) != 0 )
    v4 = *(_DWORD *)(v3 + 0x1C);
  else
    LOWORD(v4) = 0;
  v5 = (a2 << 0x10) | (unsigned __int16)v4;
  if ( this )
  {
    v6 = *(this + 2);
    if ( v6 )
    {
      v7 = v6 + 0x14;
      if ( v7 )
        *(_DWORD *)(v7 + 0x1C) = v5;
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 0x80))(this);
}
