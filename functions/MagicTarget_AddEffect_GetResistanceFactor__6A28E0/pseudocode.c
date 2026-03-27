int __usercall MagicTarget_AddEffect_::GetResistanceFactor@<eax>(
        int ebp0@<ebp>,
        int edi0@<edi>,
        int a3@<esi>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  float v16; // [esp+18h] [ebp+18h]

  if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a3 + 0x18))(a3, a4) == 4
    || (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x18))(a3) == 1
    || HIBYTE(a9) )
  {
    return MagicTarget_AddEffect_::ResistanceExempt(ebp0, edi0, a5, a6, a7);
  }
  v16 = ((double (__thiscall *)(int, int, int, int))*(_DWORD *)(*(_DWORD *)edi0 + 0x20))(edi0, a15, a3, ebp0);
  if ( v16 > 0.0 )
    return MagicTarget_AddEffect_::GetPlayerTarget(ebp0, edi0, a5, a6, a7);
  else
    return MagicTarget_AddEffect_::GetPlayerCaster(a15, edi0, a5, a6, a7, a8, a9, SLOBYTE(v16), a11, a12, a13, a14, a15);
}
