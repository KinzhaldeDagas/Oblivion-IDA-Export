void __usercall ValueModifierEffect_GetEffectiveMagnitude_::IgnoreUnaffectedAVs(
        _DWORD *a1@<esi>,
        float a2,
        float a3,
        float a4)
{
  MagicTarget *v4; // ecx
  int *ParentActor; // edi

  if ( (unsigned int)(*(int (**)(void))(*a1 + 0x44))() > 7 /*0x6a8289*/
    && (unsigned int)((*(int (__thiscall **)(_DWORD *))(*a1 + 0x44))(a1) - 8) > 3
    && (unsigned int)((*(int (__thiscall **)(_DWORD *))(*a1 + 0x44))(a1) - 0xC) > 0x14
    || (*(int (__thiscall **)(_DWORD *))(*a1 + 0x44))(a1) == 0xA
    || *(_DWORD *)(*(_DWORD *)(a1[3] + 0x1C) + 0x98) == 0x45484241
    || a4 > 0.0 )
  {
    JUMPOUT(0x6A82E7); /*0x6a82e7*/
  }
  v4 = (MagicTarget *)a1[8]; /*0x6a828b*/
  if ( v4 ) /*0x6a8292*/
  {
    ParentActor = (int *)MagicTarget_GetParentActor(v4); /*0x6a8299*/
    ValueModifierEffect_GetEffectiveMagnitude_::TestActualMagnitude(ParentActor, (int)a1, a2, a3, a4); /*0x6a829b*/
  }
  else
  {
    ValueModifierEffect_GetEffectiveMagnitude_::TestActualMagnitude(0, (int)a1, a2, a3, a4); /*0x6a829e*/
  }
}
