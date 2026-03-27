bool __cdecl sub_501890(
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

  *(float *)v13 = 0.0;
  v14 = 0;
  result = Script_ExtractArgs((ParamInfo *)LODWORD(a1), (void *)HIDWORD(a1), a3, a4, argC, arg10, l, v13, &v14);
  if ( result )
  {
    v8 = (int *)OblivionDynamicCast(
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
    if ( v8 )
    {
      v9 = *(double (__thiscall **)(void *, _DWORD))(*v8 + 0x288);
      v15 = (double)v14;
      v10 = v9(v8, *(_DWORD *)v13);
      v11 = IsConsoleMode == 0;
      v12 = *v8;
      a1a = a1 - v10;
      v14 = 0;
      *(float *)v13 = a1a;
      if ( !v11 )
      {
        (*(void (__thiscall **)(int *, _DWORD, _DWORD, int))(v12 + 0x2A4))(v8, HIDWORD(v15), *(_DWORD *)v13, v14);
        return 1;
      }
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, int))(v12 + 0x29C))(v8, HIDWORD(v15), *(_DWORD *)v13, v14);
    }
    return 1;
  }
  return result;
}
