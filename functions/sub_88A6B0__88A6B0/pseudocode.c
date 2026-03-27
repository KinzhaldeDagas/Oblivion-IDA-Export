int __thiscall sub_88A6B0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  float *v4; // eax
  float *v5; // eax
  bool v6; // zf
  float *v7; // eax

  if ( *(this + 3) )
  {
    *a2 = 0;
  }
  else
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x2C);
    *(_WORD *)(v3 + 4) = 0xA0;
    v4 = sub_88A4F0((float *)v3);
    if ( v4 )
      v5 = v4 + 0x28;
    else
      v5 = 0;
    v6 = *(this + 2) == 0;
    *(this + 3) = v5;
    if ( !v6 )
    {
      if ( v5 )
        v7 = v5 + 0xFFFFFFD8;
      else
        v7 = 0;
      (*(void (__thiscall **)(_DWORD *, float *))(*this + 0x84))(this, v7);
    }
    *a2 = 1;
  }
  return *(this + 3);
}
