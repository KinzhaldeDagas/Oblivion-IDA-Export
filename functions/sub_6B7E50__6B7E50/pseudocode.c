// Rebuilds serialized response objects and internal response cursor; resolves INFO/topic/ownerQuest immediately and leaves speaker as a FormID for InitLoadGame. Does not collect live responses or run results.
void __thiscall DialogueItem::LoadGame(DialogueItemView *this)
{
  DialogueResponse *v2; // eax
  DialogueResponse *v3; // edi
  DialogueResponseNode **p_nextResponseNode; // eax
  DialogueItemView *v5; // esi
  bool v6; // zf
  DialogueResponseNode *v7; // eax
  DialogueResponse *DialogueResponseByIndex; // eax
  DialogueResponseNode *v9; // ecx
  DialogueResponseNode *next; // edx
  TESForm *v11; // eax
  TESForm *v12; // eax
  TESForm *v13; // eax
  size_t v14; // [esp-1Ch] [ebp-58h]
  size_t v15; // [esp-14h] [ebp-50h]
  int v16; // [esp-14h] [ebp-50h]
  int v17; // [esp-10h] [ebp-4Ch]
  size_t v18; // [esp-Ch] [ebp-48h]
  int v19; // [esp-Ch] [ebp-48h]
  int v20; // [esp-Ch] [ebp-48h]
  int v21; // [esp-8h] [ebp-44h]
  size_t v22; // [esp-4h] [ebp-40h]
  size_t v23; // [esp-4h] [ebp-40h]
  size_t v24; // [esp-4h] [ebp-40h]
  int v25; // [esp-4h] [ebp-40h]
  int v26; // [esp-4h] [ebp-40h]
  int v27; // [esp+0h] [ebp-3Ch]
  int v28; // [esp+4h] [ebp-38h]
  int v29; // [esp+4h] [ebp-38h]
  int v30; // [esp+8h] [ebp-34h]
  TESObjectREFR *v31; // [esp+8h] [ebp-34h]
  int v32; // [esp+Ch] [ebp-30h]
  UInt32 v33; // [esp+Ch] [ebp-30h]
  int v34; // [esp+10h] [ebp-2Ch] BYREF
  int a1; // [esp+14h] [ebp-28h] BYREF
  unsigned int i; // [esp+18h] [ebp-24h] BYREF
  _DWORD Dst[5]; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v38; // [esp+38h] [ebp-4h]

  LODWORD(v22) = 1; /*0x6b7e7f*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, (char *)&a1 + 2, v22);// EngineFix implementation 2026-05-07: Dialogue Conversation nested choice count is one byte; sub_6B8280 consumes at least 10 bytes per nested entry (two length bytes plus two 4-byte values, with optional string payloads). Registered count clamp uses remaining / 10. /*0x6b7e86*/
  for ( i = 0; i < BYTE2(a1); ++i ) /*0x6b7e95*/
  {
    v2 = (DialogueResponse *)FormHeapAlloc(0x18u); /*0x6b7ea2*/
    Dst[4] = v2; /*0x6b7eaa*/
    v38 = 0;                                    // EngineFix implementation 2026-05-07: Dialogue Conversation nested choice allocation-failure hook. If the 0x18 object allocation fails, discard one sub_6B8280 serialized choice entry, restore SEH state, and resume nested loop tail. /*0x6b7eb0*/
    if ( v2 ) /*0x6b7eb4*/
      v3 = DialogueResponse::InitializeEmpty(v2); /*0x6b7ebd*/
    else
      v3 = 0; /*0x6b7ec1*/
    v38 = 0xFFFFFFFF; /*0x6b7ec5*/
    DialogueResponse::LoadGame(v3); /*0x6b7ecd*/
    if ( v3 ) /*0x6b7ed4*/
    {
      p_nextResponseNode = &this->nextResponseNode; /*0x6b7ed9*/
      v5 = this; /*0x6b7edc*/
      if ( this->nextResponseNode ) /*0x6b7ed6*/
      {
        do /*0x6b7ee8*/
        {
          v5 = (DialogueItemView *)*p_nextResponseNode; /*0x6b7ee0*/
          v6 = (*p_nextResponseNode)->next == 0; /*0x6b7ee2*/
          p_nextResponseNode = &(*p_nextResponseNode)->next; /*0x6b7ee5*/
        }
        while ( !v6 ); /*0x6b7ee8*/
      }
      if ( v5->firstResponse ) /*0x6b7eea*/
      {
        v7 = (DialogueResponseNode *)FormHeapAlloc(8u); /*0x6b7ef0*/
        if ( v7 ) /*0x6b7efa*/
        {
          v7->item = v3; /*0x6b7efc*/
          v7->next = 0; /*0x6b7efe*/
          v5->nextResponseNode = v7; /*0x6b7f01*/
        }
        else
        {
          v5->nextResponseNode = 0; /*0x6b7f08*/
        }
      }
      else
      {
        v5->firstResponse = v3; /*0x6b7f0d*/
      }
    }
  }
  LODWORD(v23) = 1; /*0x6b7f2d*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, (char *)&a1 + 3, v23); /*0x6b7f34*/
  if ( HIBYTE(a1) == 0xFF ) /*0x6b7f3f*/
  {
    this->currentResponseNode = 0; /*0x6b7f6f*/
  }
  else
  {
    DialogueResponseByIndex = DialogueItem::GetDialogueResponseByIndex(this, SHIBYTE(a1)); /*0x6b7f48*/
    v9 = (DialogueResponseNode *)this; /*0x6b7f4f*/
    if ( this ) /*0x6b7f51*/
    {
      do /*0x6b7f53*/
      {
        next = v9->next; /*0x6b7f53*/
        if ( !next && !v9->item ) /*0x6b7f5a*/
          break; /*0x6b7f5a*/
        if ( DialogueResponseByIndex == v9->item ) /*0x6b7f60*/
        {
          this->currentResponseNode = v9; /*0x6b7f6a*/
          break; /*0x6b7f6d*/
        }
        v9 = v9->next; /*0x6b7f62*/
      }
      while ( next ); /*0x6b7f53*/
    }
  }
  LODWORD(v24) = 4; /*0x6b7f72*/
  SaveLoad_LoadFormID(Dst, v24, v28, v30, v32); /*0x6b7f7f*/
  if ( a1 ) /*0x6b7f8a*/
  {
    v11 = TESForm_LookupByFormID(a1); /*0x6b7f99*/
    this->info = (OblivionTopicInfo *)OblivionDynamicCast( /*0x6b7faa*/
                                        v11,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &TESTopicInfo `RTTI Type Descriptor',
                                        0);
  }
  LODWORD(v18) = 4; /*0x6b7fb3*/
  SaveLoad_LoadFormID(&i, v18, v25, v27, v29); /*0x6b7fba*/
  if ( v34 ) /*0x6b7fc5*/
  {
    v12 = TESForm_LookupByFormID(v34); /*0x6b7fd4*/
    this->topic = (TESTopic *)OblivionDynamicCast( /*0x6b7fe5*/
                                v12,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESTopic `RTTI Type Descriptor',
                                0);
  }
  LODWORD(v15) = 4; /*0x6b7fee*/
  SaveLoad_LoadFormID(&a1, v15, v19, v21, v26); /*0x6b7ff5*/
  if ( v33 ) /*0x6b8000*/
  {
    v13 = TESForm_LookupByFormID(v33); /*0x6b800f*/
    this->ownerQuest = (TESQuest *)OblivionDynamicCast( /*0x6b8020*/
                                     v13,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESQuest `RTTI Type Descriptor',
                                     0);
  }
  LODWORD(v14) = 4; /*0x6b8023*/
  SaveLoad_LoadFormID(&v34, v14, v16, v17, v20); /*0x6b8030*/
  this->speaker = v31; /*0x6b8039*/
}
