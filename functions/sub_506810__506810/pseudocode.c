bool __cdecl sub_506810(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  TESForm *v9; // eax
  _DWORD *v10; // eax
  char *Name; // eax
  int v12; // [esp-8h] [ebp-Ch]
  UInt16 v13[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50683a*/
  result = Script_ExtractArgs(a1, a2, a3, arg8, a4, a5, l, v13); /*0x506842*/
  if ( result ) /*0x50684c*/
  {
    if ( arg8 ) /*0x506853*/
    {
      v9 = arg8->vtbl->GetBaseForm(arg8); /*0x50685f*/
      if ( v9 ) /*0x506863*/
      {
        v10 = OblivionDynamicCast( /*0x506874*/
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                &TESValueForm `RTTI Type Descriptor',
                0);
        if ( v10 ) /*0x50687e*/
        {
          TESValueForm_SetValue(v10, *(int *)v13); /*0x506887*/
          if ( MEMORY[0xB361AC] ) /*0x50688c*/
          {
            v12 = *(_DWORD *)v13; /*0x506899*/
            Name = TESObjectREFR_GetName(arg8); /*0x50689c*/
            Interface_ConsolePrint("%s has been set to a VALUE of %i", Name, v12); /*0x5068a7*/
          }
        }
      }
    }
    return 1; /*0x5068af*/
  }
  return result; /*0x506850*/
}
