void __thiscall sub_8A2DE0(int *this, int a2)
{
  _DWORD **v3; // ecx
  float *v4; // eax
  float *v5; // edi
  int v6; // eax

  sub_89F580(this, a2);
  if ( *(this + 2) )
  {
    sub_89F570(this);
    sub_8AA1A0(*(this + 2), a2 + 0x20);
    sub_89F570(this);
    v3 = (_DWORD **)*(this + 2);
    if ( v3 )
    {
      v4 = (float *)sub_8A98D0(v3);
      v5 = v4;
      if ( v4 )
      {
        *(float *)(a2 + 0xB0) = sub_89DA90(v4);
        *(_OWORD *)(a2 + 0xA0) = *((_OWORD *)v5 + 9);
        *(float *)(a2 + 0xB4) = v5[0x32];
        *(float *)(a2 + 0xB8) = v5[0x33];
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)v5 + 0x28))(v5, a2 + 0x70);
        *(_OWORD *)(a2 + 0xA0) = *((_OWORD *)v5 + 9);
      }
    }
    v6 = *(this + 2);
    if ( v6 )
    {
      if ( v6 != 0xFFFFFFEC )
      {
        *(float *)(a2 + 0xC4) = sub_4D6A70(this);
        *(float *)(a2 + 0xC8) = sub_8A2D20(this);
      }
    }
  }
}
