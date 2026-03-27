char __thiscall sub_6E63D0(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  int v7; // eax
  float v8; // [esp+20h] [ebp-24h]
  float v9; // [esp+28h] [ebp-1Ch]
  float v10; // [esp+2Ch] [ebp-18h]
  float v11; // [esp+30h] [ebp-14h]
  int v12[4]; // [esp+34h] [ebp-10h] BYREF

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    a4[3] = *(_DWORD *)(this + 0x28);
    return 1;
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x2C);
    if ( v7 != 0xFFFF )
    {
      v8 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
      sub_6E7470(
        *(_DWORD **)(this + 0x14),
        v8,
        (int)v12,
        4,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x34),
        *(float *)(this + 0x38));
      v9 = *(float *)&v12[1];
      *(_DWORD *)(this + 0x1C) = v12[0];
      v10 = *(float *)&v12[2];
      *(float *)(this + 0x20) = v9;
      v11 = *(float *)&v12[3];
      *(float *)(this + 0x24) = v10;
      v5 = a2;
      *(float *)(this + 0x28) = v11;
    }
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    a4[3] = *(_DWORD *)(this + 0x28);
    *(float *)(this + 8) = v5;
    return 1;
  }
}
