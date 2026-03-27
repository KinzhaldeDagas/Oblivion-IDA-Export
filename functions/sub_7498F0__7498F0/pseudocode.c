void __thiscall sub_7498F0(float *this, float a2)
{
  _WORD *v3; // ebx
  double v4; // st7
  _DWORD *v5; // esi
  _BYTE *v6; // ecx
  float v7; // [esp+0h] [ebp-14h]

  v3 = *((_WORD **)this + 0x2D);
  (*(void (__thiscall **)(_WORD *))(*(_DWORD *)v3 + 0x5C))(v3);
  v4 = a2;
  if ( *((_BYTE *)this + 0xEC) || *(this + 0x3A) > v4 )
  {
    sub_749470(this);
    v4 = a2;
    *((_BYTE *)this + 0xEC) = 0;
  }
  if ( -flt_A7DEB4 == *(this + 0x3A) )
    *(this + 0x3A) = v4;
  v5 = *((_DWORD **)this + 0x32);
  while ( v5 )
  {
    v6 = (_BYTE *)v5[2];
    v5 = (_DWORD *)*v5;
    if ( v6[0x14] )
    {
      v7 = v4;
      (*(void (__stdcall **)(_DWORD, _WORD *))(*(_DWORD *)v6 + 0x4C))(LODWORD(v7), v3);
      v4 = a2;
    }
  }
  v3[0x17] |= 7u;
  *(this + 0x3A) = v4;
}
