double __thiscall sub_4C9A20(int this)
{
  int v1; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v1 = *(_DWORD *)(this + 0x3C)) != 0 )
    return *(float *)(v1 + 0xC);
  else
    return 0.0;
}
