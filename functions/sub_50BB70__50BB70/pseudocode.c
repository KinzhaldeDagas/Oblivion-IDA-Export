void __usercall sub_50BB70(
        double st0_0@<st7>,
        double a2@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st6>,
        double a7@<st5>,
        ParamInfo *a1,
        UInt8 *a9,
        TESObjectREFR *a4,
        TESObjectREFR *a11,
        Script *a12,
        ScriptEventList *l,
        int a14,
        UInt32 *a3)
{
  int *v15; // ecx
  TESObjectCELL *ParentCell; // eax
  int v17; // eax
  TESForm *v18; // eax
  _DWORD *v19; // esi
  double v20; // st7
  PlayerCharacter *v21; // edx
  double v22; // st7
  _BYTE *v23; // eax
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraData *p_super; // esi
  BSExtraDataVtbl *v26; // esi
  void *v27; // eax
  void *v28; // eax
  int v29; // edx
  UInt16 v30[2]; // [esp+8h] [ebp-3Ch] BYREF
  int v31; // [esp+Ch] [ebp-38h] BYREF
  int v32; // [esp+10h] [ebp-34h]
  float v33; // [esp+14h] [ebp-30h]
  float v34[3]; // [esp+18h] [ebp-2Ch] BYREF
  int v35[5]; // [esp+24h] [ebp-20h] BYREF
  unsigned int v36; // [esp+40h] [ebp-4h]

  *(_DWORD *)v30 = 0;
  v31 = 0;
  if ( Script_ExtractArgs(a1, a9, a3, a4, a11, a12, l, v30, &v31) )
  {
    v15 = *(int **)v30;
    if ( v31 )
    {
      *(_BYTE *)(*(_DWORD *)v30 + 0x34) |= 8u;
      (*(void (__thiscall **)(int *, int))(*v15 + 0x40))(v15, 4);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      if ( ParentCell )
      {
        TESObjectCELL_GetOwner((ExtraDataList *)ParentCell);
        if ( v17 == *(_DWORD *)v30 )
        {
          sub_675D50((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
          LOBYTE(v32) = sub_67F0A0();
          sub_67F0B0(1);
          LOBYTE(v33) = sub_67F0C0();
          sub_67F0D0(1);
          v18 = TESForm_LookupByFormID(0x3Cu);
          v19 = OblivionDynamicCast(
                  v18,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESWorldSpace `RTTI Type Descriptor',
                  0);
          sub_68A9F0(v35);
          v20 = flt_A32048;
          v21 = TESDataHandler_g_PlayerRef;
          v34[0] = v20;
          v34[1] = v20;
          v34[2] = v20;
          v36 = 0;
          v22 = sub_68B030(v35, v20, v21, v34, 0, v19);
          sub_67F0B0(v32);
          sub_67F0D0(SLOBYTE(v33));
          v23 = (_BYTE *)sub_68A890((char *)v35, 0, 0);
          if ( v23 )
          {
            TeleportExtraData = GetTeleportExtraData(v23);
            p_super = &TeleportExtraData->super;
            if ( TeleportExtraData )
            {
              if ( sub_42B410(&TeleportExtraData->super) )
              {
                v26 = sub_42B410(p_super);
                v27 = (void *)(*((int (__thiscall **)(BSExtraDataVtbl *))v26->Destructor + 0x5C))(v26);
                v28 = OblivionDynamicCast(
                        v27,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESObjectDOOR `RTTI Type Descriptor',
                        0);
                if ( v28 )
                  sub_4B7B40((int)v28, st0_0, a2, st4_0, st5_0, a5, v22, a6, a7, v26);
              }
            }
          }
          v36 = 0xFFFFFFFF;
          sub_68AA10(v35);
        }
      }
    }
    else
    {
      v29 = **(_DWORD **)v30;
      *(_BYTE *)(*(_DWORD *)v30 + 0x34) &= ~8u;
      (*(void (__thiscall **)(int *, int))(v29 + 0x40))(v15, 4);
    }
  }
}
