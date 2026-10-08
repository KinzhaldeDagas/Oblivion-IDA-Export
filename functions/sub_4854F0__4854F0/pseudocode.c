UInt32 __thiscall sub_4854F0(EntryData *this, Actor *a2, char a3, int a4, char a5, int a6)
{
  char v7; // bl
  TESForm::ModReferenceList **v8; // eax
  tListVoid *result; // eax
  Actor *v10; // ebp
  ExtraDataList **extendData; // eax
  ExtraDataList *v12; // edi
  TESForm *v13; // edi
  TESForm *v14; // eax
  TESForm *ActorBaseForm; // eax
  _BYTE *data; // edi
  TESForm *type; // [esp-Ch] [ebp-14h]

  v7 = 0; /*0x4854f8*/
  v8 = sub_4691B0((TESObjectARMO *)this->type); /*0x4854fa*/
  if ( !v8 || (LOBYTE(result) = TESBipedModelForm_IsPlayable(v8), (_BYTE)result) ) /*0x48550f*/
  {
    if ( this->type && ((unsigned __int8 (__thiscall *)(TESForm *))this->type->vtbl->Unk_1E)(this->type) ) /*0x485525*/
    {
      result = (tListVoid *)reference; /*0x48552b*/
      if ( LOBYTE(reference->unk200) ) /*0x485530*/
      {
        v10 = a2; /*0x485539*/
        if ( a2 == (Actor *)result ) /*0x48553f*/
        {
LABEL_7:
          LOBYTE(result) = 0; /*0x485541*/
          return (UInt32)result; /*0x485546*/
        }
        goto LABEL_10; /*0x48553f*/
      }
    }
    else
    {
      result = (tListVoid *)reference; /*0x485549*/
    }
    v10 = a2; /*0x48554e*/
    if ( a2 == (Actor *)result ) /*0x485554*/
    {
LABEL_13:
      if ( a5 ) /*0x485572*/
      {
        LOBYTE(result) = 1; /*0x485576*/
      }
      else if ( a3 ) /*0x485582*/
      {
        extendData = (ExtraDataList **)this->extendData; /*0x48559b*/
        if ( this->extendData /*0x4855ef*/
          && (v12 = *extendData) != 0
          && ExtraDataList_GetOwner(*extendData)
          && ExtraDataList_GetOwner(v12)
          && (v13 = reference->vtbl->super.super.super.GetBaseForm(reference),
              sub_484B70((ExtraDataList ***)this),
              v14 != v13)
          && (result = (tListVoid *)v10->vtbl->GetActorValue(v10, kActorVal_Responsibility),
              (int)result > (int)stru_B36C30.value) )
        {
          LOBYTE(result) = 0; /*0x4855f4*/
        }
        else
        {
          type = this->type; /*0x4855fd*/
          ActorBaseForm = Actor_GetActorBaseForm(v10, 0); /*0x485602*/
          if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, (int)type) ) /*0x48560c*/
            v7 = 1; /*0x485615*/
          if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Mercantile) >= kSkillMastery_Journeyman ) /*0x485627*/
            v7 = 1; /*0x485629*/
          if ( this->extendData ) /*0x48562b*/
            data = this->extendData->node.data; /*0x485631*/
          else
            data = 0; /*0x485635*/
          if ( ContainerEntryExtraData_HasWorn(this, 0) ) /*0x48563b*/
          {
            if ( data ) /*0x485646*/
            {
              if ( sub_41DF40(data) ) /*0x48564a*/
                v7 = 0; /*0x485653*/
            }
          }
          LOBYTE(result) = v7; /*0x485658*/
        }
      }
      else
      {
        LOBYTE(result) = ContainerEntryExtraData_HasWorn(this, 0) == 0; /*0x485595*/
      }
      return (UInt32)result; /*0x485579*/
    }
LABEL_10:
    result = this->extendData; /*0x485556*/
    if ( this->extendData ) /*0x485556*/
    {
      result = (tListVoid *)result->node.data; /*0x48555c*/
      if ( result ) /*0x485560*/
      {
        if ( sub_41DF50(result) ) /*0x485564*/
          goto LABEL_7; /*0x48556b*/
      }
    }
    goto LABEL_13; /*0x48556b*/
  }
  return (UInt32)result; /*0x485511*/
}
