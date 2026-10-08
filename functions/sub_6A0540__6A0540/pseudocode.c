// Verified MagicShaderHitEffect +0x84 PostLink callback derives its shader from the owning ActiveEffect's MagicItem when available, restores target attachment, runs Update and returns its bool result. ActiveEffect_Base_PostLink ignores that result and registers the object with ActorProcessManager.
bool __thiscall MagicShaderHitEffect_PostLink(
        MagicShaderHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *linkContext,
        TESEffectShader *fallbackEffectShader)
{
  bool bFinished; // bl
  BSTempEffectVtbl *vtable; // eax
  bool (__thiscall *Update)(_DWORD, _DWORD); // edx
  float linkContexta; // [esp+18h] [ebp+8h]

  nullsub_18((int)ownerActiveEffect, (int)linkContext, 0); /*0x6a0551*/
  if ( ownerActiveEffect )                      // Verified (Oblivion): PostLink sets effectShader_34 from EffectSetting::effectShader at +0x78 or the TESEffectShader* fallback. EffectSetting_LinkForm resolves the persisted form ID through a direct TESEffectShader RTTI cast. /*0x6a0558*/
    this->effectShader_34 = MagicItem_GetFXEffect(ownerActiveEffect->members.item, 0)->effectShader; /*0x6a0567*/
  else
    this->effectShader_34 = fallbackEffectShader; /*0x6a0570*/
  linkContexta = this->super.elapsedSeconds; /*0x6a057b*/
  bFinished = this->super.bFinished; /*0x6a057f*/
  ((void (__thiscall *)(MagicShaderHitEffect *))this->super.super.vtable[1].super.super.Destructor)(this); /*0x6a0584*/
  vtable = this->super.super.vtable; /*0x6a058a*/
  this->super.elapsedSeconds = linkContexta; /*0x6a058c*/
  Update = (bool (__thiscall *)(_DWORD, _DWORD))vtable->Update; /*0x6a0591*/
  this->super.bFinished = bFinished; /*0x6a059a*/
  return Update(this, 0.0); /*0x6a059f*/
}
