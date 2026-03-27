// positive sp value has been detected, the output may be wrong!
int __userpurge Actor_MagicTarget_CalcResFactor_::GetCasterLuck@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        float a5,
        int a6)
{
  int v6; // esi
  int v7; // eax

  if ( a3 )
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x284))(a3, 7);
  else
    v6 = 0x64;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x284))(a2);
  return Calc_MagicTargetResistanceFactor(a1, v6, v7, 2, a5);
}
