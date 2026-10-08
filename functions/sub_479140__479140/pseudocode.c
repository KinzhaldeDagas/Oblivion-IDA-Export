// Six-argument cdecl helper (all ten native callers push 6 arguments; unusedContext and unusedTrailing are not read). Reads NiStringExtraData 'Prn' from sourceModelRoot, falling back to modelRoot; resolves that exact parent in skeletonRoot and attaches modelRoot. For modelType==7 it forces Prn string byte 6 to 'L' for lookup, then writes it back to 'R'. It then finds exact-name 'Scb' inside modelRoot and attaches that object separately to the same parent, reparenting Scb as modelRoot's sibling before refreshing property/effect state. Missing creature parents invoke the narrow FadeNode-chain Scb removal. Every exit returns the bool result of sub_88D000(modelRoot,1,1), which is not proven to be general attachment success.
bool __cdecl AttachModelUsingPrnExtraData(
        NiNode *skeletonRoot,
        NiAVObject *modelRoot,
        NiObjectNET *sourceModelRoot,
        unsigned int unusedContext,
        int modelType,
        unsigned int unusedTrailing)
{
  NiObject *ExtraData; // eax
  NiObject *v7; // eax
  NiObject *v8; // edi
  int v9; // eax
  int v10; // esi
  PlayerCharacter *v11; // eax
  PlayerCharacter *v12; // esi
  NiAVObject *v14; // edi

  if ( sourceModelRoot /*0x479169*/
    && (ExtraData = (NiObject *)NiObjectNET_GetExtraData(sourceModelRoot, (const char *)&off_A3CEAC)) != 0
    || (ExtraData = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)modelRoot, (const char *)&off_A3CEAC)) != 0 )
  {
    v7 = NiRTTI_Cast((BSStringT *)stru_B3FCC0, ExtraData); /*0x479176*/
    v8 = v7; /*0x47917b*/
    if ( v7 ) /*0x479182*/
    {
      if ( modelType == 7 ) /*0x479194*/
        *(_BYTE *)(v7[1].members.m_uiRefCount + 6) = 0x4C; /*0x479199*/
      v9 = NiObjectNET_LookupObjectByName(skeletonRoot, (char *)v7[1].members.m_uiRefCount); /*0x4791a6*/
      v10 = v9; /*0x4791b0*/
      if ( modelType == 7 ) /*0x4791b2*/
        *(_BYTE *)(v8[1].members.m_uiRefCount + 6) = 0x52; /*0x4791b7*/
      if ( v9 ) /*0x4791bd*/
      {
        (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v9 + 0x84))(v9, modelRoot, 1);// Attach the generated model root to the exact skeleton parent selected by Prn extra data. /*0x479288*/
        v14 = (NiAVObject *)NiObjectNET_LookupObjectByName(modelRoot, off_A3CE0C); /*0x479295*/
        if ( v14 ) /*0x47929c*/
        {
          (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v10 + 0x84))(v10, v14, 1);// Reparent exact-name Scb out of modelRoot as a sibling under the same Prn-selected parent; AddObject detaches it from its former parent. /*0x4792ab*/
          sub_897A90(v10, 1); /*0x4792b0*/
          NiAVObject_InitializePropertyState(v14); /*0x4792ba*/
          NiNode_UpdateDynamicEffectState((NiNode *)v14); /*0x4792c1*/
          sub_4784A0(&modelRoot[1]); /*0x4792ce*/
          sub_477F90((int)&modelRoot[1]); /*0x4792d5*/
        }
        return sub_88D000((NiObjectNET *)modelRoot, 1, 1); /*0x4792e2*/
      }
      else
      {
        v11 = sub_4DC270((int)skeletonRoot); /*0x4791c8*/
        v12 = v11; /*0x4791cd*/
        if ( v11 /*0x4791f6*/
          && v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)
          && v12->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v12)->member.type == kFormType_Creature )
        {
          NiNode_RemoveScbChildAlongFadeNodeChain((NiNode *)modelRoot); /*0x4791f9*/
          return sub_88D000((NiObjectNET *)modelRoot, 1, 1); /*0x479209*/
        }
        else
        {
          PrintError( /*0x479220*/
            "Could not find parent node '%s' for object '%s'.",
            (const char *)v8[1].members.m_uiRefCount,
            modelRoot->members.super.m_pcName);
          return sub_88D000((NiObjectNET *)modelRoot, 1, 1); /*0x479230*/
        }
      }
    }
    else
    {
      PrintError("Extra data 'Prn' on '%s' is not an NiStringExtraData.", modelRoot->members.super.m_pcName); /*0x479243*/
      return sub_88D000((NiObjectNET *)modelRoot, 1, 1); /*0x479251*/
    }
  }
  else
  {
    PrintError("Could not find parent node extra data for '%s'.", modelRoot->members.super.m_pcName); /*0x479264*/
    return sub_88D000((NiObjectNET *)modelRoot, 1, 1); /*0x479271*/
  }
}
