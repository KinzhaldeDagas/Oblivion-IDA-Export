double __usercall sub_616530@<st0>(
        double st5_0@<st2>,
        double result@<st0>,
        double st6_0@<st1>,
        int **a4,
        TESObjectREFR *speaker,
        TESObjectREFR *target,
        int index,
        char a8)
{
  float *v9; // edi
  float *v10; // eax
  TESTopic *Topic; // ebx
  int *v12; // edi
  int *v13; // edi
  TESForm *v14; // eax
  _DWORD *v15; // edi
  unsigned int v16; // eax
  bool v17; // zf
  char *v18; // eax
  DialogueItemView *DialogueItem; // eax
  DialogueListCursorView *v20; // ebx
  BSStringT *Current; // eax
  BSStringT *v22; // edi
  unsigned int Len; // eax
  float v24; // [esp+14h] [ebp-18h]
  BSStringT v25; // [esp+18h] [ebp-14h] BYREF
  unsigned int v26; // [esp+28h] [ebp-4h]
  float v27; // [esp+30h] [ebp+4h]
  float v28; // [esp+30h] [ebp+4h]

  if ( a4 ) /*0x61655d*/
  {
    if ( unk_B3B914 <= dword_B14B94 /*0x616600*/
      || !speaker
      || target && Actor_IsPlayer(target)
      || (v9 = (float *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.super.super.GetPos)(
                          reference,
                          result,
                          st6_0,
                          st5_0),
          v10 = speaker->vtbl->GetPos(speaker),
          v24 = *v10 - *v9,
          v27 = v10[1] - v9[1],
          *(float *)&v25.m_data = v10[2] - v9[2],
          v28 = v27 * v27 + v24 * v24 + *(float *)&v25.m_data * *(float *)&v25.m_data,
          v28 <= flt_B14BAC * flt_B14BAC) )
    {
      Topic = TESTopic::GetTopic(DialogueType_Combat, index); /*0x616612*/
      if ( Topic ) /*0x616619*/
      {
        if ( *a4 ) /*0x61661f*/
        {
          if ( SoundHandle::IsPlaying(*a4) && !a8 ) /*0x616634*/
            return result; /*0x616634*/
          v12 = *a4; /*0x616645*/
          if ( v12 == (int *)(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))speaker[1].vtbl->super.super.InitializeComponent /*0x61664e*/
                              + 0xCF))(
                               speaker[1].vtbl,
                               0,
                               result,
                               st6_0,
                               st5_0) )
          {
            (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))speaker[1].vtbl->super.super.InitializeComponent + 0xD1))( /*0x61665d*/
              speaker[1].vtbl,
              0);
          }
          else if ( !sub_6B73A0(v12) ) /*0x616663*/
          {
            v13 = *a4; /*0x61666c*/
            if ( *a4 ) /*0x61666c*/
            {
              sub_6B73E0(*a4); /*0x616675*/
              FormHeapFree((unsigned int)v13); /*0x61667b*/
            }
            *a4 = 0; /*0x616683*/
          }
        }
        if ( Actor_IsCreature((Actor *)speaker) ) /*0x61668c*/
        {
          v14 = speaker->vtbl->GetBaseForm(speaker); /*0x6166b1*/
          v15 = OblivionDynamicCast( /*0x6166b9*/
                  v14,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESCreature `RTTI Type Descriptor',
                  0);
          if ( index == 1 ) /*0x6166c5*/
          {
            if ( speaker->vtbl->IsDead(speaker, 0) /*0x616701*/
              || (v17 = ((unsigned __int8 (__thiscall *)(TESObjectREFR *))speaker->vtbl[1].super.SaveGame)(speaker) == 0,
                  v16 = 7,
                  !v17) )
            {
              v16 = 8; /*0x616703*/
            }
            goto LABEL_25; /*0x616703*/
          }
          if ( index == 2 || index == 5 ) /*0x6166cf*/
          {
            v16 = 7; /*0x6166d5*/
LABEL_25:
            v18 = sub_51CE70(v15, v16); /*0x616708*/
            if ( v18 ) /*0x616712*/
            {
              BSStringT_constr_str(&v25, v18); /*0x61671d*/
              v26 = 0; /*0x616738*/
              Actor::InitDialogue((Actor *)speaker, v25.m_data, a4, 0, 0, 0, 0, 0, 0, 0); /*0x616740*/
              v26 = 0xFFFFFFFF; /*0x61674b*/
              BSStringT_Clear((unsigned int *)&v25); /*0x616753*/
            }
          }
        }
        else
        {
          DialogueItem = TESTopic::CreateDialogueItem(Topic, (Actor *)speaker, target, Topic, 0); /*0x616775*/
          v20 = (DialogueListCursorView *)DialogueItem; /*0x61677a*/
          if ( DialogueItem ) /*0x61677e*/
          {
            if ( DialogueItem::FirstResponse(DialogueItem) ) /*0x616782*/
            {
              Current = (BSStringT *)DialogueListCursor::GetCurrent(v20); /*0x61678d*/
              v22 = Current; /*0x616792*/
              if ( Current ) /*0x616796*/
              {
                Len = BSStringT_GetLen(Current); /*0x6167a2*/
                Actor::InitDialogue( /*0x6167b7*/
                  (Actor *)speaker,
                  v22[2].m_data,
                  a4,
                  (int)v22[1].m_data,
                  *(_DWORD *)&v22[1].m_dataLen,
                  Len,
                  0,
                  0,
                  0,
                  0);
                DialogueItem::RunResult((DialogueItemView *)v20); /*0x6167c0*/
              }
            }
            DialogueItem::Destroy((DialogueItemView *)v20); /*0x6167c7*/
            FormHeapFree((unsigned int)v20); /*0x6167cd*/
          }
        }
      }
    }
  }
  return result; /*0x616758*/
}
