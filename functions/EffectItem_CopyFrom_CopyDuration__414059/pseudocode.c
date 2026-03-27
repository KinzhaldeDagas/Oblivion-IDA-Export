int __usercall EffectItem_CopyFrom_::CopyDuration@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4@<ecx>,
        double a5@<st0>,
        int _4,
        int _8,
        int a8,
        int a9,
        int a10)
{
  int v10; // eax

  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x58) & 0x80) != 0 )
    v10 = 0;
  else
    v10 = *(_DWORD *)(a2 + 0xC);
  if ( (*(_DWORD *)(a4 + 0x58) & 0x80) == 0 && v10 >= a1 )
  {
    *(float *)(a3 + 0x20) = a5;
    *(_DWORD *)(a3 + 0xC) = v10;
  }
  return EffectItem_CopyFrom_::CopyParam(a1, a2, a3, _4, _8, a8, a9, a10);
}
