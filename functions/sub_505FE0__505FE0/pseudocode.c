void __usercall sub_505FE0(
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
  TESObjectREFR *v12; // edi
  TESObjectCELL *ParentCell; // eax
  float *v14; // eax
  volatile LONG *v15; // esi
  unsigned __int8 (__usercall *v16)@<al>(volatile LONG *@<ecx>, double@<st0>, double@<st1>); // eax
  char *Name; // eax
  char *v18; // eax
  float v19; // [esp+10h] [ebp-18h] BYREF
  UInt16 v20[2]; // [esp+14h] [ebp-14h] BYREF
  float *v21; // [esp+18h] [ebp-10h]
  unsigned int v22; // [esp+24h] [ebp-4h]

  v12 = a5;
  v19 = flt_A30634;
  *(_DWORD *)v20 = 0;
  if ( Script_ExtractArgs(a1, a4, a3, a5, a6, a7, l, v20, &v19) )
  {
    if ( !a5 )
      v12 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    ParentCell = TESObjectREFR_GetParentCell(v12);
    if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
    {
      if ( v12->vtbl->GetNiNode(v12) )
      {
        v14 = (float *)FormHeapAlloc(0x4Cu);
        v21 = v14;
        v22 = 0;
        if ( v14 )
          v15 = (volatile LONG *)MagicShaderHitEffect_constr_args2(v14, (int)v12, *(int *)v20, v19);
        else
          v15 = 0;
        v16 = *(unsigned __int8 (__usercall **)@<al>(volatile LONG *@<ecx>, double@<st0>, double@<st1>))(*v15 + 0x68);
        v22 = 0xFFFFFFFF;
        if ( v16(v15, a2, st6_0) )
        {
          sub_678D30((int *)&ActorProcessManager_ptr, v15);
          if ( IsConsoleMode )
          {
            if ( TESObjectREFR_GetName(v12) )
            {
              Name = TESObjectREFR_GetName(v12);
              Interface_ConsolePrint("Shader effect has been applied to %s", Name);
            }
            else
            {
              Interface_ConsolePrint("Shader effect has been applied to reference");
            }
          }
        }
        else
        {
          (**(void (__thiscall ***)(volatile LONG *, int))v15)(v15, 1);
          if ( IsConsoleMode )
          {
            if ( TESObjectREFR_GetName(v12) )
            {
              v18 = TESObjectREFR_GetName(v12);
              Interface_ConsolePrint("Shader effect initialization failed for %s", v18);
            }
            else
            {
              Interface_ConsolePrint("Shader effect initialization failed for reference");
            }
          }
        }
      }
    }
  }
}
