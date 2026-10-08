// Hit visual-effect command path. Applies a visual effect to a reference; when the ref has no NiNode yet it spawns a placed effect object and plays SpecialIdle_HitEffect through the controller manager.
void __usercall sub_512CA0(
        double st6_0@<st1>,
        double a2@<st0>,
        ParamInfo *a1,
        UInt8 *a4,
        TESObjectREFR *a5,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  PlayerCharacter *v10; // esi
  TESObjectCELL *ParentCell; // eax
  float x; // ecx
  float z; // eax
  PlayerCharacterVtbl *vtbl; // edx
  float *v15; // eax
  const char *v16; // ecx
  float v17; // ebp
  UInt32 v18; // ebx
  TESObjectCELL *v19; // eax
  float v20; // edi
  TESObjectCELL *v21; // eax
  void *v22; // edi
  char *Name; // eax
  NiObject *v24; // edi
  int v25; // eax
  char *v26; // eax
  int v27; // [esp+4h] [ebp-74h]
  const char *v28; // [esp+8h] [ebp-70h]
  float v29; // [esp+Ch] [ebp-6Ch]
  float v30; // [esp+10h] [ebp-68h]
  int v31; // [esp+14h] [ebp-64h]
  const char *v32; // [esp+20h] [ebp-58h]
  signed int v33; // [esp+24h] [ebp-54h]
  float v34; // [esp+28h] [ebp-50h]
  UInt16 v35[2]; // [esp+40h] [ebp-38h] BYREF
  float v36; // [esp+44h] [ebp-34h]
  float v37; // [esp+48h] [ebp-30h] BYREF
  int v38; // [esp+4Ch] [ebp-2Ch]
  int v39; // [esp+50h] [ebp-28h]
  float v40; // [esp+54h] [ebp-24h]
  int y_low; // [esp+58h] [ebp-20h]
  float v42; // [esp+5Ch] [ebp-1Ch]
  const char *v43; // [esp+68h] [ebp-10h]
  int v44; // [esp+74h] [ebp-4h]

  v10 = (PlayerCharacter *)a5; /*0x512cd1*/
  v37 = kTerrainLODQuadRayDirectionZ; /*0x512cd5*/
  *(_DWORD *)v35 = 0; /*0x512cfe*/
  if ( Script_ExtractArgs(a1, a4, a3, a5, a6, a7, l, v35, &v37) ) /*0x512d06*/
  {
    if ( !a5 ) /*0x512d28*/
      v10 = reference; /*0x512d2a*/
    ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)v10); /*0x512d32*/
    if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) ) /*0x512d40*/
    {
      if ( !v10->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v10) ) /*0x512d57*/
      {
        x = v10->super.super.super.super.rot.x; /*0x512d64*/
        z = v10->super.super.super.super.rot.z; /*0x512d67*/
        y_low = SLODWORD(v10->super.super.super.super.rot.y); /*0x512d6a*/
        vtbl = v10->vtbl; /*0x512d6e*/
        v40 = x; /*0x512d70*/
        v42 = z; /*0x512d74*/
        v15 = (float *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))vtbl->super.super.super.GetPos)( /*0x512d80*/
                         v10,
                         a2,
                         st6_0);
        v16 = *((const char **)v15 + 2); /*0x512d86*/
        v17 = *v15; /*0x512d8b*/
        v36 = -v42; /*0x512d8d*/
        v18 = *((_DWORD *)v15 + 1); /*0x512d95*/
        v43 = v16; /*0x512d98*/
        *(float *)&v38 = cos(v36); /*0x512da1*/
        v39 = v38; /*0x512da9*/
        *(float *)&v38 = sin(v36); /*0x512db6*/
        v40 = -*(float *)&v38; /*0x512dc2*/
        y_low = v39; /*0x512dca*/
        v42 = 0.0; /*0x512dd0*/
        Shared_GetDwordAtOffset40((TESObjectREFR *)v10); /*0x512dd4*/
        v33 = sub_4C9BE0((TESObjectREFR *)v10); /*0x512de4*/
        v19 = Shared_GetDwordAtOffset40((TESObjectREFR *)v10); /*0x512de7*/
        *(float *)&v39 = COERCE_FLOAT(sub_441800(v19, v33, 3u)); /*0x512df5*/
        v20 = COERCE_FLOAT(FormHeapAlloc(0x20u)); /*0x512dfe*/
        *(float *)&v38 = v20; /*0x512e03*/
        v44 = 0; /*0x512e09*/
        if ( v20 == 0.0 ) /*0x512e11*/
        {
          v22 = 0; /*0x512e72*/
        }
        else
        {
          v32 = v43; /*0x512e2d*/
          v29 = v40; /*0x512e39*/
          v30 = *(float *)&y_low; /*0x512e3f*/
          v31 = LODWORD(v42); /*0x512e49*/
          v28 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v35 + 0x18) + 0x14))(*(_DWORD *)v35 + 0x18); /*0x512e55*/
          v27 = v39; /*0x512e5a*/
          v21 = Shared_GetDwordAtOffset40((TESObjectREFR *)v10); /*0x512e61*/
          v22 = BSTempEffectParticle_Constructor( /*0x512e6e*/
                  (void *)LODWORD(v20),
                  (int)v21,
                  1.0,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31,
                  v17,
                  v18,
                  v32,
                  1.0,
                  0);
        }
        v44 = 0xFFFFFFFF; /*0x512e7b*/
        PlaySpecialIdleOnControllerManager(v22, "SpecialIdle_HitEffect");// HitEffect visual effect starts SpecialIdle_HitEffect on the effect object's controller manager through sub_570C00. /*0x512e83*/
        goto LABEL_10; /*0x512e83*/
      }
      if ( *(_DWORD *)v35 ) /*0x512ed5*/
      {
        if ( OB_CompactString_Length_010201A0((void *)(*(_DWORD *)v35 + 0x18)) ) /*0x512eda*/
        {
          *(float *)&v24 = COERCE_FLOAT(FormHeapAlloc(0x38u)); /*0x512eea*/
          v39 = (int)v24; /*0x512eef*/
          v44 = 1; /*0x512ef5*/
          if ( *(float *)&v24 == 0.0 ) /*0x512efd*/
          {
            v22 = 0; /*0x512f23*/
          }
          else
          {
            v34 = v37; /*0x512f11*/
            v25 = (*(int (__usercall **)@<eax>(double@<st0>, double@<st1>))(*(_DWORD *)(*(_DWORD *)v35 + 0x18) + 0x14))( /*0x512f14*/
                    a2,
                    st6_0);
            v22 = MagicModelHitEffect_constr_args2(v24, (TESObjectREFR *)v10, v25, v34); /*0x512f1f*/
          }
          v44 = 0xFFFFFFFF; /*0x512f27*/
          if ( v22 ) /*0x512f2f*/
          {
            if ( (*(unsigned __int8 (__usercall **)@<al>(void *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v22 + 0x68))( /*0x512f38*/
                   v22,
                   a2,
                   st6_0) )
            {
LABEL_10:
              ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v22); /*0x512e88*/
              if ( MEMORY[0xB361AC] ) /*0x512e93*/
              {
                if ( TESObjectREFR_GetName((TESObjectREFR *)v10) ) /*0x512ea2*/
                {
                  Name = TESObjectREFR_GetName((TESObjectREFR *)v10); /*0x512ead*/
                  Interface_ConsolePrint("Visual effect has been applied to %s", Name); /*0x512eb8*/
                }
                else
                {
                  Interface_ConsolePrint("Visual effect has been applied to reference"); /*0x512eca*/
                }
              }
              return; /*0x512ec0*/
            }
            (**(void (__thiscall ***)(void *, int))v22)(v22, 1); /*0x512f4a*/
          }
        }
      }
      if ( MEMORY[0xB361AC] ) /*0x512f4c*/
      {
        if ( TESObjectREFR_GetName((TESObjectREFR *)v10) ) /*0x512f57*/
        {
          v26 = TESObjectREFR_GetName((TESObjectREFR *)v10); /*0x512f62*/
          Interface_ConsolePrint("Visual effect initialization failed for %s", v26); /*0x512f6d*/
        }
        else
        {
          Interface_ConsolePrint("Visual effect initialization failed for reference"); /*0x512f7c*/
        }
      }
    }
  }
}
