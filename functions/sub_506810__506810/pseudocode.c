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

  *(_DWORD *)v13 = 0;
  result = Script_ExtractArgs(a1, a2, a3, arg8, a4, a5, l, v13);
  if ( result )
  {
    if ( arg8 )
    {
      v9 = arg8->vtbl->GetBaseForm(arg8);
      if ( v9 )
      {
        v10 = OblivionDynamicCast(
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                &TESValueForm `RTTI Type Descriptor',
                0);
        if ( v10 )
        {
          TESValueForm_SetValue(v10, *(int *)v13);
          if ( IsConsoleMode )
          {
            v12 = *(_DWORD *)v13;
            Name = TESObjectREFR_GetName(arg8);
            Interface_ConsolePrint("%s has been set to a VALUE of %i", Name, v12);
          }
        }
      }
    }
    return 1;
  }
  return result;
}
