char __cdecl sub_5052D0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  int v8; // eax
  int v10; // [esp+0h] [ebp-4h] BYREF

  *(double *)a7 = 0.0;
  a7 = 0;
  v10 = 0;
  LOBYTE(v8) = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7, &v10);
  if ( (_BYTE)v8 )
  {
    if ( a7 )
    {
      LOBYTE(v8) = v10 > 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a7 + 0x94))(a7, v8);
    }
    LOBYTE(v8) = 1;
  }
  return v8;
}
