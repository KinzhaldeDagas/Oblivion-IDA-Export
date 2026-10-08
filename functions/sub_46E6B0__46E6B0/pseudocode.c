void __thiscall sub_46E6B0(char *this, TESForm *ArgList)
{
  TESForm *v2; // edi
  char *v3; // esi
  TESForm **v4; // ebp
  TESForm *v5; // eax
  UInt32 refID; // ebx
  const char *v7; // eax
  _DWORD *v8; // eax
  Data *a2; // [esp+8h] [ebp-4h]

  v2 = ArgList; /*0x46e6b3*/
  v3 = this + 4; /*0x46e6b9*/
  if ( ArgList ) /*0x46e6bc*/
    a2 = TESForm_GetOverrideFile(ArgList, 0xFFFFFFFF); /*0x46e6c7*/
  else
    a2 = 0; /*0x46e6cd*/
  while ( v3 ) /*0x46e6d7*/
  {
    v4 = *(TESForm ***)v3; /*0x46e6e0*/
    if ( !*(_DWORD *)v3 ) /*0x46e6e0*/
      break; /*0x46e6e4*/
    ArgList = *v4; /*0x46e6f7*/
    TESForm_ResolveFormID((UInt32 *)&ArgList, a2); /*0x46e6fb*/
    v5 = TESForm_LookupByFormID((UInt32)ArgList); /*0x46e705*/
    *v4 = v5; /*0x46e70f*/
    if ( v5 ) /*0x46e712*/
    {
      v3 = *((char **)v3 + 1); /*0x46e714*/
    }
    else
    {
      refID = v2->member.refID; /*0x46e721*/
      v7 = v2->vtbl->GetEditorName(v2); /*0x46e726*/
      PrintError("Form (%08X) not found for reaction of pForm (%08X) '%s'.\r\n", ArgList, refID, v7); /*0x46e734*/
      v8 = *((_DWORD **)v3 + 1); /*0x46e739*/
      if ( v8 ) /*0x46e741*/
      {
        *((_DWORD *)v3 + 1) = v8[1]; /*0x46e746*/
        *(_DWORD *)v3 = *v8; /*0x46e74c*/
        FormHeapFree((unsigned int)v8); /*0x46e74e*/
      }
      else
      {
        *(_DWORD *)v3 = 0; /*0x46e758*/
      }
      FormHeapFree((unsigned int)v4); /*0x46e75f*/
    }
  }
}
