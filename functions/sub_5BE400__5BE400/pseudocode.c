void __thiscall sub_5BE400(int this, int a2, int a3)
{
  TESTopic *v6; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v8; // edi
  const char **v9; // esi
  const char *v10; // esi
  UInt32 v11; // eax
  float duration; // [esp+8h] [ebp-10h]

  v6 = 0;
  switch ( a2 )
  {
    case 0:
      switch ( a3 )
      {
        case 1:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x14);
          break;
        case 2:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x15);
          break;
        case 3:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x17);
          break;
        case 4:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x16);
          break;
      }
      break;
    case 1:
      switch ( a3 )
      {
        case 1:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x20);
          break;
        case 2:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x21);
          break;
        case 3:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x23);
          break;
        case 4:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x22);
          break;
      }
      break;
    case 2:
      switch ( a3 )
      {
        case 1:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x18);
          break;
        case 2:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x19);
          break;
        case 3:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x1B);
          break;
        case 4:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x1A);
          break;
      }
      break;
    case 3:
      switch ( a3 )
      {
        case 1:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x1C);
          break;
        case 2:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x1D);
          break;
        case 3:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x1F);
          break;
        case 4:
          v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x1E);
          break;
      }
      break;
    case 5:
      v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x24);
      break;
    case 6:
      v6 = (TESTopic *)TESTopic::GEtTopic(3, 0x25);
      break;
    default:
      break;
  }
  DialogueInfo = TESTopic::CreateDialogueInfo(
                   v6,
                   *(Actor **)(this + 0xD8),
                   (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                   0,
                   0);
  v8 = DialogueInfo;
  if ( DialogueInfo )
  {
    sub_6B7BA0(DialogueInfo);
    v9 = (const char **)sub_6B7C20(v8);
    if ( v9 )
    {
      *(_BYTE *)(sub_5E12B0(*(Actor **)(this + 0xD8)) + 0x1DB) = 0;
      *(_DWORD *)(*(_DWORD *)(this + 0xD8) + 0x70) = 7;
      (*(void (__stdcall **)(float, const char **))(**(_DWORD **)(this + 0xD8) + 0x304))(flt_B33E9C, v9);
      if ( byte_B13200 )
      {
        v10 = *v9;
        duration = flt_A30634;
        v11 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 0xD8) + 0x58) + 0x33C))(0);
        GameUI_QueueMessage(v10, v11, 0, duration);
      }
    }
    sub_6B81D0(v8->unk00);
    FormHeapFree((unsigned int)v8);
  }
}
