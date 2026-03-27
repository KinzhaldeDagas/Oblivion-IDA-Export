void __userpurge sub_5F70F0(
        Actor *a1@<ecx>,
        double a2@<st1>,
        TESTopic *a3,
        TESObjectREFR *a4,
        char a5,
        char a6,
        int a7)
{
  Unk1C *DialogueInfo; // ebx
  TESForm *form; // esi
  int *sound; // ebp
  int v13; // eax
  int *v14; // eax
  int *v15; // esi
  float *v16; // eax
  int duration; // [esp+8h] [ebp-230h]
  int v18; // [esp+20h] [ebp-218h]
  const char **v19; // [esp+24h] [ebp-214h]
  float v20; // [esp+28h] [ebp-210h]
  float v21; // [esp+2Ch] [ebp-20Ch]
  float v22; // [esp+30h] [ebp-208h]
  int v23[128]; // [esp+34h] [ebp-204h] BYREF

  DialogueInfo = TESTopic::CreateDialogueInfo(a3, a1, a4, 0, 0);
  sub_5EF930(a1);
  if ( DialogueInfo )
  {
    form = DialogueInfo->form;
    if ( form )
    {
      sub_5308D0((int)DialogueInfo->form);
      sub_531470(form, a2, 0.0, (TESObjectREFR *)a1);
    }
    sound = (int *)OSGlobals->sound;
    if ( sound )
    {
      sub_6B7BA0(DialogueInfo);
      v13 = sub_6B7C20(DialogueInfo);
      v19 = (const char **)v13;
      if ( v13 )
      {
        BSStringT_Static_StrCpy((char *)v23, *(const char **)(v13 + 0x10));
        *(float *)&duration = 0.0;
        if ( a5 )
          v14 = sub_6AE370(sound, (const char *)v23, 0x105, 0, duration);
        else
          v14 = sub_6AE370(sound, (const char *)v23, 0x106, 0, duration);
        v15 = v14;
        if ( v14 )
        {
          if ( a5 )
          {
            v18 = (int)(*(float *)GameSetting_GetSafeFloatPointer(&dword_B161E0) * fCostant_100);
            sub_6B72B0(v15, (unsigned __int16)v18);
          }
          else
          {
            v16 = a1->vtbl->super.super.GetPos((TESObjectREFR *)a1);
            v20 = *v16;
            v21 = v16[1];
            v22 = v16[2];
            sub_6ACC50(sound, *v15, flt_B161C8, flt_B161D0);
            sub_6B7360(v15, v20, v21, v22);
            sub_6AC3E0((_DWORD **)sound, *v15, (LONG)a1);
          }
          sub_6B7190(v15, 0);
          ((void (__thiscall *)(LowProcess *, _DWORD, int *))a1->members.super.process->SetUnk220Element)(
            a1->members.super.process,
            0,
            v15);
          sub_6B7340(v15);
        }
        if ( byte_B13208 )
        {
          if ( !a6 )
            GameUI_QueueMessage(*v19, (UInt32)v15, 0, flt_A30634);
        }
      }
    }
    sub_6B81D0(DialogueInfo->unk00);
    FormHeapFree((unsigned int)DialogueInfo);
  }
}
