// DialogueItem serialization writes UInt8 response count, each DialogueResponse, UInt8 internal current-response index (FF=null), then INFO/topic/ownerQuest/speaker FormIDs.
void __thiscall DialogueItem::SaveGame(DialogueItemView *this)
{
  TESSaveLoad *v2; // ecx
  _BYTE *v3; // ebp
  DialogueItemView *i; // esi
  DialogueResponseNode *currentResponseNode; // eax
  OblivionTopicInfo *info; // eax
  TESTopic *topic; // eax
  TESQuest *ownerQuest; // eax
  TESObjectREFR *speaker; // edi
  size_t v10; // [esp-4h] [ebp-28h]
  size_t v11; // [esp-4h] [ebp-28h]
  char Src; // [esp+12h] [ebp-12h] BYREF
  char DialogueResponseIndex; // [esp+13h] [ebp-11h] BYREF
  UInt32 refID; // [esp+14h] [ebp-10h] BYREF
  UInt32 v15; // [esp+18h] [ebp-Ch] BYREF
  UInt32 v16; // [esp+1Ch] [ebp-8h] BYREF
  UInt32 v17; // [esp+20h] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x6b7d39*/
  LODWORD(v10) = 1; /*0x6b7d3f*/
  Src = 0; /*0x6b7d47*/
  v3 = (_BYTE *)v2->unk000[5]; /*0x6b7d4b*/
  SaveLoad_SaveData((int)v2, &Src, v10); /*0x6b7d4f*/
  for ( i = this; i; i = (DialogueItemView *)i->nextResponseNode ) /*0x6b7d58*/
  {
    if ( !i->nextResponseNode && !i->firstResponse ) /*0x6b7d65*/
      break; /*0x6b7d67*/
    DialogueResponse::SaveGame(i->firstResponse); /*0x6b7d6b*/
    ++Src; /*0x6b7d70*/
  }
  *v3 = Src; /*0x6b7d80*/
  currentResponseNode = this->currentResponseNode; /*0x6b7d83*/
  DialogueResponseIndex = 0xFF; /*0x6b7d88*/
  if ( currentResponseNode ) /*0x6b7d8d*/
    DialogueResponseIndex = DialogueItem::GetDialogueResponseIndex(this, currentResponseNode->item); /*0x6b7d99*/
  LODWORD(v11) = 1; /*0x6b7da3*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &DialogueResponseIndex, v11); /*0x6b7daa*/
  info = this->info; /*0x6b7daf*/
  refID = 0; /*0x6b7db4*/
  if ( info ) /*0x6b7db8*/
    refID = info->super.member.refID; /*0x6b7dbd*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&refID, 4u); /*0x6b7dce*/
  topic = this->topic; /*0x6b7dd3*/
  v15 = 0; /*0x6b7dd8*/
  if ( topic ) /*0x6b7ddc*/
    v15 = topic->super.refID; /*0x6b7de1*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&v15, 4u); /*0x6b7df2*/
  ownerQuest = this->ownerQuest; /*0x6b7df7*/
  v16 = 0; /*0x6b7dfc*/
  if ( ownerQuest ) /*0x6b7e00*/
    v16 = ownerQuest->super.refID; /*0x6b7e05*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&v16, 4u); /*0x6b7e16*/
  speaker = this->speaker; /*0x6b7e1b*/
  v17 = 0; /*0x6b7e20*/
  if ( speaker ) /*0x6b7e24*/
    v17 = speaker->member.super.refID; /*0x6b7e29*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&v17, 4u); /*0x6b7e3a*/
}
