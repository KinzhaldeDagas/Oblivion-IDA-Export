bool __usercall cmd_MoveTo_Execute@<al>(
        double st3_0@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st6>,
        double a6@<st0>,
        double a7@<st5>,
        ParamInfo *a1,
        UInt8 *a9,
        PlayerCharacter *a4,
        TESObjectREFR *a11,
        Script *a12,
        ScriptEventList *l,
        int a14,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v17[2]; // [esp+10h] [ebp-10h] BYREF
  float v18; // [esp+14h] [ebp-Ch] BYREF
  float v19; // [esp+18h] [ebp-8h] BYREF
  float v20; // [esp+1Ch] [ebp-4h] BYREF

  v20 = 0.0; /*0x51287a*/
  v19 = 0.0; /*0x512882*/
  v18 = 0.0; /*0x512887*/
  *(_DWORD *)v17 = 0; /*0x5128b9*/
  result = 0; /*0x5128cd*/
  if ( Script_ExtractArgs(a1, a9, a3, (TESObjectREFR *)a4, a11, a12, l, v17, &v20, &v19, &v18) ) /*0x5128c1*/
  {
    if ( !*(_DWORD *)v17 ) /*0x5128da*/
      return 1; /*0x5128da*/
    TESObjectREFR_Move_(v20, st3_0, st4_0, st5_0, st6_0, a6, a5, a7, a4, *(float *)v17, v20, v19);// MoveTo script command delegates to TESObjectREFR_Move_; player moves eventually flow into PlayerCharacter_ChangeCellAndPosition with a17=true. /*0x5128f8*/
    if ( a4 != reference ) /*0x512906*/
      return 1; /*0x5128cb*/
  }
  return result; /*0x5128cf*/
}
