void __usercall sub_622180(
        int a1@<ecx>,
        char a2@<bpl>,
        unsigned int *a3@<edi>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double a11@<st0>)
{
  void **v12; // ebx
  char *Name; // eax
  TESObjectREFR *v14; // ebp
  _BYTE *v15; // eax
  _DWORD *v16; // eax
  Actor *v17; // ebp
  TESObjectREFR *v18; // eax
  int v19; // edx
  int *v20; // eax
  unsigned int *v21; // eax
  _BYTE *v22; // eax
  int v23; // eax
  double (__thiscall ***v24)(_DWORD, _DWORD); // ebp
  int v25; // ebx
  char *v26; // eax
  TESObjectREFR *v27; // ebp
  _BYTE *v28; // eax
  Actor *v29; // ebp
  TESObjectREFR *v30; // eax
  signed int v31; // ebp
  int v32; // edx
  Actor *v33; // ecx
  _DWORD **v34; // ecx
  int v35; // eax
  void *v36; // eax
  _BYTE *v37; // edi
  Actor *v38; // ecx
  int v39; // edi
  int v40; // eax
  void *v41; // eax
  int *v42; // eax
  bool v43; // zf
  int *v44; // eax
  char v45; // [esp-8h] [ebp-30h]
  char v46; // [esp-8h] [ebp-30h]
  char v47; // [esp-4h] [ebp-2Ch]
  char v48; // [esp-4h] [ebp-2Ch]
  double v49; // [esp+14h] [ebp-14h]
  double v50; // [esp+14h] [ebp-14h]

  v12 = (void **)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xEC))(
                   *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                   1,
                   a11,
                   a10,
                   a9,
                   a8,
                   a7,
                   a6,
                   a5,
                   a4);
  if ( !sub_613880(a1, a2, (unsigned __int8)a3, a9) && *(_DWORD *)(a1 + 0x6C) != 7 )
  {
    sub_61FF40(a1, a8);
    if ( !v12 )
    {
      a3 = *(unsigned int **)(a1 + 0x70);
      if ( a3 == (unsigned int *)1 || a3 == (unsigned int *)2 || a3 == (unsigned int *)0xD )
      {
        if ( *(_DWORD *)(a1 + 0xA8) )
        {
          if ( *(_DWORD *)(a1 + 0x98) )
          {
            if ( byte_B3B908 )
            {
              Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
              Interface_ConsolePrint("%.20s is going to %s!", Name, "attempt to Yield");
            }
            a11 = flt_A30634;
            *(float *)(a1 + 0x188) = flt_A30634;
            v14 = *(TESObjectREFR **)(a1 + 0x3C);
            *(_DWORD *)(a1 + 0x70) = 5;
            v15 = (_BYTE *)sub_6135F0(a1);
            *(_DWORD *)(a1 + 0xC8) = sub_521450((TESObjectREFR *)g_idleAnimationMap, v14, v15);
            sub_612DE0(a1, (int)a3);
            v16 = (_DWORD *)FormHeapAlloc(0xCu);
            a3 = 0;
            if ( v16 )
              a3 = ContainerEntryExtraData_constr(v16, *(_DWORD *)(a1 + 0xA8), 0);
            v17 = *(Actor **)(a1 + 0x3C);
            v47 = *(_DWORD *)(a1 + 0xC8) != 0;
            v45 = *(_BYTE *)(a1 + 0x4D);
            v18 = (TESObjectREFR *)sub_6135F0(a1);
            sub_621B40((SInt32)a3, a10, a11, v17, *(float *)&a3, v18, 0, v45, v47);
            if ( a3 )
            {
              ContainerEntryExtraData_DestroyDataTable(a3, v19);
              FormHeapFree((unsigned int)a3);
            }
          }
        }
        if ( *(_DWORD *)(a1 + 0x6C) == 7 )
          return;
        if ( !*(_BYTE *)(a1 + 0x48) && sub_5E1CF0(*(void **)(a1 + 0x3C)) )
        {
          v20 = sub_5E0F50(*(void **)(a1 + 0x3C));
          if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v20 + 0x168))(v20, 1) )
          {
            v21 = (unsigned int *)sub_5E0A90(*(_DWORD ***)(a1 + 0x3C), 0xD);
            a3 = v21;
            if ( v21 )
            {
              v22 = OblivionDynamicCast(
                      (void *)v21[2],
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
              if ( !v22
                || v22[0x90] != 4
                || (v23 = *((_DWORD *)v22 + 0x19)) != 0
                && (v24 = (double (__thiscall ***)(_DWORD, _DWORD))(v23 + 0x24),
                    v49 = sub_4849C0((void **)a3),
                    a11 = (**v24)(v24, 0),
                    a11 <= v49) )
              {
                v25 = *(_DWORD *)(a1 + 0x70);
                if ( v25 != 5 )
                {
                  if ( byte_B3B908 )
                  {
                    v26 = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
                    Interface_ConsolePrint("%.20s is going to %s!", v26, "attempt to Yield");
                  }
                  a11 = flt_A30634;
                  *(float *)(a1 + 0x188) = flt_A30634;
                }
                v27 = *(TESObjectREFR **)(a1 + 0x3C);
                *(_DWORD *)(a1 + 0x70) = 5;
                v28 = (_BYTE *)sub_6135F0(a1);
                *(_DWORD *)(a1 + 0xC8) = sub_521450((TESObjectREFR *)g_idleAnimationMap, v27, v28);
                sub_612DE0(a1, v25);
                v29 = *(Actor **)(a1 + 0x3C);
                v48 = *(_DWORD *)(a1 + 0xC8) != 0;
                v46 = *(_BYTE *)(a1 + 0x4D);
                v30 = (TESObjectREFR *)sub_6135F0(a1);
                v31 = sub_621B40((SInt32)a3, a10, a11, v29, *(float *)&a3, v30, 0, v46, v48);
                ContainerEntryExtraData_DestroyDataTable(a3, v32);
                FormHeapFree((unsigned int)a3);
                if ( v31 == 1 || v31 == 2 )
                {
                  sub_619920(a1, 7);
                  if ( *(_DWORD *)(a1 + 0x70) != 0xD )
                    *(float *)(a1 + 0x188) = flt_A30634;
                  v33 = *(Actor **)(a1 + 0x3C);
                  *(_DWORD *)(a1 + 0x70) = 0xD;
                  sub_5F5170(v33, 0, 1);
                  *(_BYTE *)(a1 + 0x48) = 1;
                }
                else
                {
                  sub_612DE0(a1, v31);
                  sub_5E0A70(*(_DWORD ***)(a1 + 0x3C));
                }
                return;
              }
            }
            v34 = *(_DWORD ***)(a1 + 0x3C);
            *(_BYTE *)(a1 + 0x48) = 1;
            sub_5E0A70(v34);
          }
        }
      }
    }
    switch ( *(_DWORD *)(a1 + 0x70) )
    {
      case 0:
        if ( !*(_BYTE *)(a1 + 0x1BC)
          || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x304))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) )
        {
          goto LABEL_74;
        }
        goto LABEL_42;
      case 1:
        if ( v12 && ContainerEntryExtraData_GetHealth(v12, 0) > *(float *)&SrcStr )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x304))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) )
            goto LABEL_74;
          goto LABEL_42;
        }
        if ( *(_BYTE *)(a1 + 0x131) )
          goto LABEL_60;
        v35 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x2B8))(*(_DWORD *)(a1 + 0x3C), 5);
        if ( v35
          || (v35 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x2B8))(*(_DWORD *)(a1 + 0x3C), 4)) != 0 )
        {
          v36 = OblivionDynamicCast(
                  *(void **)(v35 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectWEAP `RTTI Type Descriptor',
                  0);
          sub_61C680(a1, (int)v36);
        }
        *(_BYTE *)(a1 + 0x130) = 1;
        return;
      case 2:
        if ( v12 )
        {
          v37 = OblivionDynamicCast(
                  v12[2],
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectWEAP `RTTI Type Descriptor',
                  0);
          if ( v37 )
          {
            if ( ContainerEntryExtraData_GetHealth(v12, 0) > *(float *)&SrcStr )
            {
              if ( v37[0x90] == 5
                && !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xF4))(
                      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                      1) )
              {
                sub_619920(a1, 7);
                if ( *(_DWORD *)(a1 + 0x70) != 0xD )
                  *(float *)(a1 + 0x188) = flt_A30634;
                v38 = *(Actor **)(a1 + 0x3C);
                *(_DWORD *)(a1 + 0x70) = 0xD;
                sub_5F5170(v38, 1, 5);
                return;
              }
              if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x304))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) )
              {
LABEL_42:
                sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 1);
                return;
              }
              if ( v37[0x90] != 4
                || (v39 = *((_DWORD *)v37 + 0x19)) != 0
                && (v50 = sub_4849C0(v12),
                    ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v39 + 0x24))(v39 + 0x24, 0) <= v50) )
              {
LABEL_74:
                if ( *(_DWORD *)(a1 + 0x6C) != 0xC )
                  sub_6213D0(a1);
                return;
              }
LABEL_60:
              if ( *(_DWORD *)(a1 + 0x70) != 0xD )
                *(float *)(a1 + 0x188) = flt_A30634;
              *(_DWORD *)(a1 + 0x70) = 0xD;
              return;
            }
          }
        }
        if ( *(_BYTE *)(a1 + 0x130) )
          goto LABEL_60;
        v40 = sub_612960((_DWORD **)a1, 1);
        if ( v40 )
        {
          v41 = OblivionDynamicCast(
                  *(void **)(v40 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectWEAP `RTTI Type Descriptor',
                  0);
          sub_61C680(a1, (int)v41);
        }
        *(_BYTE *)(a1 + 0x131) = 1;
        break;
      case 3:
        v42 = *(int **)(a1 + 0x7C);
        if ( v42 && !sub_613BB0((_DWORD *)a1, v42, *(unsigned __int8 *)(a1 + 0x17C), 1) )
          goto LABEL_71;
        v43 = *(_DWORD *)(a1 + 0x7C) == 0;
        goto LABEL_70;
      case 4:
        v44 = *(int **)(a1 + 0x80);
        if ( v44 && !sub_613BB0((_DWORD *)a1, v44, *(unsigned __int8 *)(a1 + 0x17C), 1) )
          goto LABEL_71;
        v43 = *(_DWORD *)(a1 + 0x80) == 0;
LABEL_70:
        if ( v43 )
        {
LABEL_71:
          if ( *(_DWORD *)(a1 + 0x70) != 0xD )
            *(float *)(a1 + 0x188) = flt_A30634;
          *(_DWORD *)(a1 + 0x70) = 0xD;
        }
        goto LABEL_74;
      case 8:
        sub_61D7E0(a1, (char)a3, a9, a11, a10);
        return;
      case 9:
        sub_619810(a1, a11);
        goto LABEL_74;
      default:
        goto LABEL_74;
    }
  }
}
