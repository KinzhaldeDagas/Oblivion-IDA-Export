char __thiscall sub_6E5DB0(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  int v7; // eax
  float v8; // [esp+20h] [ebp-20h]
  float v9; // [esp+28h] [ebp-18h]
  float v10; // [esp+2Ch] [ebp-14h]
  int v11[4]; // [esp+30h] [ebp-10h] BYREF

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    return 1;
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x28);
    if ( v7 != 0xFFFF )
    {
      v8 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
      sub_6E7470(
        *(_DWORD **)(this + 0x14),
        v8,
        (int)v11,
        3,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x2C),
        *(float *)(this + 0x30));
      v9 = *(float *)&v11[1];
      *(_DWORD *)(this + 0x1C) = v11[0];
      v10 = *(float *)&v11[2];
      *(float *)(this + 0x20) = v9;
      v5 = a2;
      *(float *)(this + 0x24) = v10;
    }
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    *(float *)(this + 8) = v5;
    return 1;
  }
}
