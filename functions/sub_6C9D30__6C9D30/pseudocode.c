char __thiscall sub_6C9D30(float *this, float *arg0, float a3, float a4, NiD3DPass *a2, float a6, float a7, int a8)
{
  char v9; // di
  bool v10; // zf
  int v11; // ecx
  char v13; // [esp+Ch] [ebp-Ch]

  sub_6C9CB0((int)this, 0.0, 1);
  if ( a3 <= 0.0 )
    a3 = flt_A79DB4;
  if ( *((_DWORD *)this + 0x11) )
    return 0;
  v9 = (char)a2;
  v13 = (char)a2;
  *(this + 0x16) = 0.0;
  sub_6C6A50(this, v13);
  v10 = *((_DWORD *)this + 0x11) == 0;
  *(this + 7) = a6;
  *((_DWORD *)this + 0x11) = 1;
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 0x10);
    a2 = (NiD3DPass *)this;
    sub_73A5E0((unsigned int *)(v11 + 0x4C), &a2);
  }
  if ( !sub_6C9BA0(arg0, v9, 0, a7, a3, a8, (NiD3DPass *)1) )
    return 0;
  sub_6C9CB0((int)this, a3, 1);
  *(this + 0x15) = *(this + 0xF) / *(this + 0xA);
  arg0[0x15] = a4 / arg0[0xA];
  return 1;
}
