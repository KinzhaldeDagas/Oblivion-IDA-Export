void __thiscall sub_59E1D0(void **this, int a2)
{
  TESTopic *v3; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v5; // ebx
  char **v6; // edi
  float v7; // [esp+8h] [ebp-10h]

  if ( a2 )
    v3 = (TESTopic *)TESTopic::GEtTopic(5, 0xC);
  else
    v3 = (TESTopic *)TESTopic::GEtTopic(5, 0xA);
  DialogueInfo = TESTopic::CreateDialogueInfo(
                   v3,
                   (Actor *)*(this + 0x18),
                   (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                   0,
                   0);
  v5 = DialogueInfo;
  if ( DialogueInfo )
  {
    if ( sub_6B7BA0(DialogueInfo) )
    {
      v6 = (char **)sub_6B7C20(v5);
      (*(void (__stdcall **)(_DWORD, char **))(*(_DWORD *)*(this + 0x18) + 0x304))(0.0, v6);
      *((float *)this + 0x21) = fConstant_2;
      *(this + 0x20) = (void *)2;
      v7 = (float)((byte_B13200 != 0) + 1);
      Tile_SetFloat((Tile *)*(this + 0xB), (_DWORD *)0xFA1, v7);
      Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, *v6);
      Tile_SetFloat((Tile *)*(this + 0xF), (_DWORD *)0xFA1, 1.0);
    }
    sub_6B81D0(v5->unk00);
    FormHeapFree((unsigned int)v5);
  }
}
