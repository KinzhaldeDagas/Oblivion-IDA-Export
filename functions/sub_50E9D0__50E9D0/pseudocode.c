bool __cdecl sub_50E9D0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  int v8; // ecx
  bool result; // al
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = v8; /*0x50e9d0*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10); /*0x50e9f8*/
  if ( result ) /*0x50ea02*/
  {
    result = 1; /*0x50ea0b*/
    if ( *(_DWORD *)v10 ) /*0x50ea0d*/
    {
      unk_B333B8 = 1; /*0x50ea0f*/
      unk_BA7A04 = 1; /*0x50ea14*/
    }
    else
    {
      unk_B333B8 = 0; /*0x50ea1b*/
      unk_BA7A04 = 0; /*0x50ea21*/
    }
  }
  return result; /*0x50ea05*/
}
