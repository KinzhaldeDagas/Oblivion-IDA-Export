// Verified (Oblivion): model save receives owner ActiveEffect* and target TESObjectREFR*, writes base data, then a 16-bit length and serialized NiStreamable model resource payload. Fallout instead serializes controller-manager save data.
void __thiscall MagicModelHitEffect_SaveExtraData(
        MagicModelHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  TESObjectREFR *vtbl; // edi
  NiObject *modelRoot_30; // esi
  NiObject *v7; // ebx
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // eax
  float contextA; // [esp+18h] [ebp+4h]

  vtbl = targetReference; /*0x69ee38*/
  MagicHitEffect_SaveExtraData(&this->super, ownerActiveEffect, targetReference); /*0x69ee40*/
  modelRoot_30 = (NiObject *)this->modelRoot_30; /*0x69ee45*/
  v7 = 0; /*0x69ee48*/
  if ( modelRoot_30 ) /*0x69ee4c*/
  {
    modelRoot_30 = (NiObject *)modelRoot_30[1].members.m_uiRefCount; /*0x69ee4e*/
    v7 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, modelRoot_30); /*0x69ee5f*/
  }
  targetReference = 0; /*0x69ee63*/
  if ( v7 ) /*0x69ee6b*/
    targetReference = (TESObjectREFR *)(unsigned __int16)sub_4DA760((int)v7); /*0x69ee79*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &targetReference, 2u); /*0x69ee8a*/
  if ( (_WORD)targetReference ) /*0x69ee95*/
  {
    contextA = kTerrainLODQuadRayDirectionZ; /*0x69ee9f*/
    if ( vtbl ) /*0x69eea3*/
    {
      if ( vtbl->vtbl->IsActor(vtbl) ) /*0x69eeaf*/
      {
        if ( ownerActiveEffect ) /*0x69eeb7*/
        {
          vtbl = (TESObjectREFR *)vtbl[1].vtbl; /*0x69eeb9*/
          v9 = OblivionDynamicCast( /*0x69eecb*/
                 vtbl,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                 &MiddleHighProcess `RTTI Type Descriptor',
                 0);
          if ( v9 ) /*0x69eed5*/
          {
            v10 = v9[0x5F]; /*0x69eed7*/
            if ( v10 ) /*0x69eedf*/
              contextA = *(float *)(v10 + 0x94); /*0x69eee7*/
          }
        }
      }
    }
    sub_4DA7F0(v8, (int)vtbl, (int)modelRoot_30, (int)v7, contextA); /*0x69eef4*/
  }
}
