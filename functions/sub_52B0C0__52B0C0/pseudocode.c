void *__thiscall sub_52B0C0(UInt32 *this, TESForm *a2, char *a3)
{
  UInt32 *v4; // ecx
  char v5; // bl
  int v6; // ebp
  bool v7; // zf
  unsigned __int8 v8; // bl
  const char *v9; // eax
  void *result; // eax
  int v11; // [esp-4h] [ebp-14h]

  v4 = this + 1;
  if ( v4 )
    sub_56A480(v4, a2);
  v5 = bDisableWarning_MESSAGES;
  v6 = dword_B34D88;
  bDisableWarning_MESSAGES = 1;
  dword_B34D88 = 0;
  sub_4FBB60((TESForm *)(this + 3), *(float *)&a2);
  v7 = dword_B34D88 == 0;
  bDisableWarning_MESSAGES = v5;
  dword_B34D88 = v6;
  if ( !v7 )
  {
    v8 = *a3;
    v9 = (const char *)((int (__thiscall *)(TESForm *, UInt32))a2->vtbl->GetEditorName)(a2, a2->member.refID);
    PrintError(
      "Errors were encountered during InitItem for result script on quest stage %d, quest '%s' (%08X)\n"
      "\n"
      "See Warnings file for more information.",
      v8,
      v9,
      v11);
  }
  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESQuest `RTTI Type Descriptor',
             0);
  *(this + 0x1A) = (UInt32)result;
  return result;
}
