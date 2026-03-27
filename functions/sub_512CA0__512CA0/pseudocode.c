void __usercall sub_512CA0(
        double st6_0@<st1>,
        double a2@<st0>,
        ParamInfo *a1,
        UInt8 *a4,
        TESChildCELL *a5,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  PlayerCharacter *v12; // esi
  TESObjectCELL *ParentCell; // eax
  float x; // ecx
  float z; // eax
  PlayerCharacterVtbl *vtbl; // edx
  float *v17; // eax
  const char *v18; // ecx
  float v19; // ebp
  UInt32 v20; // ebx
  TESObjectCELL *v21; // eax
  float v22; // edi
  TESObjectCELL *v23; // eax
  float *v24; // edi
  char *Name; // eax
  float *v26; // edi
  int v27; // eax
  char *v28; // eax
  int v29; // [esp+4h] [ebp-74h]
  const char *v30; // [esp+8h] [ebp-70h]
  float v31; // [esp+Ch] [ebp-6Ch]
  float v32; // [esp+10h] [ebp-68h]
  int v33; // [esp+14h] [ebp-64h]
  const char *v34; // [esp+20h] [ebp-58h]
  signed int v35; // [esp+24h] [ebp-54h]
  float v36; // [esp+28h] [ebp-50h]
  UInt16 v37[2]; // [esp+40h] [ebp-38h] BYREF
  float v38; // [esp+44h] [ebp-34h]
  float v39; // [esp+48h] [ebp-30h] BYREF
  int v40; // [esp+4Ch] [ebp-2Ch]
  int v41; // [esp+50h] [ebp-28h]
  float v42; // [esp+54h] [ebp-24h]
  int y_low; // [esp+58h] [ebp-20h]
  float v44; // [esp+5Ch] [ebp-1Ch]
  const char *v45; // [esp+68h] [ebp-10h]
  int v46; // [esp+74h] [ebp-4h]

  v12 = (PlayerCharacter *)a5;
  v39 = flt_A30634;
  *(_DWORD *)v37 = 0;
  if ( Script_ExtractArgs(a1, a4, a3, (TESObjectREFR *)a5, a6, a7, l, v37, &v39) )
  {
    if ( !a5 )
      v12 = TESDataHandler_g_PlayerRef;
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v12);
    if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
    {
      if ( !v12->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v12) )
      {
        x = v12->super.super.super.super.rot.x;
        z = v12->super.super.super.super.rot.z;
        y_low = SLODWORD(v12->super.super.super.super.rot.y);
        vtbl = v12->vtbl;
        v42 = x;
        v44 = z;
        v17 = (float *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))vtbl->super.super.super.GetPos)(
                         v12,
                         a2,
                         st6_0);
        v18 = *((const char **)v17 + 2);
        v19 = *v17;
        v38 = -v44;
        v20 = *((_DWORD *)v17 + 1);
        v45 = v18;
        *(float *)&v40 = cos(v38);
        v41 = v40;
        *(float *)&v40 = sin(v38);
        v42 = -*(float *)&v40;
        y_low = v41;
        v44 = 0.0;
        TESObjectREFR_GetParentCell((TESObjectREFR *)v12);
        v35 = sub_4C9BE0((TESObjectREFR *)v12);
        v21 = TESObjectREFR_GetParentCell((TESObjectREFR *)v12);
        *(float *)&v41 = COERCE_FLOAT(sub_441800(v21, v35, 3u));
        v22 = COERCE_FLOAT(FormHeapAlloc(0x20u));
        *(float *)&v40 = v22;
        v46 = 0;
        if ( v22 == 0.0 )
        {
          v24 = 0;
        }
        else
        {
          v34 = v45;
          v31 = v42;
          v32 = *(float *)&y_low;
          v33 = LODWORD(v44);
          v30 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v37 + 0x18) + 0x14))(*(_DWORD *)v37 + 0x18);
          v29 = v41;
          v23 = TESObjectREFR_GetParentCell((TESObjectREFR *)v12);
          v24 = sub_5713F0((void *)LODWORD(v22), (int)v23, 1.0, v29, v30, v31, v32, v33, v19, v20, v34, 1.0, 0);
        }
        v46 = 0xFFFFFFFF;
        sub_570C00(v24, "SpecialIdle_HitEffect");
        goto LABEL_10;
      }
      if ( *(_DWORD *)v37 )
      {
        if ( sub_449190(*(_DWORD *)v37 + 0x18) )
        {
          *(float *)&v26 = COERCE_FLOAT(FormHeapAlloc(0x38u));
          v41 = (int)v26;
          v46 = 1;
          if ( *(float *)&v26 == 0.0 )
          {
            v24 = 0;
          }
          else
          {
            v36 = v39;
            v27 = (*(int (__usercall **)@<eax>(double@<st0>, double@<st1>))(*(_DWORD *)(*(_DWORD *)v37 + 0x18) + 0x14))(
                    a2,
                    st6_0);
            v24 = (float *)MagicModelHitEffect_constr_args2(v26, (int)v12, v27, v36);
          }
          v46 = 0xFFFFFFFF;
          if ( v24 )
          {
            if ( (*(unsigned __int8 (__usercall **)@<al>(float *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v24 + 0x68))(
                   v24,
                   a2,
                   st6_0) )
            {
LABEL_10:
              sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v24);
              if ( IsConsoleMode )
              {
                if ( TESObjectREFR_GetName((TESObjectREFR *)v12) )
                {
                  Name = TESObjectREFR_GetName((TESObjectREFR *)v12);
                  Interface_ConsolePrint("Visual effect has been applied to %s", Name);
                }
                else
                {
                  Interface_ConsolePrint("Visual effect has been applied to reference");
                }
              }
              return;
            }
            (**(void (__thiscall ***)(float *, int))v24)(v24, 1);
          }
        }
      }
      if ( IsConsoleMode )
      {
        if ( TESObjectREFR_GetName((TESObjectREFR *)v12) )
        {
          v28 = TESObjectREFR_GetName((TESObjectREFR *)v12);
          Interface_ConsolePrint("Visual effect initialization failed for %s", v28);
        }
        else
        {
          Interface_ConsolePrint("Visual effect initialization failed for reference");
        }
      }
    }
  }
}
