void __thiscall sub_93FB00(int this, int a2)
{
  if ( !*(_BYTE *)(this + 8) || *(float *)(a2 + 0x1C) < (double)*(float *)(this + 0x2C) )
  {
    *(_BYTE *)(this + 8) = 1;
    *(_OWORD *)(this + 0x10) = *(_OWORD *)a2;
    *(_OWORD *)(this + 0x20) = *(_OWORD *)(a2 + 0x10);
    *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 0x1C);
  }
}
