void __userpurge sub_4D9100(
        int a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        TESTopic *a4,
        Actor *a5,
        char a6,
        char a7,
        int a8)
{
  Unk1C *DialogueInfo; // esi
  TESForm *form; // ebx
  int *sound; // edi
  int v13; // eax
  const char **v14; // ebx
  int *v15; // eax
  int *v16; // esi
  float *v17; // eax
  int duration; // [esp+8h] [ebp-228h]
  int durationa; // [esp+8h] [ebp-228h]
  int v20[128]; // [esp+2Ch] [ebp-204h] BYREF

  DialogueInfo = TESTopic::CreateDialogueInfo(a4, a5, 0, 0, 0);
  if ( DialogueInfo )
  {
    form = DialogueInfo->form;
    sound = (int *)OSGlobals->sound;
    if ( form )
    {
      sub_531470(form, a2, a3, a1);
      sub_5308D0((int)form);
    }
    if ( sound )
    {
      sub_6B7BA0(DialogueInfo);
      v13 = sub_6B7C20(DialogueInfo);
      v14 = (const char **)v13;
      if ( v13 )
      {
        BSStringT_Static_StrCpy((char *)v20, *(const char **)(v13 + 0x10));
        if ( a6 || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1) )
        {
          *(float *)&durationa = 0.0;
          if ( a7 )
            v15 = sub_6AE370(sound, (const char *)v20, 1, 0, durationa);
          else
            v15 = sub_6AE370(sound, (const char *)v20, 5, 0, durationa);
        }
        else
        {
          *(float *)&duration = 0.0;
          if ( a7 )
            v15 = sub_6AE370(sound, (const char *)v20, 2, 0, duration);
          else
            v15 = sub_6AE370(sound, (const char *)v20, 6, 0, duration);
        }
        v16 = v15;
        if ( v15 )
        {
          if ( !a6 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1) )
            {
              v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1);
              sub_6B7360(v16, v17[0x22], v17[0x23], v17[0x24]);
              sub_6ACC50(sound, *v16, flt_B161C8, flt_B161D0);
              sub_6AC3E0((_DWORD **)sound, *v16, a1);
            }
          }
          sub_6B7340(v16);
          sub_6B7190(v16, 0);
        }
        if ( byte_B13208 )
          GameUI_QueueMessage(*v14, (UInt32)v16, 0, flt_A30634);
      }
    }
  }
}
