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

  v4 = this + 1; /*0x52b0ca*/
  if ( v4 ) /*0x52b0cf*/
    sub_56A480(v4, a2); /*0x52b0d2*/
  v5 = bDisableWarning_MESSAGES; /*0x52b0d7*/
  v6 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8]; /*0x52b0dd*/
  bDisableWarning_MESSAGES = 1; /*0x52b0e7*/
  *(_DWORD *)&MEMORY[0xB33E90][0xEF8] = 0; /*0x52b0ee*/
  sub_4FBB60((TESForm *)(this + 3), *(float *)&a2); /*0x52b0f8*/
  v7 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8] == 0; /*0x52b102*/
  bDisableWarning_MESSAGES = v5; /*0x52b104*/
  *(_DWORD *)&MEMORY[0xB33E90][0xEF8] = v6; /*0x52b10a*/
  if ( !v7 ) /*0x52b110*/
  {
    v8 = *a3; /*0x52b11b*/
    v9 = (const char *)((int (__thiscall *)(TESForm *, UInt32))a2->vtbl->GetEditorName)(a2, a2->member.refID); /*0x52b126*/
    PrintError( /*0x52b132*/
      "Errors were encountered during InitItem for result script on quest stage %d, quest '%s' (%08X)\n"
      "\n"
      "See Warnings file for more information.",
      v8,
      v9,
      v11);
  }
  result = OblivionDynamicCast( /*0x52b149*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESQuest `RTTI Type Descriptor',
             0);
  *(this + 0x1A) = (UInt32)result; /*0x52b151*/
  return result; /*0x52b154*/
}
