void __thiscall sub_8F03F0(int this, int a2, int a3)
{
  int v3; // eax

  if ( *(float *)(a3 + 0x14) < (double)*(float *)(this + 4) ) /*0x8f03ff*/
  {
    *(_DWORD *)(this + 4) = *(_DWORD *)(a3 + 0x14); /*0x8f0404*/
    v3 = *(_DWORD *)(this + 0xC); /*0x8f0407*/
    *(_OWORD *)v3 = *(_OWORD *)a3; /*0x8f040d*/
    *(_DWORD *)(v3 + 0x10) = *(_DWORD *)(a3 + 0x10); /*0x8f0414*/
    *(_DWORD *)(v3 + 0x14) = *(_DWORD *)(a3 + 0x14); /*0x8f041a*/
    *(_BYTE *)(this + 8) = 1; /*0x8f041d*/
  }
}
