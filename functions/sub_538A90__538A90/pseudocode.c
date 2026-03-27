int __thiscall sub_538A90(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // eax

  v3 = (_DWORD *)*this;
  if ( v3 && (v4 = v3[2]) != 0 && (v5 = v4 + 0x14) != 0 )
    v6 = *(_DWORD *)(v5 + 0x1C);
  else
    LOWORD(v6) = 0;
  *(this + 2) = a2;
  v7 = (a2 << 0x10) | (unsigned __int16)v6;
  if ( v3 )
  {
    v8 = v3[2];
    if ( v8 )
    {
      v9 = v8 + 0x14;
      if ( v9 )
        *(_DWORD *)(v9 + 0x1C) = v7;
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*v3 + 0x80))(v3);
}
