// Actor single-topic speech path. Selects one INFO with ambient conversation rules, immediately runs AddTopicList/result on this actor, then plays only the first decoded response and destroys the temporary DialogueItem. Named from observed Oblivion behavior.
void __thiscall Actor::SayTopic(Actor *this, TESTopic *a2, TESObjectREFR *target, char a4, char a5, int a6)
{
  DialogueItemView *DialogueItem; // ebx
  OblivionTopicInfo *info; // esi
  int *sound; // ebp
  const char **Current; // eax
  int *v11; // eax
  int *v12; // esi
  float *v13; // eax
  int duration; // [esp+8h] [ebp-230h]
  int v15; // [esp+20h] [ebp-218h]
  const char **v16; // [esp+24h] [ebp-214h]
  float v17; // [esp+28h] [ebp-210h]
  float v18; // [esp+2Ch] [ebp-20Ch]
  float v19; // [esp+30h] [ebp-208h]
  int v20[128]; // [esp+34h] [ebp-204h] BYREF

  DialogueItem = TESTopic::CreateDialogueItem(a2, this, target, 0, 0); /*0x5f7129*/
  Actor::StopDialoguePlayback(this); /*0x5f712b*/
  if ( DialogueItem ) /*0x5f7132*/
  {
    info = DialogueItem->info; /*0x5f713a*/
    if ( info ) /*0x5f713f*/
    {
      TESTopicInfo::AddTopicList(DialogueItem->info); /*0x5f7143*/
      TESTopicInfo::RunResult(info, (TESObjectREFR *)this);// Single-topic speech commits the selected INFO before starting its first response. Unlike generated Conversation playback, this path does not defer result execution until response exhaustion. /*0x5f714b*/
    }
    sound = (int *)MEMORY[0xB33398]->sound; /*0x5f7155*/
    if ( sound ) /*0x5f715a*/
    {
      DialogueItem::FirstResponse(DialogueItem); /*0x5f7162*/
      Current = (const char **)DialogueListCursor::GetCurrent((DialogueListCursorView *)DialogueItem); /*0x5f7169*/
      v16 = Current; /*0x5f7170*/
      if ( Current ) /*0x5f7174*/
      {
        BSStringT_Static_StrCpy((char *)v20, Current[4]); /*0x5f7183*/
        *(float *)&duration = 0.0; /*0x5f7196*/
        if ( a4 ) /*0x5f719b*/
          v11 = sub_6AE370(sound, (char *)v20, 0x105, 0, duration); /*0x5f71a7*/
        else
          v11 = sub_6AE370(sound, (char *)v20, 0x106, 0, duration); /*0x5f71b5*/
        v12 = v11; /*0x5f71ba*/
        if ( v11 ) /*0x5f71be*/
        {
          if ( a4 ) /*0x5f71cc*/
          {
            v15 = (int)(*GameSetting_GetSafeFloatPointer((float *)&dword_B161E0) * fCostant_100); /*0x5f7266*/
            sub_6B72B0(v12, (unsigned __int16)v15); /*0x5f7274*/
          }
          else
          {
            v13 = this->vtbl->super.super.GetPos(this); /*0x5f71d8*/
            v17 = *v13; /*0x5f71ef*/
            v18 = v13[1]; /*0x5f7201*/
            v19 = v13[2]; /*0x5f7205*/
            sub_6ACC50(sound, *v12, flt_B161C8, flt_B161D0); /*0x5f7209*/
            sub_6B7360(v12, v17, v18, v19); /*0x5f722a*/
            sub_6AC3E0((_DWORD **)sound, *v12, (LONG)this); /*0x5f7235*/
          }
          sub_6B7190(v12, 0); /*0x5f727d*/
          ((void (__thiscall *)(LowProcess *, _DWORD, int *))this->members.super.process->SetUnk220Element)( /*0x5f7290*/
            this->members.super.process,
            0,
            v12);
          sub_6B7340(v12); /*0x5f7294*/
        }
        if ( byte_B13208 ) /*0x5f72a8*/
        {
          if ( !a5 ) /*0x5f72b9*/
            GameUI_QueueMessage(*v16, (UInt32)v12, 0, kTerrainLODQuadRayDirectionZ); /*0x5f72cf*/
        }
      }
    }
    DialogueItem::Destroy(DialogueItem); /*0x5f72d9*/
    FormHeapFree((unsigned int)DialogueItem); /*0x5f72df*/
  }
}
