char __thiscall sub_6C9BA0(float *this, char arg0, char a3, float a4, float a5, int a6, NiD3DPass *a2)
{
  float *v9; // eax
  bool v10; // zf
  unsigned int *v11; // ecx
  unsigned int *v12; // ecx

  if ( *((_DWORD *)this + 0x11) )
    return 0;
  *(this + 0x16) = 0.0;
  if ( a6 )
  {
    v9 = *(float **)(a6 + 0x58);
    if ( v9 && (v9 == this || !sub_6C6110(this, *(_DWORD *)(a6 + 0x58))) || !sub_6C6ED0(this, a6, a6) )
      return 0;
    *((_DWORD *)this + 0x16) = a6;
  }
  sub_6C6A50(this, arg0);
  *(this + 7) = a4;
  if ( a5 <= 0.0 )
  {
    v10 = *((_DWORD *)this + 0x11) == 0;
    *((_DWORD *)this + 0x11) = 1;
    if ( v10 )
    {
      v12 = (unsigned int *)(*((_DWORD *)this + 0x10) + 0x4C);
      a2 = (NiD3DPass *)this;
      sub_73A5E0(v12, &a2);
    }
    goto LABEL_19;
  }
  if ( (_BYTE)a2 )
  {
    v10 = *((_DWORD *)this + 0x11) == 0;
    *((_DWORD *)this + 0x11) = 5;
    if ( v10 )
      goto LABEL_15;
  }
  else
  {
    v10 = *((_DWORD *)this + 0x11) == 0;
    *((_DWORD *)this + 0x11) = 2;
    if ( v10 )
    {
LABEL_15:
      v11 = (unsigned int *)(*((_DWORD *)this + 0x10) + 0x4C);
      a2 = (NiD3DPass *)this;
      sub_73A5E0(v11, &a2);
    }
  }
  *(this + 0x13) = -flt_A7DEB4;
  *(this + 0x14) = a5;
LABEL_19:
  if ( a3 )
    *(this + 0x12) = -flt_A7DEB4;
  return 1;
}
