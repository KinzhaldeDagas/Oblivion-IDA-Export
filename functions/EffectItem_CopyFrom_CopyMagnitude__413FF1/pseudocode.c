int __usercall EffectItem_CopyFrom_::CopyMagnitude@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // eax
  int v8; // ecx

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 0x1C) + 0x58) & 0x100) != 0 )
    v7 = 0;
  else
    v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)(a2 + 0x1C);
  if ( (*(_DWORD *)(v8 + 0x58) & 0x100) == 0 && v7 >= 0 )
  {
    *(float *)(a2 + 0x20) = -1.0;
    *(_DWORD *)(a2 + 4) = v7;
  }
  return EffectItem_CopyFrom_::CopyArea(0, a1, a2, v8, -1.0, a3, a4, a5, a6, a7);
}
