void __thiscall sub_8F03F0(int this, int a2, int a3)
{
  int v3; // eax

  if ( *(float *)(a3 + 0x14) < (double)*(float *)(this + 4) )
  {
    *(_DWORD *)(this + 4) = *(_DWORD *)(a3 + 0x14);
    v3 = *(_DWORD *)(this + 0xC);
    *(_OWORD *)v3 = *(_OWORD *)a3;
    *(_DWORD *)(v3 + 0x10) = *(_DWORD *)(a3 + 0x10);
    *(_DWORD *)(v3 + 0x14) = *(_DWORD *)(a3 + 0x14);
    *(_BYTE *)(this + 8) = 1;
  }
}
