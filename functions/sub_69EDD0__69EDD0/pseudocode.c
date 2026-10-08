// Verified (Oblivion): model extra size uses the owner ActiveEffect* only as a non-null context for process-data sizing, and uses the target reference for actor/process checks; it adds the resource-stream payload length to base size +2.
unsigned __int16 __thiscall MagicModelHitEffect_GetExtraSaveSize(
        MagicModelHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  unsigned __int16 v4; // dx
  NiAVObject *modelRoot_30; // eax
  NiObject *v6; // eax
  unsigned __int16 targetReferencea; // [esp+Ch] [ebp+8h]

  v4 = MagicHitEffect_GetExtraSaveSize(&this->super, ownerActiveEffect, targetReference) + 2; /*0x69ede8*/
  modelRoot_30 = this->modelRoot_30; /*0x69edeb*/
  targetReferencea = v4; /*0x69edf0*/
  if ( modelRoot_30 /*0x69ee0a*/
    && (v6 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, (NiObject *)modelRoot_30->members.super.m_controller)) != 0 )
  {
    return sub_4DA760((int)v6) + targetReferencea; /*0x69ee1d*/
  }
  else
  {
    return targetReferencea; /*0x69ee23*/
  }
}
