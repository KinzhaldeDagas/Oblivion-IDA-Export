void __thiscall sub_59E030(void **this)
{
  TESTopic *v2; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v4; // ebx
  char **v5; // edi
  float v6; // [esp+8h] [ebp-14h]

  v2 = (TESTopic *)TESTopic::GEtTopic(5, 8);
  DialogueInfo = TESTopic::CreateDialogueInfo(
                   v2,
                   (Actor *)*(this + 0x18),
                   (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                   0,
                   0);
  v4 = DialogueInfo;
  if ( DialogueInfo )
  {
    if ( sub_6B7BA0(DialogueInfo) )
    {
      v5 = (char **)sub_6B7C20(v4);
      (*(void (__stdcall **)(_DWORD, char **))(*(_DWORD *)*(this + 0x18) + 0x304))(0.0, v5);
      *((float *)this + 0x21) = fConstant_2;
      *(this + 0x20) = (void *)2;
      v6 = (float)((byte_B13200 != 0) + 1);
      Tile_SetFloat((Tile *)*(this + 0xB), (_DWORD *)0xFA1, v6);
      Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, *v5);
      Tile_SetFloat((Tile *)*(this + 0xF), (_DWORD *)0xFA1, 1.0);
    }
    sub_6B81D0(v4->unk00);
    FormHeapFree((unsigned int)v4);
  }
}
