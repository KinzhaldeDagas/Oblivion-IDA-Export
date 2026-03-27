int *__thiscall sub_4FB630(int *this, int ArgList, double a3)
{
  int *result; // eax
  int v4; // edx
  int v5; // ecx
  const char *v6; // eax
  UInt32 *v7; // edi
  TESForm *v8; // esi
  TESObjectREFR *v9; // eax
  TESObjectREFR *v10; // ebx
  char *Name; // eax
  const char *v12; // [esp-1Ch] [ebp-20h]
  UInt32 v13; // [esp-10h] [ebp-14h]

  result = (int *)*(this + 3);
  while ( result )
  {
    v4 = *result;
    if ( !*result )
      break;
    result = (int *)result[1];
    if ( *(_DWORD *)v4 == ArgList )
    {
      *(double *)(v4 + 8) = a3;
      return result;
    }
  }
  v5 = *this;
  if ( v5 )
  {
    v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xD4))(v5);
    return (int *)PrintError("Trying to set variableID %d in script '%s' -- variable not found.", ArgList, v6);
  }
  else if ( sub_45A500(SaveLoad_CurrentSavegame) && (v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0]) != 0 )
  {
    v8 = TESForm_LookupByFormID(*v7);
    v9 = (TESObjectREFR *)OblivionDynamicCast(
                            v8,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
    v10 = v9;
    if ( v9 )
      Name = TESObjectREFR_GetName(v9);
    else
      Name = TESFullName_GetNameForForm(v8);
    if ( v8 && Name )
    {
      v13 = *v7;
      v12 = (const char *)SaveLoad_CurrentSavegame[5].unk030[0];
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
                      (const char *)SaveLoad_CurrentSavegame[5].unk030[0],
                      ArgList,
                      *v7);
    }
  }
  else
  {
    return (int *)PrintError("Trying to set variableID %d -- variable not found.", ArgList);
  }
}
