int __userpurge ValueModifierEffect_ModifyAV@<eax>(int a1@<ecx>, TESObjectREFR *a2, int a3, int a4, int a5, int a6)
{
  if ( !a2 )
    return ValueModifierEffect_ModifyAV_::Done(0, a3);
  if ( Actor_IsPlayer(a2)
    && *(_DWORD *)(a1 + 0x28) == 4
    && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 2) != 0 )
  {
    return ValueModifierEffect_ModifyAV_::ApplyAbilityAsPermanent((int)a2, a1, (int)a2, a3, a4, a5);
  }
  return ValueModifierEffect_ModifyAV_::GetCasterActor((int)a2, a1, (int)a2, a3, a4, a5, a6);
}
