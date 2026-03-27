bool __cdecl sub_507E60(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *arg8,
        TESObjectREFR *argC,
        Script *arg10,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v9; // edi
  bool result; // al
  double v11; // st7
  void *v12; // eax
  NiNode *v13; // eax
  NiNode *v14; // esi
  char *Name; // eax
  double a5; // [esp+8h] [ebp-14h]
  UInt16 v17[2]; // [esp+14h] [ebp-8h] BYREF
  int a2; // [esp+18h] [ebp-4h]

  if ( !ImageSpaceEffectEnabled || !enableRefraction || ShaderPackage < 2 )
    return 1;
  *(float *)v17 = 0.0;
  v9 = arg8;
  result = Script_ExtractArgs(a1, arg4, a3, arg8, argC, arg10, l, v17);
  if ( !result )
    return result;
  if ( !arg8 )
    v9 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v11 = flt_A31C80;
  if ( *(float *)v17 < v11 && *(float *)v17 <= 0.0 )
  {
    *(float *)v17 = 0.0;
LABEL_12:
    LOBYTE(a2) = 0;
    goto LABEL_13;
  }
  if ( *(float *)v17 < v11 )
  {
    if ( *(float *)v17 > 0.0 )
    {
      LOBYTE(a2) = 1;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  LOBYTE(a2) = 1;
  *(float *)v17 = v11;
LABEL_13:
  v12 = OblivionDynamicCast(
          v9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  if ( v12 )
  {
    (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)v12 + 0x270))(v12, a2, *(_DWORD *)v17);
  }
  else
  {
    v13 = v9->vtbl->GetNiNode(v9);
    v14 = v13;
    if ( v13 )
    {
      sub_7D92C0(v13, 0, 0.0, 0, 0.0);
      sub_7D92C0(v14, 0, 0.0, 1, 0.0);
      sub_7D92C0(v14, a2, *(float *)v17, 0, 0.0);
    }
  }
  if ( IsConsoleMode )
  {
    a5 = *(float *)v17;
    Name = TESObjectREFR_GetName(v9);
    Interface_ConsolePrint("%s refraction has been set to %f", Name, a5);
  }
  return 1;
}
