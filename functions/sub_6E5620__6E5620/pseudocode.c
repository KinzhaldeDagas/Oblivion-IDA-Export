char __thiscall sub_6E5620(int this, float a2, int a3, float *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp-4h]

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(float *)(this + 0x1C);
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(this + 0x20) != 0xFFFF )
    {
      v7 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, this + 0x1C, 1, *(_DWORD *)(this + 0x18), *(_DWORD *)(this + 0x20));
      v5 = a2;
    }
    *a4 = *(float *)(this + 0x1C);
    *(float *)(this + 8) = v5;
    return 1;
  }
}
