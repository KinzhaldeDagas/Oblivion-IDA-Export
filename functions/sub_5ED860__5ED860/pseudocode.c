double __usercall sub_5ED860@<st0>(
        int *a1@<ecx>,
        float a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st2>,
        double a6@<st1>,
        double result@<st0>)
{
  TESPackage *v8; // ecx
  char v9; // al
  int v10; // ecx
  TESObjectREFR *TravelHorse; // edi
  TESObjectCELL *v12; // ebx
  TESWorldSpace *v13; // ebp
  char *v14; // ecx
  TESObjectREFR *v15; // eax
  int v16; // edi
  int v17; // eax
  TESPackage *v18; // ecx
  int v19; // eax
  TESObjectREFRVtbl *vtbl; // ebx
  int v21; // eax
  int v22; // [esp+0h] [ebp-3Ch]
  int v23; // [esp+4h] [ebp-38h]
  int v24; // [esp+8h] [ebp-34h]
  float v26; // [esp+14h] [ebp-28h] BYREF
  int v27; // [esp+18h] [ebp-24h]
  _BYTE v28[8]; // [esp+1Ch] [ebp-20h] BYREF

  if ( (a1[2] & 0x800) == 0 )
  {
    (*(void (__usercall **)(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1[0x16] + 0x20))(a1[0x16], result, a6);
    if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)a1) )
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a1[0x16] + 0x14))(a1[0x16], a1, 0);
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a1[0x16] + 0x18))(a1[0x16], a1, 0);
    v8 = *(TESPackage **)(a1[0x16] + 8);
    if ( v8 )
    {
      if ( (char)v8->members.type > 2 )
      {
        result = sub_566DC0(v8, flt_A30634, a6, (Actor *)a1, 0, flt_A30634);
        if ( !v9 )
        {
          v10 = *(_DWORD *)(*(_DWORD *)(a1[0x16] + 8) + 0x1C);
          v26 = a2;
          TravelHorse = 0;
          if ( (v10 & 0x800000) != 0 )
          {
            if ( ExtraDataList::GetTravelHorse((ExtraDataList *)(a1 + 0x11)) )
              TravelHorse = ExtraDataList::GetTravelHorse((ExtraDataList *)(a1 + 0x11));
          }
          v12 = sub_566A40(*(char ***)(a1[0x16] + 8), (Actor *)a1);
          v13 = sub_566940(*(TESPackage **)(a1[0x16] + 8), (Actor *)a1);
          sub_4DD4B0((int)v12, a5, a6, result, (Actor *)a1, v12, v13);
          result = flt_A32048;
          sub_4D89D0(flt_A32048);
          v14 = *(char **)(*(_DWORD *)(a1[0x16] + 8) + 0x24);
          if ( v14 && sub_569740(v14) == 1 )
          {
            if ( TESObjectCELL_IsInterior(v12) )
            {
              v15 = sub_4CBB20(v12, 0x1C, 1);
              if ( v15 || (v15 = sub_4CBA50(v12)) != 0 )
              {
                v16 = *a1;
                v17 = (int)v15->vtbl->GetPos(v15);
                (*(void (__thiscall **)(int *, int))(v16 + 0x1CC))(a1, v17);
                sub_5E6E00((Actor *)a1, v24, a6);
                return result;
              }
            }
          }
          else
          {
            v18 = *(TESPackage **)(a1[0x16] + 8);
            v27 = *a1;
            v19 = sub_566B30(v18, (int)v28, (Actor *)a1);
            (*(void (__thiscall **)(int *, int))(v27 + 0x1CC))(a1, v19);
            if ( TravelHorse )
            {
              sub_4DD4B0((int)v12, a5, a6, result, (Actor *)TravelHorse, v12, v13);
              result = flt_A32048;
              sub_4D89D0(flt_A32048);
              vtbl = TravelHorse->vtbl;
              v21 = sub_566B30(*(TESPackage **)(a1[0x16] + 8), (int)&v26, (Actor *)a1);
              ((void (__thiscall *)(TESObjectREFR *, int, int, int))vtbl[1].super.Unk_09)(TravelHorse, v21, v22, v23);
            }
          }
          a4 = a3;
        }
      }
    }
    sub_5E6E00((Actor *)a1, a4, a6);
  }
  return result;
}
