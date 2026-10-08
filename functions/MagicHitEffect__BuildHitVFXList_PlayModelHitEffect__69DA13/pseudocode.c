// Verified (Oblivion): model-hit factory skips when ActiveEffect aeFlags bit 0x4 is set or the global guard is nonzero; allocates 0x38 bytes, uses the target's parent reference and owner ActiveEffect, invokes the virtual initializer, registers successful effects with ActorProcessManager, then chains the shader factory. Failed model initialization is destroyed before shader fallback.
MagicShaderHitEffect **__cdecl MagicHitEffect__BuildHitVFXList_::PlayModelHitEffect(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        ActiveEffect *a8)
{
  NiObject *v8; // esi
  TESObjectREFR *v9; // eax
  NiObject *v10; // esi
  NiObject **v11; // eax

  if ( (a8->members.aeFlags & 4) == 0 && !unk_B333B8 ) /*0x69da27*/
  {
    v8 = (NiObject *)FormHeapAlloc(0x38u);      // Verified (Oblivion): model-hit factory allocates exactly sizeof(MagicModelHitEffect) = 0x38 bytes. It suppresses model creation when the shared render-state byte at B333B8 is nonzero; that global is also referenced by ShadowPass/frame code and remains Unknown. /*0x69da37*/
    if ( v8 ) /*0x69da46*/
    {
      v9 = a8->members.target->vtbl->GetParentReference(a8->members.target); /*0x69da51*/
      v10 = MagicModelHitEffect_constr_args(v8, v9, (int)a8); /*0x69da5b*/
    }
    else
    {
      v10 = 0; /*0x69da5f*/
    }
    if ( !((unsigned __int8 (__thiscall *)(NiObject *))v10->__vftable[1].Load)(v10) ) /*0x69da74*/
    {
      v10->__vftable->super.Destructor((NiRefObject *)v10, 1); /*0x69daaa*/
      return MagicHitEffect__BuildHitVFXList_::PlayShaderHitEffect(0, a8); /*0x69daab*/
    }
    ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], (BSTempEffect *)v10); /*0x69da7c*/
    v11 = (NiObject **)FormHeapAlloc(8u); /*0x69da83*/
    if ( v11 ) /*0x69da8d*/
    {
      *v11 = v10; /*0x69da8f*/
      v11[1] = 0; /*0x69da91*/
      return MagicHitEffect__BuildHitVFXList_::PlayShaderHitEffect(v11, a8); /*0x69da9a*/
    }
  }
  return MagicHitEffect__BuildHitVFXList_::PlayShaderHitEffect(0, a8);
}
