char __userpurge sub_5687D0@<al>(TESPackage *a1@<ecx>, int a2@<ebx>, double a3@<st0>, TESObjectREFR *a4)
{
  TESObjectREFR *v4; // edi
  int v5; // eax
  int v6; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v8; // ebp
  TESObjectCELL *v9; // eax
  TESObjectCELL *v10; // ebx
  double v11; // st7
  int v12; // ebp
  float *v13; // eax
  TESObjectREFRVtbl *v14; // ecx
  float *v15; // eax
  bool v17; // al
  TESObjectREFRVtbl *vtbl; // edx
  TESForm *v19; // eax
  double v20; // st7
  bool v21; // bl
  int v22; // eax
  TESObjectREFRVtbl *v23; // ecx
  float *v24; // eax
  __int128 v25; // [esp+0h] [ebp-180h]
  float v26; // [esp+4h] [ebp-17Ch]
  char v28; // [esp+1Fh] [ebp-161h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-160h]
  int v30; // [esp+20h] [ebp-160h]
  int v32; // [esp+28h] [ebp-158h] BYREF
  float v33; // [esp+2Ch] [ebp-154h]
  float v34; // [esp+30h] [ebp-150h]
  float v35[3]; // [esp+34h] [ebp-14Ch] BYREF
  float v36; // [esp+40h] [ebp-140h]
  float v37[3]; // [esp+44h] [ebp-13Ch] BYREF
  CHAR OutputString[300]; // [esp+50h] [ebp-130h] BYREF

  if ( !a4 || !sub_5EAE10(a4) )
    return 0;
  v4 = (TESObjectREFR *)sub_5EAE10(a4);
  v5 = (int)v4->vtbl->GetPos(v4);
  v32 = *(int *)v5;
  v33 = *(float *)(v5 + 4);
  v34 = *(float *)(v5 + 8);
  if ( GetTeleportExtraData(v4) )
  {
    sub_4D76F0(v4);
    v32 = *(int *)v6;
    v33 = *(float *)(v6 + 4);
    v34 = *(float *)(v6 + 8);
  }
  WorldSpace = TESObjectREFR_GetWorldSpace(v4);
  ParentCell = TESObjectREFR_GetParentCell(v4);
  v8 = ParentCell;
  if ( ParentCell )
  {
    if ( !TESObjectCELL_IsInterior(ParentCell) )
      v8 = 0;
  }
  v36 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace(a4));
  v9 = TESObjectREFR_GetParentCell(a4);
  v10 = v9;
  if ( v9 && TESObjectCELL_IsInterior(v9) )
  {
    if ( v10 == v8 )
      goto LABEL_12;
    return 0;
  }
  if ( v8 || (TESWorldSpace *)LODWORD(v36) != WorldSpace )
    return 0;
LABEL_12:
  v11 = sub_5677B0(a1, a3, a4, 2);
  v12 = Double_To_SInt32(v11);
  v30 = v12;
  v28 = 0;
  v13 = (float *)((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl->GetPos)(a4, a2);
  v35[1] = v33 - *v13;
  v35[2] = v34 - v13[1];
  v36 = v35[0] - v13[2];
  if ( sub_4D74B0(v4)
    && (v14 = a4[1].vtbl) != 0
    && (*((int (__thiscall **)(TESObjectREFRVtbl *))v14->super.super.InitializeComponent + 0xE0))(v14) )
  {
    if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a4[1].vtbl->super.super.InitializeComponent + 2))(a4[1].vtbl) )
    {
      v15 = (float *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a4[1].vtbl->super.super.InitializeComponent + 0xE0))(a4[1].vtbl);
      v33 = *v15;
      v34 = v15[1];
      v35[0] = v15[2];
    }
    v12 = 0xA;
  }
  else
  {
    v17 = v4->vtbl->IsActor(v4);
    vtbl = v4->vtbl;
    if ( v17 )
    {
      if ( vtbl->GetSleepState(v4) == kSitSleep_Sleeping )
      {
        v12 = 0x5A;
      }
      else
      {
        if ( a4->vtbl->GetSleepState(a4) != kSitSleep_Sitting )
        {
          if ( (double)(int)a1 <= *(float *)&SrcStr )
          {
            v19 = v4->vtbl->GetBaseForm(v4);
            v20 = sub_46D5C0(v19);
            *(float *)&v32 = COERCE_FLOAT(Double_To_SInt32(v20));
            v12 = Double_To_SInt32((double)v32 + dbl_A46E48);
          }
          goto LABEL_31;
        }
        v12 = 0xC8;
      }
    }
    else
    {
      if ( vtbl->GetBaseForm(v4) != (TESForm *)TESDataHandler_g_XMarkerHeading
        && v4->vtbl->GetBaseForm(v4) != TESDataHandler_g_XMarker )
      {
        goto LABEL_31;
      }
      v12 = 0x14;
    }
  }
  BYTE2(v30) = 1;
LABEL_31:
  *(float *)&v32 = fabs(v36);
  if ( flt_B3A470 > (double)*(float *)&v32 )
    v36 = 0.0;
  v21 = 0;
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) )
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].IsMobileObject)(a4) )
    {
      v22 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].IsMobileObject)(a4);
      v21 = sub_6163A0(v22, (char)v4);
    }
  }
  v26 = (float)v30;
  if ( sub_684B30((int)a4, (int)&v32, v26, 1) && !v21
    || sub_4D74B0(v4)
    && (v23 = a4[1].vtbl) != 0
    && (*((int (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0xE0))(v23)
    && ((v24 = a4->vtbl->GetPos(a4),
         v37[0] = *(float *)&v32 - *v24,
         v37[1] = v33 - v24[1],
         v37[2] = v34 - v24[2],
         sub_404C90(v37) < fCostant_100)
     && a4->vtbl->GetSleepState(a4) == kSitSleep_Sitting
     || a4->vtbl->GetSleepState(a4) == kSitSleep_Sleeping) )
  {
    v28 = 1;
  }
  if ( sub_579440() == a4 )
  {
    *(double *)((char *)&v25 + 4) = sub_404C90(v35);
    LODWORD(v25) = v12;
    _sprintf(OutputString, "radius %.02f distance %.02f", *(double *)&v25, *((double *)&v25 + 1));
    OutputDebugStringA(OutputString);
  }
  return v28;
}
