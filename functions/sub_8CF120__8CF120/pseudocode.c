void __thiscall sub_8CF120(int this, int a2)
{
  int v2; // eax
  int i; // esi
  int v4; // esi
  int j; // eax

  if ( !*(_DWORD *)(this + 0x30) || *(float *)(a2 + 0x1C) < (double)*(float *)(this + 0x2C) ) /*0x8cf136*/
  {
    *(_OWORD *)(this + 0x10) = *(_OWORD *)a2; /*0x8cf13b*/
    *(_OWORD *)(this + 0x20) = *(_OWORD *)(a2 + 0x10); /*0x8cf143*/
    v2 = *(_DWORD *)(a2 + 0x20); /*0x8cf147*/
    for ( i = *(_DWORD *)(v2 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x8cf150*/
      v2 = i; /*0x8cf152*/
    *(_DWORD *)(this + 0x30) = v2; /*0x8cf15b*/
    *(_DWORD *)(this + 0x34) = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4); /*0x8cf164*/
    v4 = *(_DWORD *)(a2 + 0x24); /*0x8cf167*/
    for ( j = *(_DWORD *)(v4 + 0xC); j; j = *(_DWORD *)(j + 0xC) ) /*0x8cf16f*/
      v4 = j; /*0x8cf171*/
    *(_DWORD *)(this + 0x38) = v4; /*0x8cf17a*/
    *(_DWORD *)(this + 0x3C) = *(_DWORD *)(*(_DWORD *)(a2 + 0x24) + 4); /*0x8cf183*/
    *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 0x1C); /*0x8cf189*/
  }
}
