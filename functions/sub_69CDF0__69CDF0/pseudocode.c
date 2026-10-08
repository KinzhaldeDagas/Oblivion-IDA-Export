TESObjectCELL *__thiscall sub_69CDF0(TESObjectREFR *this, int a2, int a3)
{
  TESObjectCELL *DwordAtOffset40; // eax
  TESForm *baseForm; // eax
  unsigned int scale_low; // edi
  int v11; // ebx
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  TESObjectCELL *result; // eax
  float *v14; // ebx
  int unkFile00C; // edi
  int v16; // eax
  _DWORD *i; // edi
  TESForm *v18; // eax
  float v19; // [esp+28h] [ebp+8h]

  sub_69F1E0(this, a2, a3); /*0x69ce21*/
  sub_69CB30((float *)this); /*0x69ce28*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x69ce30*/
  TESObjectCELL_AddReference(DwordAtOffset40, this); /*0x69ce37*/
  if ( LODWORD(this[1].member.pos[1]) != 1 ) /*0x69ce43*/
  {
    baseForm = this[1].member.baseForm; /*0x69ce45*/
    if ( baseForm[5].member.refID ) /*0x69ce48*/
    {
      scale_low = LODWORD(this[1].member.scale); /*0x69ce51*/
      v11 = *(_DWORD *)(baseForm[5].member.refID + 0xC); /*0x69ce5f*/
      if ( scale_low ) /*0x69ce62*/
      {
        sub_6B73E0((_DWORD *)LODWORD(this[1].member.scale)); /*0x69ce66*/
        FormHeapFree(scale_low); /*0x69ce6c*/
        this[1].member.scale = 0.0; /*0x69ce74*/
      }
      LODWORD(this[1].member.scale) = sub_65AC50(this, v11, 1, 0x102, 1); /*0x69ce8f*/
    }
  }
  v19 = *(float *)&this[1].member.parentCell; /*0x69ce9d*/
  GetNiNode = this->vtbl->GetNiNode; /*0x69cea1*/
  this[1].member.parentCell = 0; /*0x69cea9*/
  result = (TESObjectCELL *)GetNiNode(this); /*0x69ceb3*/
  if ( result ) /*0x69ceb7*/
  {
    result = (TESObjectCELL *)this[1].member.baseForm; /*0x69ceb9*/
    if ( result[1].members.fullName.vtbl ) /*0x69cebc*/
    {
      v14 = (float *)FormHeapAlloc(0x1Cu); /*0x69cec9*/
      if ( v14 ) /*0x69cedc*/
      {
        unkFile00C = (int)this[1].member.baseForm[4].member.modlist.data->unkFile00C; /*0x69cee4*/
        v16 = (int)this->vtbl->GetNiNode(this); /*0x69cef1*/
        result = (TESObjectCELL *)MagicCaster_CastingVFX_constr(v14, unkFile00C, v16); /*0x69cef7*/
      }
      else
      {
        result = 0; /*0x69cefe*/
      }
      this[1].member.parentCell = result; /*0x69cf0a*/
      if ( result ) /*0x69cf10*/
      {
        MagicCaster_CastingVFX_ClearSomething___((int)result, 0, this[1].member.rot.z); /*0x69cf20*/
        result = this[1].member.parentCell; /*0x69cf29*/
        *(float *)&result->members.super.modlist.data = v19; /*0x69cf2f*/
      }
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x69cf3c*/
  {
    for ( i = this[1].member.niNode; i; i = (_DWORD *)i[2] ) /*0x69cf46*/
    {
      LOBYTE(v19) = *((_BYTE *)i + 4); /*0x69cf4f*/
      if ( *i ) /*0x69cf48*/
      {
        v18 = TESForm_LookupByFormID(*i); /*0x69cf64*/
        *i = OblivionDynamicCast( /*0x69cf75*/
               v18,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
      }
      result = (TESObjectCELL *)this[1].member.super.modlist.next; /*0x69cf77*/
      if ( result ) /*0x69cf7c*/
      {
        result = (TESObjectCELL *)EffectItemList_GetItemByIndex(&result->members.super.refID, SLODWORD(v19)); /*0x69cf86*/
        i[1] = result; /*0x69cf8b*/
      }
    }
  }
  return result; /*0x69cf95*/
}
