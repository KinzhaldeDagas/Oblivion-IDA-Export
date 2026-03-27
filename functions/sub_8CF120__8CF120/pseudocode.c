void __thiscall sub_8CF120(int this, int a2)
{
  int v2; // eax
  int i; // esi
  int v4; // esi
  int j; // eax

  if ( !*(_DWORD *)(this + 0x30) || *(float *)(a2 + 0x1C) < (double)*(float *)(this + 0x2C) )
  {
    *(_OWORD *)(this + 0x10) = *(_OWORD *)a2;
    *(_OWORD *)(this + 0x20) = *(_OWORD *)(a2 + 0x10);
    v2 = *(_DWORD *)(a2 + 0x20);
    for ( i = *(_DWORD *)(v2 + 0xC); i; i = *(_DWORD *)(i + 0xC) )
      v2 = i;
    *(_DWORD *)(this + 0x30) = v2;
    *(_DWORD *)(this + 0x34) = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4);
    v4 = *(_DWORD *)(a2 + 0x24);
    for ( j = *(_DWORD *)(v4 + 0xC); j; j = *(_DWORD *)(j + 0xC) )
      v4 = j;
    *(_DWORD *)(this + 0x38) = v4;
    *(_DWORD *)(this + 0x3C) = *(_DWORD *)(*(_DWORD *)(a2 + 0x24) + 4);
    *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 0x1C);
  }
}
