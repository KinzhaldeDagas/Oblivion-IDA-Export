EffectSettingCollection *__usercall EffectSettingCollection::EffectSettingCollection@<eax>(
        EffectSettingCollection *this@<ecx>,
        char a2@<bpl>)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-20h]

  *((_DWORD *)this + 1) = 0x25; /*0x418ddf*/
  *(_DWORD *)this = &NiTMapBase<DFALL<EffectSetting *>,enum MagicSystem::EffectID,EffectSetting *>::`vftable'; /*0x418dec*/
  *((_DWORD *)this + 3) = 0; /*0x418df2*/
  v3 = FormHeapAlloc(0x94u); /*0x418dfe*/
  v5 = 4 * *((_DWORD *)this + 1); /*0x418e0a*/
  *((_DWORD *)this + 2) = v3; /*0x418e0e*/
  _memset(v3, 0, v5); /*0x418e11*/
  *(_DWORD *)this = &EffectSettingCollection::`vftable'; /*0x418e23*/
  EffectSettingCollection_InitAllEffects(a2); /*0x418e29*/
  return this; /*0x418e30*/
}
