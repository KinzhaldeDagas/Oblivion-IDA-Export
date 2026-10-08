// ForceAV / ForceActorValue computes target-current and applies that delta through the float script-offset or damage modifier. It changes current AV state, not the base skill progression record.
bool __cdecl Cmd_ForceAV_Execute(
        double a1,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *arg10,
        ScriptEventList *l,
        int a6,
        UInt32 *a3)
{
  bool result; // al
  int *v8; // esi
  double (__thiscall *v9)(void *, _DWORD); // edx
  double v10; // st7
  bool v11; // zf
  int v12; // eax
  UInt16 v13[2]; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-Ch] BYREF
  double v15; // [esp+18h] [ebp-8h]
  float a1a; // [esp+24h] [ebp+4h]

  *(float *)v13 = 0.0; /*0x5018c1*/
  v14 = 0; /*0x5018c9*/
  result = Script_ExtractArgs((ParamInfo *)LODWORD(a1), (void *)HIDWORD(a1), a3, a4, argC, arg10, l, v13, &v14); /*0x5018d1*/
  if ( result ) /*0x5018db*/
  {
    v8 = (int *)OblivionDynamicCast( /*0x5018f6*/
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
    if ( v8 ) /*0x5018fd*/
    {
      v9 = *(double (__thiscall **)(void *, _DWORD))(*v8 + 0x288); /*0x501909*/
      v15 = (double)v14; /*0x501910*/
      v10 = v9(v8, *(_DWORD *)v13); /*0x501916*/
      v11 = MEMORY[0xB361AC] == 0; /*0x50191c*/
      v12 = *v8; /*0x501923*/
      a1a = a1 - v10; /*0x501925*/
      v14 = 0; /*0x501929*/
      *(float *)v13 = a1a; /*0x501934*/
      if ( !v11 ) /*0x50193a*/
      {
        (*(void (__thiscall **)(int *, _DWORD, _DWORD, int))(v12 + 0x2A4))(v8, HIDWORD(v15), *(_DWORD *)v13, v14);// Console ForceAV uses the float damage-modifier channel. /*0x501942*/
        return 1; /*0x50194a*/
      }
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, int))(v12 + 0x29C))(v8, HIDWORD(v15), *(_DWORD *)v13, v14);// Script ForceAV uses the float script-offset channel. /*0x501951*/
    }
    return 1; /*0x501953*/
  }
  return result; /*0x5018dd*/
}
