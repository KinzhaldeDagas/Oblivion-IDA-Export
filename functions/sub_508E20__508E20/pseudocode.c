void __usercall sub_508E20(
        int ebx0@<ebx>,
        double st0_0@<st7>,
        double st3_0@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st6>,
        double a8@<st0>,
        ParamInfo *a1,
        UInt8 *a10,
        TESObjectREFR *a11,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a3)
{
  double v16; // st2
  TESObjectCELL *ParentCell; // eax
  int *v18; // edx
  int v19; // edx
  float v20; // [esp+0h] [ebp-38h]
  TESObjectCELL *v21; // [esp+4h] [ebp-34h]
  TESObjectCELL *v22; // [esp+Ch] [ebp-2Ch] BYREF
  UInt16 v23[2]; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h] BYREF
  int a2; // [esp+18h] [ebp-20h] BYREF
  float v26; // [esp+1Ch] [ebp-1Ch] BYREF
  void (__thiscall *v27)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // [esp+20h] [ebp-18h]
  NiAVObject *(__thiscall *v28)(NiAVObject *, const char *); // [esp+24h] [ebp-14h]
  void *(__thiscall *v29)(NiAVObject *); // [esp+28h] [ebp-10h]
  int v30; // [esp+2Ch] [ebp-Ch]
  int v31; // [esp+30h] [ebp-8h]
  float v32; // [esp+34h] [ebp-4h]

  *(float *)v23 = 0.0;
  *(float *)&v24 = 0.0;
  *(float *)&a2 = 0.0;
  v26 = 0.0;
  v22 = 0;
  if ( Script_ExtractArgs(a1, a10, a3, a11, a12, a13, l, v23, &v24, &a2, &v26, &v22) )
  {
    v27 = *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v23;
    v28 = (NiAVObject *(__thiscall *)(NiAVObject *, const char *))v24;
    v29 = (void *(__thiscall *)(NiAVObject *))a2;
    *(float *)&v30 = 0.0;
    *(float *)&v31 = 0.0;
    v16 = v26;
    v32 = v26;
    ParentCell = TESObjectREFR_GetParentCell(a11);
    if ( v22 != ParentCell )
    {
      v18 = (int *)TESDataHandler_g_PlayerRef;
      if ( a11 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        if ( v22 )
        {
          sub_66EAF0(v18, a8, a4, a5, a6, st0_0, st3_0, a7, v16, v27, v28, v29, v30, v31, SLODWORD(v32), v22, 1);
          sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, a8, v19, (PlayerCharacter *)a11);
          return;
        }
        goto LABEL_13;
      }
      TESObjectREFR_SetPosition(a11, *(float *)&v27, *(float *)&v28, *(float *)&v29);
      if ( v22 && TESObjectCELL_IsProcessLevel_LowHigh(v22, 0) )
      {
        sub_4D8A10(v32);
        a8 = 0.0;
      }
      else
      {
        if ( a11 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        {
LABEL_12:
          sub_4DD4B0(ebx0, a5, a6, a8, (Actor *)a11, v21, 0);
LABEL_13:
          sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, a8, (int)v18, (PlayerCharacter *)a11);
          return;
        }
        a8 = flt_A32048;
      }
      v20 = a8;
      sub_4D89D0(v20);
      goto LABEL_12;
    }
  }
}
