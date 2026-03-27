char __thiscall sub_619920(int this, int a2)
{
  int v3; // eax
  double v5; // st7
  int v6; // eax
  float v8; // [esp+Ch] [ebp+4h]

  v3 = *(_DWORD *)(this + 0x6C);
  if ( v3 == a2 )
    goto LABEL_18;
  if ( a2 )
  {
    if ( a2 == 4 )
    {
      *(float *)(this + 0xCC) = flt_A30634;
      v5 = sub_6141B0((float *)this);
      goto LABEL_7;
    }
LABEL_5:
    if ( *(_DWORD *)(this + 0x6C) != 4 )
    {
LABEL_8:
      v6 = *(_DWORD *)(this + 0x6C);
      if ( v6 == 6 )
        *(_DWORD *)(this + 0x12C) = 0;
      if ( v6 == 4 )
      {
        v8 = flt_B36F70;
        *(float *)(this + 0xEC) = *(float *)(this + 0x44);
        *(float *)(this + 0xF0) = v8;
        *(float *)(this + 0xF4) = flt_A30634;
      }
      v3 = *(_DWORD *)(this + 0x6C);
      if ( v3 != 4 && v3 != 7 && v3 != 9 && v3 != 8 && v3 != 0xC )
        *(_BYTE *)(this + 0x191) = 1;
LABEL_18:
      *(_DWORD *)(this + 0x6C) = a2;
      return v3;
    }
    v5 = flt_A30634;
LABEL_7:
    *(float *)(this + 0xCC) = v5;
    goto LABEL_8;
  }
  if ( v3 != 4 )
    goto LABEL_5;
  LOBYTE(v3) = sub_6163A0(this, 0);
  if ( !(_BYTE)v3 )
    goto LABEL_5;
  return v3;
}
