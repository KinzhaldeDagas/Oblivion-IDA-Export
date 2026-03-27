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
  TESObjectREFR *v19; // eax
  _DWORD *v20; // eax
  NiTMap_TESCELL *v21; // ecx
  int ProcessLevel; // eax

  v12 = a2;
  if ( a2 )
  {
    v13 = a6;
    if ( a6 || a7 )
    {
      if ( sub_5E12E0(a2) )
        a11 = 1;
      if ( v13 )
      {
        if ( !TESObjectCELL_IsInterior(v13) )
        {
          v13 = 0;
          a6 = 0;
        }
      }
      sub_49F470(&stru_B3C000);
      a2 = 0;
      NiTMap_GetAt(&a1[2].vtbl, (int)v12, &a2);
      v14 = (char *)a2;
      if ( a2
        || (NiTMap_GetAt(&a1[1].vtbl, (int)v12, &a2), (v14 = (char *)a2) != 0)
        || (NiTMap_GetAt(&a1[3].vtbl, (int)v12, &a2), (v14 = (char *)a2) != 0) )
      {
        a4 = flt_A31E2C;
        if ( sub_47D810((float *)v14 + 5, (float *)&a8, flt_A31E2C)
          && *((TESObjectCELL **)v14 + 3) == v13
          && *((TESObjectREFR **)v14 + 4) == a7 )
        {
          goto LABEL_37;
        }
        sub_6826D0(a1, v12);
      }
      v15 = (char *)FormHeapAlloc(0x28u);
      if ( v15 )
        v14 = sub_682580(v15);
      else
        v14 = 0;
      v16 = a7;
      *((_DWORD *)v14 + 3) = v13;
      *((_DWORD *)v14 + 4) = v16;
      *((_DWORD *)v14 + 5) = a8;
      *((_DWORD *)v14 + 6) = a9;
      *((_DWORD *)v14 + 7) = a10;
      *(_DWORD *)v14 = v12;
      *((_DWORD *)v14 + 1) = sub_6830B0(st5_0, a3, v12);
      sub_4D8AF0((TESObjectCELL **)v12);
      a2 = v17;
      if ( a6 && TESObjectCELL_IsInterior(a6) )
      {
        v18 = (TESObjectREFR *)sub_4CBBB0(a6, (float *)&a8);
        if ( !v18 )
        {
          v18 = (TESObjectREFR *)a6;
          goto LABEL_26;
        }
      }
      else
      {
        if ( !a7 )
          goto LABEL_34;
        v18 = (TESObjectREFR *)sub_4F0600(a7, (float *)&a8);
        if ( !v18 )
        {
          v18 = a7;
LABEL_26:
          if ( !v18 )
            goto LABEL_34;
        }
      }
      if ( a2 == v18 )
      {
        if ( !*((_DWORD *)v14 + 2) )
        {
          v19 = (TESObjectREFR *)FormHeapAlloc(0x14u);
          a6 = (TESObjectCELL *)v19;
          if ( v19 )
            v20 = sub_68A9F0(v19);
          else
            v20 = 0;
          *((_DWORD *)v14 + 2) = v20;
        }
        sub_689A00(*((int **)v14 + 2));
        sub_68A280(*((_DWORD **)v14 + 2), &a8);
        sub_689DC0(*((char **)v14 + 2), *((_DWORD **)v14 + 1));
        *((_DWORD *)v14 + 8) = 2;
        v21 = a1 + 3;
LABEL_36:
        NiTMap_SetAt(v21, (int)v12, (int)v14);
LABEL_37:
        if ( !a11 || *((_DWORD *)v14 + 8) == 2 )
        {
          if ( !a1[4].vtbl )
          {
            if ( *((_DWORD *)v14 + 8) == 2 )
            {
              sub_6829C0(a1);
            }
            else
            {
              a1[4].vtbl = v14;
              sub_682500(a1, (int)v14);
            }
          }
        }
        else
        {
          if ( a1[4].vtbl )
            sub_683490((LONG *)a1);
          sub_682450(a4, (int)v14);
          if ( *((_DWORD *)v14 + 8) == 2 )
          {
            NiTMap_RemoveAt(&a1[1].vtbl, (int)v12);
            NiTMap_RemoveAt(&a1[2].vtbl, (int)v12);
            NiTMap_SetAt(&a1[3].vtbl, (int)v12, (int)v14);
          }
        }
        j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
        return;
      }
LABEL_34:
      ProcessLevel = Actor::GetProcessLevel((Actor *)v12);
      v21 = a1 + 1;
      if ( ProcessLevel )
        v21 = a1 + 2;
      goto LABEL_36;
    }
  }
}
