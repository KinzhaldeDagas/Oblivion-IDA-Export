double __userpurge sub_4DC8F0@<st0>(
        TESObjectREFR *this@<ecx>,
        double result@<st0>,
        double a3@<st2>,
        double a4@<st1>,
        int a5@<ebp>,
        char a6)
{
  char *v7; // eax
  PlayerCharacter *v8; // ecx
  char *v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  char v17; // bl
  _DWORD *ShadowSceneNode; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  unsigned int *v21; // edi
  const char **v22; // eax
  int v23; // edx
  int ModelPath; // eax
  char *v25; // [esp-8h] [ebp-18h]
  int v26; // [esp-4h] [ebp-14h]
  TESObjectREFR *v27; // [esp+Ch] [ebp-4h]

  if ( this->member.niNode )
  {
    v7 = (char *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->Unk_5A)(
                   this,
                   result,
                   a4,
                   a3);
    v8 = TESDataHandler_g_PlayerRef;
    v9 = v7;
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( v7 )
      {
        sub_478DD0(v7, a5, a3, a4, result);
        v8 = TESDataHandler_g_PlayerRef;
      }
      v9 = (char *)sub_6600D0(v8, v8->isThirdPerson);
    }
    v27 = 0;
    if ( this->vtbl->IsActor(this) )
    {
      v10 = *((_DWORD *)this + 0x16);
      v27 = this;
      if ( v10 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x2D0))(v10) == 6 )
        {
          v11 = (_DWORD *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetAnimData)(
                            this,
                            result,
                            a4,
                            a3);
          if ( v11 )
          {
            result = 0.0;
            sub_470FC0(v11, 1, 0.0);
          }
          HighPRocess_DoAction_____((PlayerCharacter *)this, 0xFFFFFFFF, 0);
        }
      }
    }
    if ( v9 )
    {
      sub_478DD0(v9, a5, a3, a4, result);
LABEL_30:
      if ( v27 )
      {
        if ( a6 )
          HideEquipment(v27, a3, a4, result, 0, 0);
        sub_5EA1A0((int)v27, a5, (_DWORD *)this->member.niNode);
      }
      return result;
    }
    v26 = a5;
    v25 = off_B0656C[0];
    v12 = (_DWORD *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetNiNode)(
                      this,
                      result,
                      a4,
                      a3);
    v13 = NiObjectNET_LookupObjectByName(v12, v25);
    v14 = v13;
    if ( v13 )
    {
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
      v16 = v15;
      if ( v15 && *(_WORD *)(v15 + 0xB8) )
      {
        v17 = 1;
LABEL_20:
        ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
        sub_7C5E70(ShadowSceneNode, v14);
        if ( v16 )
        {
          if ( v17 )
            sub_477EF0((_WORD *)(v16 + 0xAC));
        }
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->member.baseExtraList);
        if ( ContainerChanges )
        {
          EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0);
          v21 = EquippedInstance;
          if ( EquippedInstance )
          {
            v22 = (const char **)OblivionDynamicCast(
                                   (void *)EquippedInstance[2],
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESBipedModelForm `RTTI Type Descriptor',
                                   0);
            if ( v22 )
            {
              if ( v17 )
              {
                ModelPath = TESBipedModelForm_GetModelPath(v22, 0);
                QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, ModelPath, 1, 1);
              }
            }
            ContainerEntryExtraData_DestroyDataTable(v21, v23);
            FormHeapFree((unsigned int)v21);
          }
        }
        a5 = v26;
        goto LABEL_30;
      }
    }
    else
    {
      v16 = 0;
    }
    v17 = 0;
    goto LABEL_20;
  }
  return result;
}
