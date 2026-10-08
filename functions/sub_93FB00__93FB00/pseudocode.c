void __thiscall sub_93FB00(int this, int a2)
{
  if ( !*(_BYTE *)(this + 8) || *(float *)(a2 + 0x1C) < (double)*(float *)(this + 0x2C) ) /*0x93fb16*/
  {
    *(_BYTE *)(this + 8) = 1; /*0x93fb18*/
    *(_OWORD *)(this + 0x10) = *(_OWORD *)a2; /*0x93fb1f*/
    *(_OWORD *)(this + 0x20) = *(_OWORD *)(a2 + 0x10); /*0x93fb27*/
    *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 0x1C); /*0x93fb2e*/
  }
}
