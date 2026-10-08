int __usercall EffectSettingCollection_Reset@<eax>(char a1@<bpl>)
{
  EffectSettingCollection_Clear((NiTMap_TESCELL *)&MEMORY[0xB33508]); /*0x418e55*/
  return EffectSettingCollection_InitAllEffects(a1);
}
