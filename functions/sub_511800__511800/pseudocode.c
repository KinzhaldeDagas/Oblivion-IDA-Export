bool __cdecl sub_511800(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  double *v8; // esi
  bool result; // al
  double *v10; // ecx
  int v11; // eax
  const char *v12; // eax
  const char *v13; // ecx
  int v14[2]; // [esp+10h] [ebp-8h] BYREF

  v8 = a7; /*0x51180a*/
  *a7 = 0.0; /*0x511812*/
  a7 = 0; /*0x511839*/
  v14[0] = 0; /*0x511841*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7, v14); /*0x511849*/
  if ( result ) /*0x511853*/
  {
    v10 = a7; /*0x51185a*/
    if ( a7 ) /*0x511860*/
    {
      if ( v14[0] ) /*0x511868*/
      {
        v11 = sub_51F0B0(a7, v14[0]); /*0x51186b*/
        v10 = a7; /*0x511870*/
        v14[1] = v11; /*0x511874*/
        *v8 = (double)v11; /*0x51187c*/
      }
    }
    if ( MEMORY[0xB361AC] ) /*0x51187e*/
    {
      v12 = *(const char **)(v14[0] + 0x1C); /*0x51188b*/
      if ( !v12 ) /*0x511890*/
        v12 = EmptyString; /*0x511892*/
      v13 = *((const char **)v10 + 7); /*0x511897*/
      if ( !v13 ) /*0x51189c*/
        v13 = EmptyString; /*0x51189e*/
      Interface_ConsolePrint("%.20s reaction to %.20s is %.1f", v13, v12, *v8); /*0x5118b2*/
    }
    return 1; /*0x5118ba*/
  }
  return result; /*0x511855*/
}
