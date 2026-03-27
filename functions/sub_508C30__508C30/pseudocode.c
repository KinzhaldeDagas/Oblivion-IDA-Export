void __usercall sub_508C30(
        double st0_0@<st7>,
        double st3_0@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st6>,
        double a7@<st0>,
        ParamInfo *a1,
        UInt8 *a9,
        TESObjectREFR *a4,
        TESObjectREFR *a11,
        Script *a12,
        ScriptEventList *l,
        int a14,
        UInt32 *a3)
{
  signed int v17; // edi
  double v18; // st2
  int v19; // ebx
  TESForm *CellAtCellCoord; // esi
  int v21; // edx
  float v22; // [esp+0h] [ebp-4Ch]
  TESWorldSpace *v23; // [esp+10h] [ebp-3Ch]
  TESWorldSpace *v24; // [esp+18h] [ebp-34h]
  int v25; // [esp+1Ch] [ebp-30h] BYREF
  int v26; // [esp+20h] [ebp-2Ch] BYREF
  int a2; // [esp+24h] [ebp-28h] BYREF
  UInt16 v28[2]; // [esp+28h] [ebp-24h] BYREF
  int v29; // [esp+2Ch] [ebp-20h] BYREF
  void (__thiscall *v30)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // [esp+30h] [ebp-1Ch]
  NiAVObject *(__thiscall *v31)(NiAVObject *, const char *); // [esp+34h] [ebp-18h]
  void *(__thiscall *v32)(NiAVObject *); // [esp+38h] [ebp-14h]
  int v33; // [esp+3Ch] [ebp-10h]
  int v34; // [esp+40h] [ebp-Ch]
  int v35; // [esp+44h] [ebp-8h]

  *(float *)v28 = 0.0;
  *(float *)&a2 = 0.0;
  *(float *)&v26 = 0.0;
  *(float *)&v29 = 0.0;
  *(float *)&v25 = 0.0;
  if ( Script_ExtractArgs(a1, a9, a3, a4, a11, a12, l, v28, &a2, &v26, &v29, &v25)
    && (a4 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
     || !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0)) )
  {
    v30 = (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))a2;
    v31 = (NiAVObject *(__thiscall *)(NiAVObject *, const char *))v26;
    v32 = (void *(__thiscall *)(NiAVObject *))v25;
    *(float *)&v33 = 0.0;
    *(float *)&v34 = 0.0;
    v35 = *(int *)v28;
    v17 = (int)*(float *)&a2 >> 0xC;
    v18 = *(float *)&v26;
    v29 = (int)*(float *)&v26;
    v19 = v29 >> 0xC;
    CellAtCellCoord = (TESForm *)TESWorldSpace::GetCellAtCellCoord(v24, v17, v29 >> 0xC);
    if ( a4 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( dword_B35B90 )
        sub_4BE5A0((_DWORD *)dword_B35B90);
      if ( dword_B35B8C )
        sub_4BD980((_DWORD *)dword_B35B8C);
      if ( CellAtCellCoord || (CellAtCellCoord = sub_4F1630(v24, st5_0, a5, a7, v17, v19)) != 0 )
        sub_66EAF0(
          (int *)TESDataHandler_g_PlayerRef,
          a7,
          st4_0,
          st5_0,
          a5,
          st0_0,
          st3_0,
          a6,
          v18,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          (TESObjectCELL *)CellAtCellCoord,
          1);
      goto LABEL_19;
    }
    TESObjectREFR_SetPosition(a4, *(float *)&v30, *(float *)&v31, *(float *)&v32);
    if ( CellAtCellCoord && TESObjectCELL_IsProcessLevel_LowHigh((TESObjectCELL *)CellAtCellCoord, 0) )
    {
      sub_4D8A10(*(float *)&v35);
      a7 = 0.0;
    }
    else
    {
      if ( a4 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
LABEL_18:
        sub_4DD4B0(v19, st5_0, a5, a7, (Actor *)a4, (TESObjectCELL *)CellAtCellCoord, v23);
LABEL_19:
        sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, a7, v21, (PlayerCharacter *)a4);
        return;
      }
      a7 = flt_A32048;
    }
    v22 = a7;
    sub_4D89D0(v22);
    goto LABEL_18;
  }
}
