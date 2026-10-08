int *__thiscall sub_4FB630(int *this, int ArgList, double a3)
{
  int *result; // eax
  int v4; // edx
  int v5; // ecx
  const char *v6; // eax
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v8; // esi
  TESObjectREFR *v9; // eax
  TESObjectREFR *v10; // ebx
  char *Name; // eax
  const char *v12; // [esp-1Ch] [ebp-20h]
  UInt32 v13; // [esp-10h] [ebp-14h]

  result = (int *)*(this + 3); /*0x4fb630*/
  while ( result ) /*0x4fb63a*/
  {
    v4 = *result; /*0x4fb640*/
    if ( !*result ) /*0x4fb640*/
      break; /*0x4fb640*/
    result = (int *)result[1]; /*0x4fb648*/
    if ( *(_DWORD *)v4 == ArgList ) /*0x4fb64b*/
    {
      *(double *)(v4 + 8) = a3; /*0x4fb679*/
      return result; /*0x4fb67c*/
    }
  }
  v5 = *this; /*0x4fb651*/
  if ( v5 )
  {
    v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xD4))(v5); /*0x4fb65f*/
    return (int *)PrintError("Trying to set variableID %d in script '%s' -- variable not found.", ArgList, v6); /*0x4fb668*/
  }
  else if ( sub_45A500(g_TESSaveLoadGame)
         && (currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader) != 0 )
  {
    v8 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x4fb6bc*/
    v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x4fb6c1*/
                            v8,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
    v10 = v9; /*0x4fb6c6*/
    if ( v9 ) /*0x4fb6cd*/
      Name = TESObjectREFR_GetName(v9); /*0x4fb6d1*/
    else
      Name = TESFullName_GetNameForForm(v8); /*0x4fb6d9*/
    if ( v8 && Name )
    {
      v13 = *currentlyLoadingFormHeader; /*0x4fb6ed*/
      v12 = *(const char **)&g_TESSaveLoadGame[3].unknown1C[0xC]; /*0x4fb6fb*/
      if ( v10 )
        return (int *)PrintError(
                        "LoadGame '%s': Trying to set variableID %d on ref '%s' (%08X) -- variable not found. The script "
                        "may have been changed in the master/plug-in file.",
                        v12,
                        ArgList,
                        Name,
                        v13);
      else
        return (int *)PrintError(
                        "LoadGame '%s': Trying to set variableID %d on '%s' (%08X) -- variable not found. The script may "
                        "have been changed in the master/plug-in file.",
                        v12,
                        ArgList,
                        Name,
                        v13);
    }
    else
    {
      return (int *)PrintError(
                      "LoadGame '%s': Trying to set variableID %d on (%08X) -- variable not found. The script may have be"
                      "en changed in the master/plug-in file.",
                      *(const char **)&g_TESSaveLoadGame[3].unknown1C[0xC],
                      ArgList,
                      *currentlyLoadingFormHeader);
    }
  }
  else
  {
    return (int *)PrintError("Trying to set variableID %d -- variable not found.", ArgList); /*0x4fb750*/
  }
}
