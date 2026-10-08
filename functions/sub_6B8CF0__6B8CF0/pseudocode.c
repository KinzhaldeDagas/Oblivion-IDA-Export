// Builds runtime DialogueResponses from a cloned TESResponse list. Each TESResponse is reconstructed from the authoritative INFO record's 16-byte TRDT followed by NAM1 text. Empty text is skipped; INFOGENERAL/Rumors keeps only the first non-empty response.
void __thiscall MenuTopic::FillResponseList(
        MenuTopicView *this,
        TESQuest *ownerQuest,
        TESTopic *topic,
        OblivionTopicInfo *info,
        TESObjectREFR *speaker)
{
  OblivionTopicInfo *v6; // ecx
  unsigned int **v7; // edi
  unsigned int *v8; // esi
  unsigned int v9; // eax
  DialogueResponse *v10; // eax
  DialogueResponse *v11; // eax
  int v12; // [esp+14h] [ebp-1Ch]
  unsigned int *responseList[2]; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v14; // [esp+2Ch] [ebp-4h]

  responseList[0] = 0; /*0x6b8d1b*/
  responseList[1] = 0; /*0x6b8d1f*/
  v6 = this->info; /*0x6b8d23*/
  v14 = 0; /*0x6b8d2b*/
  TESTopicInfo::CollectResponses(v6, responseList);// Clone the INFO's shared cached TESResponse stream into a temporary response list before creating MenuTopic-owned DialogueResponse records; the temporary clones are cleared after the MenuTopic responses have copied their data. /*0x6b8d2f*/
  v7 = responseList; /*0x6b8d34*/
  v12 = 0; /*0x6b8d38*/
  do
  {
    v8 = *v7; /*0x6b8d40*/
    if ( !*v7 ) /*0x6b8d40*/
      break; /*0x6b8d44*/
    LOWORD(v9) = *((_WORD *)v8 + 0xA); /*0x6b8d4a*/
    v7 = (unsigned int **)v7[1]; /*0x6b8d52*/
    v9 = (_WORD)v9 == 0xFFFF ? strlen((const char *)v8[4]) : (unsigned __int16)v9;
    if ( v9 ) /*0x6b8d72*/
    {
      if ( !this->isInfoGeneralTopic || !v12 ) /*0x6b8d7d*/
      {
        v10 = (DialogueResponse *)FormHeapAlloc(0x18u); /*0x6b8d81*/
        LOBYTE(v14) = 1; /*0x6b8d8f*/
        if ( v10 ) /*0x6b8d94*/
          v11 = DialogueResponse::DialogueResponse(v10, ownerQuest, topic, info, speaker, v8); /*0x6b8dad*/
        else
          v11 = 0; /*0x6b8db4*/
        LOBYTE(v14) = 0; /*0x6b8dba*/
        BSSimpleList_PushBack(&this->firstResponse, (int)v11); /*0x6b8dbe*/
        ++v12; /*0x6b8dc3*/
      }
    }
  }
  while ( v7 );
  v14 = 0xFFFFFFFF; /*0x6b8dd4*/
  TESResponseList::Clear(responseList); /*0x6b8ddc*/
}
