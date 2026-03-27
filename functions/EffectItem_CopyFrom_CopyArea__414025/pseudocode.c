int __usercall EffectItem_CopyFrom_::CopyArea@<eax>(
        int a1@<ebp>,
        _DWORD *a2@<edi>,
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

  if ( (*(_DWORD *)(a2[7] + 0x58) & 0x200) != 0 || a2[4] == a1 )
    v10 = 0;
  else
    v10 = a2[2];
  if ( (*(_DWORD *)(a4 + 0x58) & 0x200) == 0 && *(_DWORD *)(a3 + 0x10) != a1 && v10 >= a1 )
  {
    *(float *)(a3 + 0x20) = a5;
    *(_DWORD *)(a3 + 8) = v10;
  }
  return EffectItem_CopyFrom_::CopyDuration(a1, (int)a2, a3, a4, a5, _4, _8, a8, a9, a10);
}
