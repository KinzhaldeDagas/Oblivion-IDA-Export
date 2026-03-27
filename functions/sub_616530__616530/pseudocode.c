double __usercall sub_616530@<st0>(
        double st5_0@<st2>,
        double result@<st0>,
        double st6_0@<st1>,
        int **a4,
        TESObjectREFR *a5,
        TESObjectREFR *a6,
        int a7,
        char a8)
{
  float *v9; // edi
  float *v10; // eax
  TESTopic *v11; // ebx
  int *v12; // edi
  int *v13; // edi
  TESForm *v14; // eax
  _DWORD *v15; // edi
  unsigned int v16; // eax
  bool v17; // zf
  char *v18; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v20; // ebx
  BSStringT *v21; // eax
  BSStringT *v22; // edi
  unsigned int Len; // eax
  float v24; // [esp+14h] [ebp-18h]
  BSStringT v25; // [esp+18h] [ebp-14h] BYREF
  unsigned int v26; // [esp+28h] [ebp-4h]
  float v27; // [esp+30h] [ebp+4h]
  float v28; // [esp+30h] [ebp+4h]

  if ( a4 )
  {
    if ( dword_B3B914 <= dword_B14B94
      || !a5
      || a6 && Actor_IsPlayer(a6)
      || (v9 = (float *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos)(
                          TESDataHandler_g_PlayerRef,
                          result,
                          st6_0,
                          st5_0),
          v10 = a5->vtbl->GetPos(a5),
          v24 = *v10 - *v9,
          v27 = v10[1] - v9[1],
          *(float *)&v25.m_data = v10[2] - v9[2],
          v28 = v27 * v27 + v24 * v24 + *(float *)&v25.m_data * *(float *)&v25.m_data,
          v28 <= flt_B14BAC * flt_B14BAC) )
    {
      v11 = (TESTopic *)TESTopic::GEtTopic(2, a7);
      if ( v11 )
      {
        if ( *a4 )
        {
          if ( sub_6B7260(*a4) && !a8 )
            return result;
          v12 = *a4;
          if ( v12 == (int *)(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))a5[1].vtbl->super.super.InitializeComponent
                              + 0xCF))(
                               a5[1].vtbl,
                               0,
                               result,
                               st6_0,
                               st5_0) )
          {
            (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a5[1].vtbl->super.super.InitializeComponent + 0xD1))(
              a5[1].vtbl,
              0);
          }
          else if ( !sub_6B73A0(v12) )
          {
            v13 = *a4;
            if ( *a4 )
            {
              sub_6B73E0(*a4);
              FormHeapFree((unsigned int)v13);
            }
            *a4 = 0;
          }
        }
        if ( Actor_IsCreature((Actor *)a5) )
        {
          v14 = a5->vtbl->GetBaseForm(a5);
          v15 = OblivionDynamicCast(
                  v14,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESCreature `RTTI Type Descriptor',
                  0);
          if ( a7 == 1 )
          {
            if ( a5->vtbl->IsDead(a5, 0)
              || (v17 = ((unsigned __int8 (__thiscall *)(TESObjectREFR *))a5->vtbl[1].super.SaveGame)(a5) == 0,
                  v16 = 7,
                  !v17) )
            {
              v16 = 8;
            }
            goto LABEL_25;
          }
          if ( a7 == 2 || a7 == 5 )
          {
            v16 = 7;
LABEL_25:
            v18 = sub_51CE70(v15, v16);
            if ( v18 )
            {
              BSStringT_constr_str(&v25, v18);
              v26 = 0;
              Actor::InitDialogue((Actor *)a5, v25.m_data, a4, 0, 0, 0, 0, 0, 0, 0);
              v26 = 0xFFFFFFFF;
              BSStringT_Clear((unsigned int *)&v25);
            }
          }
        }
        else
        {
          DialogueInfo = TESTopic::CreateDialogueInfo(v11, (Actor *)a5, a6, (int)v11, 0);
          v20 = DialogueInfo;
          if ( DialogueInfo )
          {
            if ( sub_6B7BA0(DialogueInfo) )
            {
              v21 = (BSStringT *)sub_6B7C20(v20);
              v22 = v21;
              if ( v21 )
              {
                Len = BSStringT_GetLen(v21);
                Actor::InitDialogue(
                  (Actor *)a5,
                  v22[2].m_data,
                  a4,
                  (int)v22[1].m_data,
                  *(_DWORD *)&v22[1].m_dataLen,
                  Len,
                  0,
                  0,
                  0,
                  0);
                sub_6B7C30((int)v20);
              }
            }
            sub_6B81D0(v20->unk00);
            FormHeapFree((unsigned int)v20);
          }
        }
      }
    }
  }
  return result;
}
