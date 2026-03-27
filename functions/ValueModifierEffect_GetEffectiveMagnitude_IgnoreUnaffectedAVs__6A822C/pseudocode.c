int __usercall ValueModifierEffect_GetEffectiveMagnitude_::IgnoreUnaffectedAVs@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        float a4)
{
  MagicTarget *v4; // ecx

  if ( (unsigned int)(*(int (**)(void))(*a1 + 0x44))() > 7
    && (unsigned int)((*(int (__thiscall **)(_DWORD *))(*a1 + 0x44))(a1) - 8) > 3
    && (unsigned int)((*(int (__thiscall **)(_DWORD *))(*a1 + 0x44))(a1) - 0xC) > 0x14
    || (*(int (__thiscall **)(_DWORD *))(*a1 + 0x44))(a1) == 0xA
    || *(_DWORD *)(*(_DWORD *)(a1[3] + 0x1C) + 0x98) == 0x45484241
    || a4 > 0.0 )
  {
    JUMPOUT(0x6A82E7);
  }
  v4 = (MagicTarget *)a1[8];
  if ( v4 )
    MagicTarget_GetParentActor(v4);
  return ValueModifierEffect_GetEffectiveMagnitude_::TestActualMagnitude();
}
