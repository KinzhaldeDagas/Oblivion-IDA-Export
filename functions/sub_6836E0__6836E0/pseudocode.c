// Verified: path request/cache builder resolves a containing TESSubSpace candidate by interior cell list or WorldSpace +0x60 coordinate lookup, compares candidate identity with the current choice, and rebuilds the path request when it changes.
void __userpurge sub_6836E0(
        NiTMap_TESCELL *a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a2,
        TESObjectCELL *a6,
        TESObjectREFR *a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  TESObjectREFR *v12; // edi
  TESObjectCELL *v13; // ebx
  char *v14; // esi
  char *v15; // eax
  TESObjectREFR *v16; // eax
  TESObjectREFR *v17; // eax
  TESObjectREFR *v18; // eax
  TESObjectCELL *v19; // eax
  float *v20; // eax
  NiTMap_TESCELL *v21; // ecx
  int ProcessLevel; // eax

  v12 = a2; /*0x683706*/
  if ( a2 ) /*0x68370c*/
  {
    v13 = a6; /*0x683712*/
    if ( a6 || a7 ) /*0x68371e*/
    {
      if ( sub_5E12E0(a2) ) /*0x683726*/
        a11 = 1; /*0x68372f*/
      if ( v13 ) /*0x683736*/
      {
        if ( !TESObjectCELL_IsInterior(v13) ) /*0x68373a*/
        {
          v13 = 0; /*0x683743*/
          a6 = 0; /*0x683745*/
        }
      }
      sub_49F470((struct _RTL_CRITICAL_SECTION *)&qword_B3BB2C[0x135]); /*0x68374e*/
      a2 = 0; /*0x68375c*/
      NiTMap_GetAt(&a1[2].vtbl, (int)v12, &a2); /*0x683764*/
      v14 = (char *)a2; /*0x683769*/
      if ( a2 /*0x68379b*/
        || (NiTMap_GetAt(&a1[1].vtbl, (int)v12, &a2), (v14 = (char *)a2) != 0)
        || (NiTMap_GetAt(&a1[3].vtbl, (int)v12, &a2), (v14 = (char *)a2) != 0) )
      {
        a4 = flt_A31E2C; /*0x68379d*/
        if ( sub_47D810((float *)v14 + 5, (float *)&a8, flt_A31E2C) /*0x6837c8*/
          && *((TESObjectCELL **)v14 + 3) == v13
          && *((TESObjectREFR **)v14 + 4) == a7 )
        {
          goto LABEL_37; /*0x6837c8*/
        }
        sub_6826D0(a1, v12); /*0x6837d1*/
      }
      v15 = (char *)FormHeapAlloc(0x28u); /*0x6837d8*/
      if ( v15 ) /*0x6837e2*/
        v14 = sub_682580(v15); /*0x6837eb*/
      else
        v14 = 0; /*0x6837ef*/
      v16 = a7; /*0x6837f1*/
      *((_DWORD *)v14 + 3) = v13; /*0x6837f5*/
      *((_DWORD *)v14 + 4) = v16; /*0x6837f8*/
      *((_DWORD *)v14 + 5) = a8; /*0x6837ff*/
      *((_DWORD *)v14 + 6) = a9; /*0x683806*/
      *((_DWORD *)v14 + 7) = a10; /*0x68380d*/
      *(_DWORD *)v14 = v12; /*0x683813*/
      *((_DWORD *)v14 + 1) = sub_6830B0(st5_0, a3, v12); /*0x68381c*/
      sub_4D8AF0((TESObjectCELL **)v12); /*0x68381f*/
      a2 = v17; /*0x68382a*/
      if ( a6 && TESObjectCELL_IsInterior(a6) ) /*0x683830*/
      {
        v18 = (TESObjectREFR *)TESObjectCELL_FindSmallestSubSpaceContainingPosition(a6, (float *)&a8); /*0x683842*/
        if ( !v18 ) /*0x683849*/
        {
          v18 = (TESObjectREFR *)a6; /*0x68384b*/
          goto LABEL_26; /*0x68384f*/
        }
      }
      else
      {
        if ( !a7 ) /*0x683857*/
          goto LABEL_34; /*0x683857*/
        v18 = (TESObjectREFR *)TESWorldSpace_FindSmallestSubSpaceContainingPosition(a7, (float *)&a8); /*0x68385e*/
        if ( !v18 ) /*0x683865*/
        {
          v18 = a7; /*0x683867*/
LABEL_26:
          if ( !v18 ) /*0x68386d*/
            goto LABEL_34; /*0x68386d*/
        }
      }
      if ( a2 == v18 ) /*0x683873*/
      {
        if ( !*((_DWORD *)v14 + 2) ) /*0x683875*/
        {
          v19 = (TESObjectCELL *)FormHeapAlloc(0x14u); /*0x68387d*/
          a6 = v19; /*0x683885*/
          if ( v19 ) /*0x683893*/
            v20 = sub_68A9F0((float *)v19); /*0x683897*/
          else
            v20 = 0; /*0x68389e*/
          *((_DWORD *)v14 + 2) = v20; /*0x6838a8*/
        }
        sub_689A00(*((int **)v14 + 2)); /*0x6838ae*/
        sub_68A280(*((_DWORD **)v14 + 2), &a8); /*0x6838bb*/
        sub_689DC0(*((char **)v14 + 2), *((TESObjectCELL ***)v14 + 1)); /*0x6838c7*/
        *((_DWORD *)v14 + 8) = 2; /*0x6838cc*/
        v21 = a1 + 3; /*0x6838d3*/
LABEL_36:
        NiTMap_SetAt(v21, (int)v12, (int)v14); /*0x6838e9*/
LABEL_37:
        if ( !a11 || *((_DWORD *)v14 + 8) == 2 ) /*0x6838ff*/
        {
          if ( !a1[4].vtbl ) /*0x683939*/
          {
            if ( *((_DWORD *)v14 + 8) == 2 ) /*0x683944*/
            {
              sub_6829C0(a1); /*0x683951*/
            }
            else
            {
              a1[4].vtbl = v14; /*0x683947*/
              sub_682500(a1, (int)v14); /*0x68394a*/
            }
          }
        }
        else
        {
          if ( a1[4].vtbl ) /*0x683901*/
            sub_683490((LONG *)a1); /*0x683909*/
          sub_682450(a4, (int)v14); /*0x683911*/
          if ( *((_DWORD *)v14 + 8) == 2 ) /*0x683919*/
          {
            NiTMap_RemoveAt(&a1[1].vtbl, (int)v12); /*0x68391f*/
            NiTMap_RemoveAt(&a1[2].vtbl, (int)v12); /*0x683928*/
            NiTMap_SetAt(&a1[3].vtbl, (int)v12, (int)v14); /*0x683932*/
          }
        }
        j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&qword_B3BB2C[0x135]); /*0x68395b*/
        return; /*0x68395b*/
      }
LABEL_34:
      ProcessLevel = Actor::GetProcessLevel((Actor *)v12); /*0x6838d8*/
      v21 = a1 + 1; /*0x6838e1*/
      if ( ProcessLevel ) /*0x6838e4*/
        v21 = a1 + 2; /*0x6838e6*/
      goto LABEL_36; /*0x6838e6*/
    }
  }
}
