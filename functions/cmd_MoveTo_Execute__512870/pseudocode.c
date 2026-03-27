bool __usercall cmd_MoveTo_Execute@<al>(
        double st0_0@<st7>,
        double a2@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st6>,
        double a7@<st0>,
        ParamInfo *a1,
        UInt8 *a9,
        TESObjectREFR *a4,
        TESObjectREFR *a11,
        Script *a12,
        ScriptEventList *l,
        int a14,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v16[2]; // [esp+10h] [ebp-10h] BYREF
  float v17; // [esp+14h] [ebp-Ch] BYREF
  float v18; // [esp+18h] [ebp-8h] BYREF
  float v19; // [esp+1Ch] [ebp-4h] BYREF

  v19 = 0.0;
  v18 = 0.0;
  v17 = 0.0;
  *(_DWORD *)v16 = 0;
  result = 0;
  if ( Script_ExtractArgs(a1, a9, a3, a4, a11, a12, l, v16, &v19, &v18, &v17) )
  {
    if ( !*(_DWORD *)v16 )
      return 1;
    TESObjectREFR_Move_(st0_0, a2, st4_0, st5_0, a5, a7, a6, v19, a4, *(float *)v16, v19, v18);
    if ( a4 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      return 1;
  }
  return result;
}
