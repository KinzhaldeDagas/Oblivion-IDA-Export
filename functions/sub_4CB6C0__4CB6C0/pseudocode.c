// Walk this cell object list, select references whose base form type is TESObjectLIGH, retrieve ordinary ExtraLight type 0x30, and update its attached NiLight payload. This is a source-light animation/update enumerator, not a static/reference shadow-caster admission loop.
void __thiscall TESObjectCELL_UpdateAttachedReferenceLights(TESObjectCELL *self)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  bool v4; // zf
  BSExtraDataVtbl *Light; // eax
  TESObjectLIGH_DecodedLayout *v6; // eax
  AttachedLightPayload_Decoded *v7; // [esp-10h] [ebp-14h]

  sub_496EA0((char *)&unk_B35C80, self); /*0x4cb6ca*/
  p_objectList = &self->members.objectList; /*0x4cb6cf*/
  if ( self != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb6d4*/
  {
    do /*0x4cb716*/
    {
      refr = p_objectList->refr; /*0x4cb6d7*/
      v4 = p_objectList->refr == 0; /*0x4cb6d9*/
      p_objectList = p_objectList->next; /*0x4cb6db*/
      if ( !v4 && refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Light ) /*0x4cb6f0*/
      {
        Light = ExtraDataList_GetLight(&refr->member.baseExtraList); /*0x4cb6f5*/
        if ( Light ) /*0x4cb6fc*/
        {
          v7 = (AttachedLightPayload_Decoded *)Light; /*0x4cb700*/
          v6 = (TESObjectLIGH_DecodedLayout *)refr->vtbl->GetBaseForm(refr); /*0x4cb70b*/
          TESObjectLIGH_UpdateAttachedLightPayload(v6, v7, 0);// Per-cell TESObjectLIGH source update only; optionalContext=null and no ShadowSceneNodeAddShadowCaster call occurs. /*0x4cb70f*/
        }
      }
    }
    while ( p_objectList ); /*0x4cb716*/
  }
  sub_496F50(&unk_B35C80, self); /*0x4cb71f*/
}
