char __thiscall sub_69D9A0(int this, float a2)
{
  double v3; // st7
  int v4; // ecx

  v3 = a2 + *(float *)(this + 0x20);
  v4 = *(_DWORD *)(this + 0x1C);
  *(float *)(this + 0x20) = v3;
  if ( !v4
    || !(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x154))(v4)
    || (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 8) & 0x20) != 0 )
  {
    return 0;
  }
  if ( *(float *)(this + 8) < (double)*(float *)(this + 0x20) )
    *(_BYTE *)(this + 0x24) = 1;
  return 1;
}
