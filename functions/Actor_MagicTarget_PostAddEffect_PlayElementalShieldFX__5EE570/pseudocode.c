int __usercall Actor_MagicTarget_PostAddEffect_::PlayElementalShieldFX@<eax>(
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

  DamageShieldType = Magic_GetDamageShieldType(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x98));
  if ( DamageShieldType )
  {
    v10 = **(_DWORD **)(a1 - 0x10);
    v11 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)a1 + 8))(a1, DamageShieldType);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(v10 + 0x44C))(*(_DWORD *)(a1 - 0x10), v11) )
    {
      if ( TemporaryObjects_PlayMagicShieldShader((int *)&ActorProcessManager_ptr, a1 - 0x68, DamageShieldType) )
        *(_DWORD *)(a2 + 0x14) |= 6u;
    }
  }
  return Actor_MagicTarget_PostAddEffect_::PlayPainFX(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
