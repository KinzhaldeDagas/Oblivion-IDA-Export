Unk1C *__thiscall TESTopic::CreateDialogueInfo(TESTopic *this, Actor *a3, TESObjectREFR *a4, int a6, _DWORD *a7)
{
  TESForm *v6; // edi
  Unk1C *v7; // ebx
  Unk1C *result; // eax
  TESQuest *v9; // eax

  v6 = (TESForm *)sub_52F010(this, &a7, a3, a4, 1, a6, a7);
  if ( !v6 )
    return 0;
  v7 = (Unk1C *)FormHeapAlloc(0x1Cu);
  result = 0;
  if ( v7 )
  {
    v9 = sub_52F570(this, (int)v6);
    return sub_6B80D0(v7, v9, this, v6, (TESObjectREFR *)a3);
  }
  return result;
}
