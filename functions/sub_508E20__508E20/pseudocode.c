void __usercall sub_508E20(
        int ebx0@<ebx>,
        double st3_0@<st4>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st6>,
        double a7@<st0>,
        double a8@<st5>,
        ParamInfo *a1,
        UInt8 *a10,
        PlayerCharacter *a11,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a3)
{
  double v17; // st0
  TESObjectCELL *DwordAtOffset40; // eax
  float v19; // [esp+0h] [ebp-38h]
  TESObjectCELL *radians; // [esp+4h] [ebp-34h]
  TESObjectCELL *v21; // [esp+Ch] [ebp-2Ch] BYREF
  UInt16 v22[2]; // [esp+10h] [ebp-28h] BYREF
  int v23; // [esp+14h] [ebp-24h] BYREF
  int a2; // [esp+18h] [ebp-20h] BYREF
  float v25; // [esp+1Ch] [ebp-1Ch] BYREF
  void (__thiscall *v26)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // [esp+20h] [ebp-18h]
  NiAVObject *(__thiscall *v27)(NiAVObject *, const char *); // [esp+24h] [ebp-14h]
  void *(__thiscall *v28)(NiAVObject *); // [esp+28h] [ebp-10h]
  int v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+30h] [ebp-8h]
  float v31; // [esp+34h] [ebp-4h]

  *(float *)v22 = 0.0; /*0x508e2a*/
  *(float *)&v23 = 0.0; /*0x508e32*/
  *(float *)&a2 = 0.0; /*0x508e37*/
  v25 = 0.0; /*0x508e3f*/
  v21 = 0; /*0x508e72*/
  if ( Script_ExtractArgs(a1, a10, a3, (TESObjectREFR *)a11, a12, a13, l, v22, &v23, &a2, &v25, &v21) ) /*0x508e7a*/
  {
    v26 = *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v22; /*0x508e91*/
    v27 = (NiAVObject *(__thiscall *)(NiAVObject *, const char *))v23; /*0x508e99*/
    v28 = (void *(__thiscall *)(NiAVObject *))a2; /*0x508ea1*/
    *(float *)&v29 = 0.0; /*0x508ea7*/
    *(float *)&v30 = 0.0; /*0x508eab*/
    v17 = v25; /*0x508eaf*/
    v31 = v25; /*0x508eb3*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a11); /*0x508eb7*/
    if ( v21 != DwordAtOffset40 ) /*0x508ec2*/
    {
      if ( a11 == reference ) /*0x508ed0*/
      {
        if ( v21 ) /*0x508ed4*/
        {
          PlayerCharacter_ChangeCellAndPosition( /*0x508f11*/
            (TESObjectREFR *)reference,
            a7,
            st4_0,
            a4,
            a5,
            v17,
            st3_0,
            a6,
            a8,
            v26,
            v27,
            v28,
            v29,
            v30,
            SLODWORD(v31),
            v21,
            1);
          sub_665260((TESObjectREFR *)reference, a7, a11); /*0x508f1d*/
          return; /*0x508f28*/
        }
        goto LABEL_13; /*0x508ed4*/
      }
      TESObjectREFR_SetPosition((TESObjectREFR *)a11, *(float *)&v26, *(float *)&v27, *(float *)&v28); /*0x508f44*/
      if ( v21 && TESObjectCELL_IsProcessLevel_LowHigh(v21, 0) ) /*0x508f5a*/
      {
        TESObjectREFR_SetRotationZ((TESObjectREFR *)a11, v31); /*0x508f6d*/
        a7 = 0.0; /*0x508f72*/
      }
      else
      {
        if ( a11 == reference ) /*0x508f7c*/
        {
LABEL_12:
          sub_4DD4B0(ebx0, a4, a5, a7, (Actor *)a11, radians, 0); /*0x508f8f*/
LABEL_13:
          sub_665260((TESObjectREFR *)reference, a7, a11); /*0x508f9f*/
          return; /*0x508fa6*/
        }
        a7 = flt_A32048; /*0x508f7e*/
      }
      v19 = a7; /*0x508f87*/
      TESObjectREFR_SetRotationX((TESObjectREFR *)a11, v19); /*0x508f8a*/
      goto LABEL_12; /*0x508f8a*/
    }
  }
}
