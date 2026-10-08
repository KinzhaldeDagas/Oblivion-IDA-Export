void __cdecl sub_505FE0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v10; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  MagicShaderHitEffect *v12; // eax
  MagicShaderHitEffect *v13; // esi
  void (__thiscall *Destructor)(NiRefObject *, bool); // eax
  char *Name; // eax
  char *v16; // eax
  float elapsedSeconds; // [esp+10h] [ebp-18h] BYREF
  UInt16 v18[2]; // [esp+14h] [ebp-14h] BYREF
  MagicShaderHitEffect *v19; // [esp+18h] [ebp-10h]
  unsigned int v20; // [esp+24h] [ebp-4h]

  v10 = arg8; /*0x50600f*/
  elapsedSeconds = kTerrainLODQuadRayDirectionZ; /*0x506013*/
  *(_DWORD *)v18 = 0; /*0x50603c*/
  if ( Script_ExtractArgs(a1, a2, a3, arg8, a4, a5, l, v18, &elapsedSeconds) ) /*0x506044*/
  {
    if ( !arg8 ) /*0x506064*/
      v10 = (TESObjectREFR *)reference; /*0x506066*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v10); /*0x50606e*/
    if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x50607c*/
    {
      if ( v10->vtbl->GetNiNode(v10) ) /*0x506093*/
      {
        v12 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu); /*0x50609f*/
        v19 = v12; /*0x5060a7*/
        v20 = 0; /*0x5060ad*/
        if ( v12 ) /*0x5060b5*/
          v13 = MagicShaderHitEffect_constr_args2(v12, v10, *(TESEffectShader **)v18, elapsedSeconds); /*0x5060cc*/
        else
          v13 = 0; /*0x5060d0*/
        Destructor = v13->super.super.vtable[1].super.super.Destructor; /*0x5060d4*/
        v20 = 0xFFFFFFFF; /*0x5060d9*/
        if ( ((unsigned __int8 (__thiscall *)(MagicShaderHitEffect *))Destructor)(v13) ) /*0x5060e1*/
        {
          ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v13->super.super); /*0x5060ed*/
          if ( MEMORY[0xB361AC] ) /*0x5060f2*/
          {
            if ( TESObjectREFR_GetName(v10) ) /*0x506101*/
            {
              Name = TESObjectREFR_GetName(v10); /*0x50610c*/
              Interface_ConsolePrint("Shader effect has been applied to %s", Name); /*0x506117*/
            }
            else
            {
              Interface_ConsolePrint("Shader effect has been applied to reference"); /*0x506138*/
            }
          }
        }
        else
        {
          v13->super.super.vtable->super.super.Destructor((NiRefObject *)v13, 1); /*0x506142*/
          if ( MEMORY[0xB361AC] ) /*0x506144*/
          {
            if ( TESObjectREFR_GetName(v10) ) /*0x50614f*/
            {
              v16 = TESObjectREFR_GetName(v10); /*0x50615a*/
              Interface_ConsolePrint("Shader effect initialization failed for %s", v16); /*0x506165*/
            }
            else
            {
              Interface_ConsolePrint("Shader effect initialization failed for reference"); /*0x506186*/
            }
          }
        }
      }
    }
  }
}
