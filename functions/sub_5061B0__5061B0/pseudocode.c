bool __cdecl sub_5061B0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // esi
  bool result; // al
  char *Name; // eax
  UInt16 v11[2]; // [esp+4h] [ebp-8h] BYREF
  float v12; // [esp+8h] [ebp-4h] BYREF

  v12 = kTerrainLODQuadRayDirectionZ; /*0x5061be*/
  v8 = arg8; /*0x5061c2*/
  *(_DWORD *)v11 = 0; /*0x5061eb*/
  result = Script_ExtractArgs(a1, a2, a3, arg8, a4, a5, l, v11, &v12); /*0x5061f3*/
  if ( result ) /*0x5061fd*/
  {
    if ( !arg8 ) /*0x506206*/
      v8 = (TESObjectREFR *)reference; /*0x506208*/
    ActorProcessManager_FinishShaderEffectsForTarget( /*0x506219*/
      (ActorProcessManager *)&qword_B3BB2C[0x75],
      v8,
      *(TESEffectShader **)v11);
    if ( TESObjectREFR_GetName(v8) ) /*0x506220*/
    {
      Name = TESObjectREFR_GetName(v8); /*0x50622b*/
      Interface_ConsolePrint("Shader effect has been removed from %s", Name); /*0x506236*/
    }
    else
    {
      Interface_ConsolePrint("Shader effect has been removed from reference"); /*0x50624a*/
    }
    return 1; /*0x50623e*/
  }
  return result; /*0x5061ff*/
}
