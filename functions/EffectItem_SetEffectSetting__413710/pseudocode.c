int __thiscall EffectItem_SetEffectSetting(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( *(this + 6) || *(_DWORD *)(a2 + 0x98) != 0x46464553 )
    return EffectItem_SetEffectSetting_::CleanupExtraSCIT(0, a2, (int)this, a2);
  else
    return EffectItem_SetEffectSetting_::AllocateSCITBlock(0, a2, (int)this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
