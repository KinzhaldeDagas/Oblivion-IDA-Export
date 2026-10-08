double __usercall sub_5ED860@<st0>(
        TESObjectREFR *a1@<ecx>,
        float a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st2>,
        double a6@<st1>,
        double result@<st0>)
{
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // ecx
  char v9; // al
  int v10; // ecx
  TESObjectREFR *TravelHorse; // edi
  TESObjectCELL *v12; // ebx
  TESObjectCELL **v13; // ebp
  char *v14; // ecx
  TESObjectREFR *v15; // eax
  TESObjectREFRVtbl *vtbl; // edi
  int v17; // eax
  double v18; // st7
  TESPackage *v19; // ecx
  float *v20; // eax
  TESObjectREFRVtbl *v21; // ebx
  float *v22; // eax
  int v23; // [esp+0h] [ebp-3Ch]
  int v24; // [esp+4h] [ebp-38h]
  int radians; // [esp+8h] [ebp-34h]
  float v27; // [esp+14h] [ebp-28h] BYREF
  TESObjectREFRVtbl *v28; // [esp+18h] [ebp-24h]
  float v29[2]; // [esp+1Ch] [ebp-20h] BYREF

  if ( (a1->member.super.flags & 0x800) == 0 ) /*0x5ed86e*/
  {
    (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1[1].vtbl->super.super.InitializeComponent /*0x5ed87c*/
     + 8))(
      a1[1].vtbl,
      result,
      a6,
      a5);
    if ( TESObjectREFR_IsPersistent(a1) ) /*0x5ed880*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))a1[1].vtbl->super.super.InitializeComponent /*0x5ed894*/
       + 5))(
        a1[1].vtbl,
        a1,
        0);
    (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))a1[1].vtbl->super.super.InitializeComponent /*0x5ed8a1*/
     + 6))(
      a1[1].vtbl,
      a1,
      0);
    CopyFromBase = a1[1].vtbl->super.super.CopyFromBase; /*0x5ed8a6*/
    if ( CopyFromBase ) /*0x5ed8ab*/
    {
      if ( *((char *)CopyFromBase + 0x20) > 2 ) /*0x5ed8b5*/
      {
        result = sub_566DC0( /*0x5ed8c8*/
                   (TESPackage *)CopyFromBase,
                   kTerrainLODQuadRayDirectionZ,
                   a6,
                   a5,
                   (Actor *)a1,
                   0,
                   kTerrainLODQuadRayDirectionZ);
        if ( !v9 ) /*0x5ed8cf*/
        {
          v10 = *((_DWORD *)a1[1].vtbl->super.super.CopyFromBase + 7); /*0x5ed8db*/
          v27 = a2; /*0x5ed8de*/
          TravelHorse = 0; /*0x5ed8e3*/
          if ( (v10 & 0x800000) != 0 ) /*0x5ed8e8*/
          {
            if ( ExtraDataList::GetTravelHorse(&a1->member.baseExtraList) ) /*0x5ed8ef*/
              TravelHorse = ExtraDataList::GetTravelHorse(&a1->member.baseExtraList); /*0x5ed8ff*/
          }
          v12 = (TESObjectCELL *)sub_566A40((char **)a1[1].vtbl->super.super.CopyFromBase, (Actor *)a1); /*0x5ed90e*/
          v13 = (TESObjectCELL **)sub_566940((TESPackage *)a1[1].vtbl->super.super.CopyFromBase, (Actor *)a1); /*0x5ed91c*/
          sub_4DD4B0((int)v12, a5, a6, result, (Actor *)a1, v12, v13); /*0x5ed921*/
          result = flt_A32048; /*0x5ed926*/
          TESObjectREFR_SetRotationX(a1, flt_A32048); /*0x5ed934*/
          v14 = *((char **)a1[1].vtbl->super.super.CopyFromBase + 9); /*0x5ed93f*/
          if ( v14 && sub_569740(v14) == 1 ) /*0x5ed94e*/
          {
            if ( TESObjectCELL_IsInterior(v12) ) /*0x5ed952*/
            {
              v15 = sub_4CBB20(v12, 0x1C, 1); /*0x5ed965*/
              if ( v15 || (v15 = sub_4CBA50(v12)) != 0 ) /*0x5ed977*/
              {
                vtbl = a1->vtbl; /*0x5ed97f*/
                v17 = (int)v15->vtbl->GetPos(v15); /*0x5ed989*/
                v18 = ((double (__thiscall *)(TESObjectREFR *, int))vtbl[1].super.Unk_09)(a1, v17); /*0x5ed994*/
                return sub_5E6E00((Actor *)a1, radians, a6, v18); /*0x5ed99f*/
              }
            }
          }
          else
          {
            v19 = (TESPackage *)a1[1].vtbl->super.super.CopyFromBase; /*0x5ed9af*/
            v28 = a1->vtbl; /*0x5ed9b2*/
            v20 = sub_566B30(v19, v29, (Actor *)a1); /*0x5ed9b6*/
            ((void (__thiscall *)(TESObjectREFR *, float *))v28[1].super.Unk_09)(a1, v20); /*0x5ed9c8*/
            if ( TravelHorse ) /*0x5ed9cc*/
            {
              sub_4DD4B0((int)v12, a5, a6, result, (Actor *)TravelHorse, v12, v13); /*0x5ed9d1*/
              result = flt_A32048; /*0x5ed9d6*/
              TESObjectREFR_SetRotationX(TravelHorse, flt_A32048); /*0x5ed9e4*/
              v21 = TravelHorse->vtbl; /*0x5ed9ef*/
              v22 = sub_566B30((TESPackage *)a1[1].vtbl->super.super.CopyFromBase, &v27, (Actor *)a1); /*0x5ed9f7*/
              ((void (__thiscall *)(TESObjectREFR *, float *, int, int))v21[1].super.Unk_09)(TravelHorse, v22, v23, v24); /*0x5eda05*/
            }
          }
          a4 = a3; /*0x5eda08*/
        }
      }
    }
    return sub_5E6E00((Actor *)a1, a4, a6, result); /*0x5eda10*/
  }
  return result; /*0x5ed99b*/
}
