int __userpurge sub_6245B0@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        int a11,
        float a12)
{
  double v12; // st7
  int v14; // ecx
  int v15; // eax
  _DWORD **v16; // ecx
  TESObjectREFR *v17; // eax
  TESObjectREFR *v18; // eax
  int result; // eax
  signed int v20; // edi
  bool v21; // zf
  double v22; // st7
  int v23; // eax
  _WORD *v24; // eax
  __int16 AnimGroupFromField8Value; // ax
  int v26; // eax
  double v27; // st7
  double v28; // st7
  int v29; // eax
  int v30; // eax
  char v31; // bl
  int *v32; // eax
  int v33; // ecx
  int v34; // eax
  char v35; // al
  int v36; // eax
  double v37; // st7
  int v38; // edi
  _DWORD *v39; // ebx
  void (__thiscall **v40)(_DWORD *, int); // edi
  int v41; // eax
  float Distance; // [esp+4h] [ebp-Ch]
  float v44; // [esp+Ch] [ebp-4h]

  v12 = flt_A30634;
  *(float *)(a1 + 0x184) = flt_A30634;
  if ( !byte_B14B74 )
    return 0xD;
  v14 = *(_DWORD *)(a1 + 0x3C);
  if ( !v14
    || !(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x154))(v14)
    || !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C))
    || !*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58) )
  {
    return 0xD;
  }
  v15 = sub_6135F0(a1);
  v16 = *(_DWORD ***)(a1 + 0x3C);
  if ( !v15 )
    goto LABEL_12;
  if ( (*(int (__thiscall **)(_DWORD *))(*v16[0x16] + 0x47C))(v16[0x16]) )
    return 0xD;
  if ( !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x284))(*(_DWORD *)(a1 + 0x3C), 4) )
  {
    v44 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x26C))(*(_DWORD *)(a1 + 0x3C))
        * dbl_A3C770;
    v17 = (TESObjectREFR *)sub_6135F0(a1);
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), v17, 0);
    v12 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x26C))(*(_DWORD *)(a1 + 0x3C)) + v44;
    if ( v12 < Distance )
    {
      v18 = (TESObjectREFR *)sub_6135F0(a1);
      sub_6162D0((float *)a1, v18);
      if ( !sub_6135F0(a1) )
      {
        v16 = *(_DWORD ***)(a1 + 0x3C);
LABEL_12:
        ((void (__thiscall *)(_DWORD **, _DWORD))(*v16)[0xD0])(v16, 0);
        return 0xD;
      }
      return *(_DWORD *)(a1 + 0x70);
    }
  }
  v20 = 0xB;
  if ( !*(_BYTE *)(a1 + 0x59) )
  {
    sub_624480((void **)a1, v12);
    v21 = *(_DWORD *)(a1 + 0x6C) == 0xB;
    *(_BYTE *)(a1 + 0x59) = 1;
    if ( v21 )
      sub_61C6E0(a1);
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x198))(
         *(_DWORD *)(a1 + 0x3C),
         0,
         a3) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x340))(*(_DWORD *)(a1 + 0x3C), 0);
    return 0xD;
  }
  v22 = a12 + *(float *)(a1 + 0x44);
  *(float *)(a1 + 0x44) = v22;
  v23 = sub_6135F0(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0x198))(v23, 0)
    || (*(_DWORD *)(sub_6135F0(a1) + 8) & 0x800) != 0 )
  {
    v39 = *(_DWORD **)(a1 + 0x3C);
    v40 = (void (__thiscall **)(_DWORD *, int))(*v39 + 0x340);
    v41 = sub_6135F0(a1);
    (*v40)(v39, v41);
    return 0xD;
  }
  if ( *(_DWORD *)(a1 + 0x70) == 0xB )
    return 0xB;
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)) )
  {
    v24 = (_WORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C));
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v24, 3);
    if ( sub_51ACC0(AnimGroupFromField8Value) )
    {
      sub_61FC30(a1, COERCE_FLOAT(0xB));
      return *(_DWORD *)(a1 + 0x70);
    }
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C))
    && (Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 7 || Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 8)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x19C))(*(_DWORD *)(a1 + 0x3C))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x1A0))(*(_DWORD *)(a1 + 0x3C)) )
  {
    return *(_DWORD *)(a1 + 0x70);
  }
  v26 = *(_DWORD *)(a1 + 0x70);
  if ( v26 == 7 || v26 == 0xC || *(_DWORD *)(a1 + 0x6C) == 8 )
  {
    v38 = *(_DWORD *)(a1 + 0x3C);
    sub_620E80(a1, a9, a10, v22);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v38 + 0x334))(v38, 1) )
      return *(_DWORD *)(a1 + 0x70);
    return 0xD;
  }
  v27 = sub_624030(a1, (Actor *)0xB, v22, 0);
  if ( *(_BYTE *)(a1 + 0x1BD) )
    return *(_DWORD *)(a1 + 0x70);
  sub_612D30(a1);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x19C))(*(_DWORD *)(a1 + 0x3C)) )
  {
    if ( *(_DWORD *)(a1 + 0x70) != 0xD )
    {
      v28 = flt_A30634;
      *(_DWORD *)(a1 + 0x70) = 0xD;
      *(float *)(a1 + 0x188) = v28;
    }
    if ( *(_DWORD *)(a1 + 0x6C) )
    {
      sub_619920(a1, 0);
      return 0xD;
    }
    return 0xD;
  }
  sub_61FC30(a1, COERCE_FLOAT(0xB));
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x25C))(*(_DWORD *)(a1 + 0x3C)) )
  {
    v29 = *(_DWORD *)(a1 + 0x6C);
    if ( v29 != 0xF && v29 != 0xA && *(_DWORD *)(a1 + 0x70) != 0xD )
      sub_620E50((Actor **)a1, a9, v27);
  }
  if ( sub_5E6FE0(*(_DWORD **)(a1 + 0x3C)) )
    return 0xD;
  if ( *(_DWORD *)(a1 + 0x6C) == 9 )
  {
    sub_61D5D0(a1, v27);
    return 0xD;
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x380))(*(_DWORD *)(a1 + 0x3C)) )
  {
    sub_619920(a1, 9);
    return *(_DWORD *)(a1 + 0x70);
  }
  v30 = *(_DWORD *)(a1 + 0x70);
  if ( v30 == 6 )
  {
    sub_615420(a1, a9, a10, v27);
    return *(_DWORD *)(a1 + 0x70);
  }
  if ( v30 == 5 )
  {
    sub_619640(a1, a9, a10, v27);
    return *(_DWORD *)(a1 + 0x70);
  }
  v31 = 0;
  if ( v30 != 0xD
    || *(_DWORD *)(a1 + 0x6C) == 7
    || (v20 = sub_6239D0(a1, a9, a10, v27, 0, 0),
        sub_612DE0(a1, v20),
        sub_622180(a1, a2, (unsigned int *)v20, a4, a5, a6, a7, a8, a9, a10, v27),
        v31 = 1,
        sub_614290(a1)) )
  {
    if ( (PlayerCharacter *)sub_6135F0(a1) == TESDataHandler_g_PlayerRef && *(_BYTE *)(a1 + 0x4B) )
    {
      if ( TESDataHandler_g_PlayerRef->vtbl->super.IsYielding((Actor *)TESDataHandler_g_PlayerRef)
        && !*(_BYTE *)(a1 + 0x4C) )
      {
        v33 = *(_DWORD *)(a1 + 0x3C);
        *(_BYTE *)(a1 + 0x4C) = 1;
        (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v33 + 0x36C))(v33, TESDataHandler_g_PlayerRef);
        return *(_DWORD *)(a1 + 0x70);
      }
      if ( !TESDataHandler_g_PlayerRef->vtbl->super.IsYielding((Actor *)TESDataHandler_g_PlayerRef) )
      {
        if ( *(_BYTE *)(a1 + 0x4C) )
          *(_BYTE *)(a1 + 0x4C) = 0;
      }
    }
    if ( *(_DWORD *)(a1 + 0x70) == 0xA )
    {
      sub_619420(a1);
      return *(_DWORD *)(a1 + 0x70);
    }
    else if ( *(_DWORD *)(a1 + 0x6C) == 0xD )
    {
      sub_61DDC0(a1);
      return *(_DWORD *)(a1 + 0x70);
    }
    else
    {
      sub_621270(a1, a9, a10, v27);
      if ( !v31 )
        sub_622180(a1, a2, (unsigned int *)v20, a4, a5, a6, a7, a8, a9, a10, v27);
      if ( *(_DWORD *)(a1 + 0x1A8) >= iAICombatMinDetection
        || (v34 = *(_DWORD *)(a1 + 0x6C), v34 == 0xB)
        || v34 == 0xC
        || v34 == 0xF
        || v34 == 0xA
        || (v27 = sub_6150E0((_DWORD *)a1, a9, v27, 0), v35) )
      {
        switch ( *(_DWORD *)(a1 + 0x6C) )
        {
          case 0:
            sub_623C00(a1, v20, a10, v31, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 1:
            sub_621850(a1, v31, v20, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 2:
            sub_6214B0(a1, a10);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 3:
            sub_6218D0(a1, v20, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 4:
            sub_623480(a1, v31, a2, (int *)v20, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 6:
            sub_61D410(a1);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 7:
            sub_623FA0(a1, a9, a10, v27);
            return *(_DWORD *)(a1 + 0x70);
          case 0xA:
            sub_622BD0(a1, v20, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 0xB:
            sub_622E30(a1, v20, a10, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 0xC:
            sub_6231E0(a1, a9, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 0xE:
          case 0x10:
            sub_61CC00(a1, v20);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          case 0xF:
            sub_622D40(a1, v27);
            result = *(_DWORD *)(a1 + 0x70);
            break;
          default:
            return *(_DWORD *)(a1 + 0x70);
        }
      }
      else
      {
        v36 = TESTopic::GEtTopic(4, 2);
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0xE4) = TESDataHandler_g_PlayerRef;
        v37 = ((double (__thiscall *)(_DWORD, _DWORD, int, _DWORD, _DWORD, int))*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58)
                                                                                          + 0x1A4))(
                *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                *(_DWORD *)(a1 + 0x3C),
                v36,
                0,
                0,
                1);
        sub_620E50((Actor **)a1, a9, v37);
        return *(_DWORD *)(a1 + 0x70);
      }
    }
  }
  else if ( sub_612690(v20) )
  {
    sub_61FE90((float *)a1, a9, v27);
    return *(_DWORD *)(a1 + 0x70);
  }
  else
  {
    v32 = sub_5E0F50(*(void **)(a1 + 0x3C));
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v32 + 0x16C))(v32, 0x80) )
      sub_61FEF0((float *)a1, a9, v27);
    return *(_DWORD *)(a1 + 0x70);
  }
  return result;
}
