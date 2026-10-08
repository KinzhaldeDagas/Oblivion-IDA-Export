// TESObjectREFR single-topic speech path. Selects one INFO with ambient conversation rules, immediately runs its result and AddTopicList, then plays only the first decoded response at this reference. Named from observed Oblivion behavior.
void __userpurge TESObjectREFR::SayTopic(
        TESObjectREFR *a1@<ecx>,
        double a2@<st1>,
        TESTopic *a3,
        Actor *speaker,
        char a5,
        char a6,
        int a7)
{
  DialogueItemView *DialogueItem; // esi
  OblivionTopicInfo *info; // ebx
  int *sound; // edi
  const char **Current; // eax
  const char **v13; // ebx
  double v14; // st7
  int *v15; // eax
  int *v16; // esi
  float *v17; // eax
  int duration; // [esp+8h] [ebp-228h]
  int durationa; // [esp+8h] [ebp-228h]
  int v20[128]; // [esp+2Ch] [ebp-204h] BYREF

  DialogueItem = TESTopic::CreateDialogueItem(a3, speaker, 0, 0, 0); /*0x4d9138*/
  if ( DialogueItem ) /*0x4d913c*/
  {
    info = DialogueItem->info; /*0x4d9148*/
    sound = (int *)MEMORY[0xB33398]->sound; /*0x4d914e*/
    if ( info ) /*0x4d9151*/
    {
      TESTopicInfo::RunResult(info, a1);        // Reference single-topic speech likewise commits selected INFO state before playing the first response. /*0x4d9156*/
      TESTopicInfo::AddTopicList(info); /*0x4d915d*/
    }
    if ( sound ) /*0x4d9164*/
    {
      DialogueItem::FirstResponse(DialogueItem); /*0x4d916c*/
      Current = (const char **)DialogueListCursor::GetCurrent((DialogueListCursorView *)DialogueItem); /*0x4d9173*/
      v13 = Current; /*0x4d9178*/
      if ( Current ) /*0x4d917c*/
      {
        BSStringT_Static_StrCpy((char *)v20, Current[4]); /*0x4d918b*/
        if ( a5 || !a1->vtbl->GetNiNode(a1) ) /*0x4d91a8*/
        {
          v14 = 0.0; /*0x4d91d5*/
          *(float *)&durationa = 0.0; /*0x4d91d8*/
          if ( a6 ) /*0x4d91dd*/
            v15 = sub_6AE370(sound, (char *)v20, 1, 0, durationa); /*0x4d91e6*/
          else
            v15 = sub_6AE370(sound, (char *)v20, 5, 0, durationa); /*0x4d91f1*/
        }
        else
        {
          v14 = 0.0; /*0x4d91b6*/
          *(float *)&duration = 0.0; /*0x4d91b9*/
          if ( a6 ) /*0x4d91be*/
            v15 = sub_6AE370(sound, (char *)v20, 2, 0, duration); /*0x4d91c2*/
          else
            v15 = sub_6AE370(sound, (char *)v20, 6, 0, duration); /*0x4d91cb*/
        }
        v16 = v15; /*0x4d91f6*/
        if ( v15 ) /*0x4d91fa*/
        {
          if ( !a5 ) /*0x4d9208*/
          {
            if ( a1->vtbl->GetNiNode(a1) ) /*0x4d9219*/
            {
              v17 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a1->vtbl->GetNiNode)( /*0x4d922a*/
                               a1,
                               v14,
                               a2);
              sub_6B7360(v16, v17[0x22], v17[0x23], v17[0x24]); /*0x4d9266*/
              sub_6ACC50(sound, *v16, flt_B161C8, flt_B161D0); /*0x4d9286*/
              sub_6AC3E0((_DWORD **)sound, *v16, (LONG)a1); /*0x4d9291*/
            }
          }
          sub_6B7340(v16); /*0x4d9298*/
          sub_6B7190(v16, 0); /*0x4d92b6*/
        }
        if ( byte_B13208 ) /*0x4d92bb*/
          GameUI_QueueMessage(*v13, (UInt32)v16, 0, kTerrainLODQuadRayDirectionZ); /*0x4d92d4*/
      }
    }
  }
}
