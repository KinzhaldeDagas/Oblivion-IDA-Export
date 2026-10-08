void __usercall sub_508C30(
        double st3_0@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st6>,
        double a6@<st0>,
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
  int v16; // edi
  double v17; // st0
  int v18; // ebx
  TESObjectCELL *CellAtCellCoord; // esi
  float v20; // [esp+0h] [ebp-4Ch]
  TESObjectCELL **v21; // [esp+10h] [ebp-3Ch]
  TESWorldSpace *v22; // [esp+18h] [ebp-34h]
  int v23; // [esp+1Ch] [ebp-30h] BYREF
  int v24; // [esp+20h] [ebp-2Ch] BYREF
  int a2; // [esp+24h] [ebp-28h] BYREF
  UInt16 v26[2]; // [esp+28h] [ebp-24h] BYREF
  int v27; // [esp+2Ch] [ebp-20h] BYREF
  void (__thiscall *v28)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // [esp+30h] [ebp-1Ch]
  NiAVObject *(__thiscall *v29)(NiAVObject *, const char *); // [esp+34h] [ebp-18h]
  void *(__thiscall *v30)(NiAVObject *); // [esp+38h] [ebp-14h]
  int v31; // [esp+3Ch] [ebp-10h]
  int v32; // [esp+40h] [ebp-Ch]
  int radians; // [esp+44h] [ebp-8h]

  *(float *)v26 = 0.0; /*0x508c37*/
  *(float *)&a2 = 0.0; /*0x508c3f*/
  *(float *)&v24 = 0.0; /*0x508c44*/
  *(float *)&v27 = 0.0; /*0x508c49*/
  *(float *)&v23 = 0.0; /*0x508c85*/
  if ( Script_ExtractArgs(a1, a9, a3, a4, a11, a12, l, v26, &a2, &v24, &v27, &v23) /*0x508cb5*/
    && (a4 != (TESObjectREFR *)reference || !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0)) )
  {
    v28 = (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))a2; /*0x508cc3*/
    v29 = (NiAVObject *(__thiscall *)(NiAVObject *, const char *))v24; /*0x508ccb*/
    v30 = (void *(__thiscall *)(NiAVObject *))v23; /*0x508cd3*/
    *(float *)&v31 = 0.0; /*0x508cd9*/
    *(float *)&v32 = 0.0; /*0x508cdd*/
    radians = *(int *)v26; /*0x508ce5*/
    v16 = (int)*(float *)&a2 >> 0xC; /*0x508cf5*/
    v17 = *(float *)&v24; /*0x508cf8*/
    v27 = (int)*(float *)&v24; /*0x508cfc*/
    v18 = v27 >> 0xC; /*0x508d08*/
    CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v22, v16, v27 >> 0xC); /*0x508d18*/
    if ( a4 == (TESObjectREFR *)reference ) /*0x508d1a*/
    {
      if ( unk_B35B90 ) /*0x508d1c*/
        sub_4BE5A0((_DWORD *)unk_B35B90); /*0x508d26*/
      if ( g_DistantLODLoaderTasksByCell ) /*0x508d2b*/
        sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x508d35*/
      if ( CellAtCellCoord /*0x508d4d*/
        || (CellAtCellCoord = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord(v22, st5_0, st6_0, a6, v16, v18)) != 0 )
      {
        PlayerCharacter_ChangeCellAndPosition( /*0x508d8e*/
          (TESObjectREFR *)reference,
          a6,
          st4_0,
          st5_0,
          st6_0,
          v17,
          st3_0,
          a5,
          a7,
          v28,
          v29,
          v30,
          v31,
          v32,
          radians,
          CellAtCellCoord,
          1);
      }
      goto LABEL_19; /*0x508d93*/
    }
    TESObjectREFR_SetPosition(a4, *(float *)&v28, *(float *)&v29, *(float *)&v30); /*0x508db0*/
    if ( CellAtCellCoord && TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) ) /*0x508dc2*/
    {
      TESObjectREFR_SetRotationZ(a4, *(float *)&radians); /*0x508dd5*/
      a6 = 0.0; /*0x508dda*/
    }
    else
    {
      if ( a4 == (TESObjectREFR *)reference ) /*0x508de4*/
      {
LABEL_18:
        sub_4DD4B0(v18, st5_0, st6_0, a6, (Actor *)a4, CellAtCellCoord, v21); /*0x508df7*/
LABEL_19:
        sub_665260((TESObjectREFR *)reference, a6, (PlayerCharacter *)a4); /*0x508e06*/
        return; /*0x508e0d*/
      }
      a6 = flt_A32048; /*0x508de6*/
    }
    v20 = a6; /*0x508def*/
    TESObjectREFR_SetRotationX(a4, v20); /*0x508df2*/
    goto LABEL_18; /*0x508df2*/
  }
}
