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

  v2 = ArgList;
  v3 = this + 4;
  if ( ArgList )
    a2 = TESForm_GetOverrideFile(ArgList, 0xFFFFFFFF);
  else
    a2 = 0;
  while ( v3 )
  {
    v4 = *(TESForm ***)v3;
    if ( !*(_DWORD *)v3 )
      break;
    ArgList = *v4;
    TESForm_ResolveFormID((UInt32 *)&ArgList, a2);
    v5 = TESForm_LookupByFormID((UInt32)ArgList);
    *v4 = v5;
    if ( v5 )
    {
      v3 = *((char **)v3 + 1);
    }
    else
    {
      refID = v2->member.refID;
      v7 = v2->vtbl->GetEditorName(v2);
      PrintError("Form (%08X) not found for reaction of pForm (%08X) '%s'.\r\n", ArgList, refID, v7);
      v8 = *((_DWORD **)v3 + 1);
      if ( v8 )
      {
        *((_DWORD *)v3 + 1) = v8[1];
        *(_DWORD *)v3 = *v8;
        FormHeapFree((unsigned int)v8);
      }
      else
      {
        *(_DWORD *)v3 = 0;
      }
      FormHeapFree((unsigned int)v4);
    }
  }
}
