void __thiscall sub_6B9010(UnkBohBoh *this, tListTopic *a2)
{
  UnkBohBoh *v2; // edi
  BSSimpleList_VoidPtr **p_unk04; // eax
  int v4; // ecx
  tListTopic *v5; // eax
  TESTopic *data; // esi
  TESTopic *v7; // eax
  TESTopic *v8; // edi
  UInt32 *p_refID; // eax
  int v10; // eax
  UInt32 v11; // ebp
  TESQuest *v12; // ebx
  UnkBohDialogueTopicBoh *v13; // edi
  UnkBohDialogueTopicBoh *v14; // eax
  UnkBohDialogueTopicBoh *v15; // eax
  UnkBohBoh *v16; // esi
  BSSimpleList_VoidPtr::NodeVoid *v17; // eax
  Actor *unk10; // [esp-8h] [ebp-3Ch]
  TESObjectREFR *v19; // [esp-4h] [ebp-38h]
  char v20; // [esp+15h] [ebp-1Fh]
  char v21; // [esp+16h] [ebp-1Eh]
  char v22; // [esp+17h] [ebp-1Dh]
  Actor *v24; // [esp+1Ch] [ebp-18h]
  _DWORD v25[2]; // [esp+20h] [ebp-14h] BYREF
  unsigned int v26; // [esp+30h] [ebp-4h]
  tListTopic *next; // [esp+38h] [ebp+4h]

  v2 = this;
  v20 = 0;
  v24 = (Actor *)OblivionDynamicCast(
                   this->unk10,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  p_unk04 = &v2->unk04;
  v4 = 0;
  if ( v2 != (UnkBohBoh *)0xFFFFFFFC )
  {
    do
    {
      if ( *p_unk04 )
        ++v4;
      p_unk04 = (BSSimpleList_VoidPtr **)p_unk04[1];
    }
    while ( p_unk04 );
    if ( v4 )
    {
      v5 = a2;
      if ( a2 )
      {
        while ( 1 )
        {
          data = v5->node.data;
          if ( !v5->node.data )
            return;
          next = (tListTopic *)v5->node.next;
          if ( data->super.refID == 0xD7 && !Actor::IsNoRumor(v24) )// infogeneral topic
                                                // 
          {
            v7 = sub_425970(&v2->unk10->member.baseExtraList, v2->unk10);
            v8 = v7;
            if ( v7 )
            {
              if ( !v20 )
              {
                p_refID = &v7->super.refID;
                v8->fullname.name.m_data = (char *)&v8->super.refID;
                if ( v8 != (TESTopic *)0xFFFFFFF4 )
                {
                  if ( *p_refID )
                  {
                    if ( !sub_446C30((BSSimpleList_VoidPtr *)&this->unk04, v8) )
                      BSSimpleList_PushBack(&this->unk04, (int)v8);
                  }
                }
                v20 = 1;
              }
            }
          }
          v19 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          unk10 = (Actor *)this->unk10;
          LOBYTE(v25[0]) = 0;
          v10 = sub_52F770(data, v25, unk10, v19);
          v11 = v10;
          if ( v10 )
          {
            v12 = sub_52F570(data, v10);
            v22 = 0;
            v21 = 1;
            if ( data->super.refID == 0xD7 )
            {
              if ( v20 || Actor::IsNoRumor(v24) )
                v21 = 0;
              else
                v22 = 1;
            }
            v13 = 0;
            if ( v21 )
            {
              v14 = (UnkBohDialogueTopicBoh *)FormHeapAlloc(0x28u);
              v25[1] = v14;
              v26 = 0;
              if ( v14 )
                v15 = sub_6B8E00(v14, v12, data, v11, (Actor *)this->unk10, v25[0]);
              else
                v15 = 0;
              v26 = 0xFFFFFFFF;
              v13 = v15;
            }
            if ( !v22 || (*(_BYTE *)(v13->unk18 + 0x25) & 4) != 0 )
            {
              v16 = this;
            }
            else
            {
              v16 = this;
              sub_422C70(&this->unk10->member.baseExtraList, v13);
            }
            if ( v21 )
            {
              v13->unk1C = (UInt32)&v13->unk0C;
              if ( v13 != (UnkBohDialogueTopicBoh *)0xFFFFFFF4 )
              {
                if ( v13->unk0C )
                {
                  v17 = (BSSimpleList_VoidPtr::NodeVoid *)&v16->unk04;
                  if ( v16 == (UnkBohBoh *)0xFFFFFFFC )
                  {
LABEL_40:
                    BSSimpleList_PushBack(&v16->unk04, (int)v13);
                    goto LABEL_43;
                  }
                  while ( v17->data != v13 )
                  {
                    v17 = v17->next;
                    if ( !v17 )
                      goto LABEL_40;
                  }
                }
              }
            }
            if ( v13 )
            {
              sub_6B8F50((UInt32 *)v13);
              FormHeapFree((unsigned int)v13);
            }
          }
LABEL_43:
          if ( !next )
            return;
          v5 = next;
          v2 = this;
        }
      }
    }
  }
}
