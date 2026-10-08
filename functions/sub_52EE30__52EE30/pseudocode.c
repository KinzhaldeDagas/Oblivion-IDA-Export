// TESTopic::LinkForm resolves quest references from questInfoEntries/QSTI structures; this function does not consume TESTopic.unk30/XIDX as a FormID. Do not classify runtime XIDX as a linked FormID slot based only on its U32 shape.
void __thiscall TESTopic::LinkForm(TESTopic *this)
{
  TESTopic *v1; // edi
  bool v2; // zf
  QuestInfoData *data; // esi
  TESForm *v4; // eax
  Data *OverrideFile; // eax
  TESForm *v6; // eax
  int firstFreeEntry; // ecx
  int v8; // ebp
  OblivionTopicInfo **v9; // eax
  const char *v10; // eax
  TopicInfoArray *p_infoList; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // esi
  OblivionTopicInfo *v14; // edi
  int v15; // [esp-10h] [ebp-20h]
  QuestInfoEntry *p_questInfoEntries; // [esp+4h] [ebp-Ch]
  int a1; // [esp+8h] [ebp-8h] BYREF
  TESTopic *v18; // [esp+Ch] [ebp-4h]

  v1 = this; /*0x52ee34*/
  v2 = (this->super.flags & 8) == 0; /*0x52ee3c*/
  v18 = this; /*0x52ee3e*/
  if ( v2 ) /*0x52ee42*/
  {
    p_questInfoEntries = &this->questInfoEntries; /*0x52ee4d*/
    if ( this != (TESTopic *)0xFFFFFFD8 ) /*0x52ee51*/
    {
      do /*0x52ef86*/
      {
        data = p_questInfoEntries->data; /*0x52ee64*/
        if ( !p_questInfoEntries->data ) /*0x52ee64*/
          break; /*0x52ee68*/
        if ( !LOBYTE(data[1].infoList._vtbl) ) /*0x52ee6e*/
        {
          if ( data->parentQuest ) /*0x52ee78*/
          {
            v4 = TESForm_LookupByFormID((UInt32)data->parentQuest); /*0x52ee8d*/
            data->parentQuest = (TESQuest *)OblivionDynamicCast( /*0x52ee9e*/
                                              v4,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              &TESQuest `RTTI Type Descriptor',
                                              0);
          }
          else if ( data[1].parentQuest ) /*0x52eea5*/
          {
            a1 = (int)data[1].parentQuest; /*0x52eeb0*/
            OverrideFile = TESForm_GetOverrideFile((TESForm *)v1, 0xFFFFFFFF); /*0x52eeb4*/
            TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x52eebf*/
            v6 = TESForm_LookupByFormID(a1); /*0x52eeda*/
            data[1].parentQuest = (TESQuest *)OblivionDynamicCast( /*0x52eeeb*/
                                                v6,
                                                0,
                                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                &TESQuest `RTTI Type Descriptor',
                                                0);
          }
          else
          {
            firstFreeEntry = 0; /*0x52eef3*/
            if ( data != (QuestInfoData *)0xFFFFFFFC ) /*0x52eef7*/
              firstFreeEntry = data->infoList.firstFreeEntry; /*0x52eef9*/
            v8 = 0; /*0x52eefc*/
            if ( firstFreeEntry > 0 ) /*0x52ef00*/
            {
              v9 = data->infoList.data; /*0x52ef02*/
              do /*0x52ef1b*/
              {
                if ( ((*v9)->super.member.flags & 0x20) == 0 ) /*0x52ef10*/
                  ++v8; /*0x52ef12*/
                ++v9; /*0x52ef15*/
                --firstFreeEntry; /*0x52ef18*/
              }
              while ( firstFreeEntry ); /*0x52ef1b*/
              if ( v8 > 0 ) /*0x52ef1f*/
              {
                v10 = (const char *)((int (__thiscall *)(TESTopic *, int))v1->vtbl->GetEditorName)(v1, v8); /*0x52ef2c*/
                PrintError( /*0x52ef34*/
                  "No Quest Reference on Topic \"%s\" (%d non-deleted infos attached to this quest).",
                  v10,
                  v15);
              }
            }
          }
          LOBYTE(data[1].infoList._vtbl) = 1; /*0x52ef3c*/
        }
        p_infoList = &data->infoList; /*0x52ef40*/
        if ( data != (QuestInfoData *)0xFFFFFFFC ) /*0x52ef45*/
        {
          sub_5A56F0((unsigned int *)&data->infoList); /*0x52ef49*/
          v12 = data->infoList.firstFreeEntry; /*0x52ef4e*/
          v13 = 0; /*0x52ef51*/
          if ( v12 ) /*0x52ef55*/
          {
            do /*0x52ef73*/
            {
              v14 = p_infoList->data[v13]; /*0x52ef5a*/
              if ( v14 ) /*0x52ef5f*/
              {
                v14->super.vtbl->DoPostFixup(&v14->super); /*0x52ef68*/
                v14->previousInfo = v13; /*0x52ef6a*/
              }
              ++v13; /*0x52ef6e*/
            }
            while ( v13 < v12 ); /*0x52ef73*/
            v1 = v18; /*0x52ef75*/
          }
        }
        p_questInfoEntries = p_questInfoEntries->next; /*0x52ef82*/
      }
      while ( p_questInfoEntries ); /*0x52ef86*/
    }
    TESForm_SetIsLinked((TESForm *)v1, 1); /*0x52ef93*/
  }
}
