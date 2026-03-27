char __thiscall sub_6E60E0(int this, float a2, int a3, float *a4)
{
  double v5; // st7
  int v7; // eax
  float v8; // [esp+20h] [ebp-4h]

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(float *)(this + 0x1C);
    return 1;
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x20);
    if ( v7 != 0xFFFF )
    {
      v8 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
      sub_6E7470(
        *(_DWORD **)(this + 0x14),
        v8,
        this + 0x1C,
        1,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x24),
        *(float *)(this + 0x28));
      v5 = a2;
    }
    *a4 = *(float *)(this + 0x1C);
    *(float *)(this + 8) = v5;
    return 1;
  }
}
