int __userpurge ValueModifierEffect_ModifyAV_::CheckHostility@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD *v8; // ecx

  v8 = *(_DWORD **)(a3 + 0xC); /*0x6a8531*/
  if ( !v8[4] || !EffectItem_IsHostile(v8) ) /*0x6a853a*/
    a1 = 0; /*0x6a8543*/
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 0xC) + 0x1C) + 0x58) & 2) == 0 ) /*0x6a8553*/
    JUMPOUT(0x6A8574); /*0x6a8574*/
  return ValueModifierEffect_ModifyAV_::ApplyRecoverableMod(a1, a2, a3, a4, a5, a6, a7, a8);
}
