int __userpurge Actor_MagicTarget_CalcResFactor_::GetTargetEffectItemResistance@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // eax
  double v10; // st7

  if ( !a2 )
    return Actor_MagicTarget_CalcResFactor_::GetCasterLuck(a3, a4, a5, 0.0);
  v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a9 + 0xC) + 0x1C) + 0x68);
  if ( v9 == 0xFFFFFFFF || v9 == a1 )
    return Actor_MagicTarget_CalcResFactor_::GetCasterLuck(a3, a4, a5, 0.0);
  v10 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, v9);
  return Actor_MagicTarget_CalcResFactor_::GetCasterLuck(a3, a4, a5, v10);
}
