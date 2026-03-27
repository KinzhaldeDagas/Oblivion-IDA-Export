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

  v7 = 0;
  v8 = sub_4691B0((TESObjectARMO *)this->type);
  if ( !v8 || (LOBYTE(result) = TESBipedModelForm_IsPlayable(v8), (_BYTE)result) )
  {
    if ( this->type && ((unsigned __int8 (__thiscall *)(TESForm *))this->type->vtbl->Unk_1E)(this->type) )
    {
      result = (tListVoid *)TESDataHandler_g_PlayerRef;
      if ( LOBYTE(TESDataHandler_g_PlayerRef->unk200) )
      {
        v10 = a2;
        if ( a2 == (Actor *)result )
        {
LABEL_7:
          LOBYTE(result) = 0;
          return (UInt32)result;
        }
        goto LABEL_10;
      }
    }
    else
    {
      result = (tListVoid *)TESDataHandler_g_PlayerRef;
    }
    v10 = a2;
    if ( a2 == (Actor *)result )
    {
LABEL_13:
      if ( a5 )
      {
        LOBYTE(result) = 1;
      }
      else if ( a3 )
      {
        extendData = (ExtraDataList **)this->extendData;
        if ( this->extendData
          && (v12 = *extendData) != 0
          && ExtraDataList_GetOwner(*extendData)
          && ExtraDataList_GetOwner(v12)
          && (v13 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef),
              sub_484B70((ExtraDataList ***)this),
              v14 != v13)
          && (result = (tListVoid *)v10->vtbl->GetActorValue(v10, kActorVal_Responsibility), (int)result > dword_B36C30) )
        {
          LOBYTE(result) = 0;
        }
        else
        {
          type = this->type;
          ActorBaseForm = Actor_GetActorBaseForm(v10, 0);
          if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, (int)type) )
            v7 = 1;
          if ( (int)Actor_GetSkillMasteryLevel(0x1D) >= 2 )
            v7 = 1;
          if ( this->extendData )
            data = this->extendData->node.data;
          else
            data = 0;
          result = (tListVoid *)ContainerEntryExtraData_HasWorn(this, 0);
          if ( (_BYTE)result )
          {
            if ( data )
            {
              if ( sub_41DF40(data) )
                v7 = 0;
            }
          }
          LOBYTE(result) = v7;
        }
      }
      else
      {
        result = (tListVoid *)ContainerEntryExtraData_HasWorn(this, 0);
        LOBYTE(result) = (_BYTE)result == 0;
      }
      return (UInt32)result;
    }
LABEL_10:
    result = this->extendData;
    if ( this->extendData )
    {
      result = (tListVoid *)result->node.data;
      if ( result )
      {
        if ( sub_41DF50(result) )
          goto LABEL_7;
      }
    }
    goto LABEL_13;
  }
  return (UInt32)result;
}
