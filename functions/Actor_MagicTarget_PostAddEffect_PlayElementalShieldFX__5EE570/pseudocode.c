int __userpurge Actor_MagicTarget_PostAddEffect_::PlayElementalShieldFX@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int *a9)
{
  signed int DamageShieldType; // ebx
  int v10; // ebp
  int v11; // eax

  DamageShieldType = Magic_GetDamageShieldType(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x98)); /*0x5ee582*/
  if ( DamageShieldType ) /*0x5ee589*/
  {
    v10 = **(_DWORD **)(a1 - 0x10); /*0x5ee591*/
    v11 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)a1 + 8))(a1, DamageShieldType); /*0x5ee599*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(v10 + 0x44C))(*(_DWORD *)(a1 - 0x10), v11) ) /*0x5ee5a5*/
    {
      if ( TemporaryObjects_PlayMagicShieldShader((int *)&qword_B3BB2C[0x75], a1 - 0x68, DamageShieldType) ) /*0x5ee5b6*/
        *(_DWORD *)(a2 + 0x14) |= 6u; /*0x5ee5bf*/
    }
  }
  return Actor_MagicTarget_PostAddEffect_::PlayPainFX(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
