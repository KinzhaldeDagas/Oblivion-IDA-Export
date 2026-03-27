double __usercall sub_623C00@<st0>(int a1@<ecx>, int a2@<edi>, double a3@<st1>, int a4@<ebx>, double result@<st0>)
{
  int *v8; // edi
  TESObjectREFR *v9; // eax
  double v10; // st5
  int v11; // eax
  bool v12; // bl
  unsigned int v13; // eax
  int v14; // edi
  int v15; // eax
  TESObjectREFR *v16; // edi
  TESObjectREFR *v17; // eax
  int v18; // ecx
  char v19; // al
  bool v20; // cl
  double v21; // st5
  char v22; // al
  int *v23; // eax
  int v24; // eax
  int *v25; // eax
  int *SafeFloatPointer; // eax
  int v27; // eax
  float v28; // [esp+4h] [ebp-24h]
  char v29; // [esp+8h] [ebp-20h]
  float v30; // [esp+8h] [ebp-20h]
  int v32; // [esp+10h] [ebp-18h]
  float v33; // [esp+18h] [ebp-10h]
  float v34; // [esp+1Ch] [ebp-Ch]
  float v35; // [esp+20h] [ebp-8h] BYREF
  float v36; // [esp+24h] [ebp-4h] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) || *(_DWORD *)(a1 + 0x70) == 8 )
    return result;
  v32 = a2;
  if ( *(float *)(a1 + 0x184) < 0.0 )
  {
    v8 = *(int **)(a1 + 0x3C);
    v9 = (TESObjectREFR *)sub_6135F0(a1);
    *(float *)(a1 + 0x184) = TESObjectREFR_GetDistanceBetween_(v8, (TESObjectREFR *)v8, v9, 0, v32);
  }
  v33 = *(float *)(a1 + 0x184);
  v10 = sub_615520(a1);
  v34 = result;
  v35 = 0.0;
  v36 = 0.0;
  sub_6142D0((_DWORD *)a1, COERCE_FLOAT(&v35), COERCE_FLOAT(&v36));
  v11 = *(_DWORD *)(a1 + 0x70);
  if ( v11 == 2 || v11 == 4 )
    v34 = v35;
  result = v33;
  v12 = sub_613440((void **)a1, v33, v34, 0);
  if ( v12 )
  {
    v13 = *(_DWORD *)(a1 + 0x70);
    if ( (v13 < 2 || v13 == 3) && !*(_BYTE *)(a1 + 0x158) )
    {
      v14 = *(_DWORD *)(a1 + 0x3C);
      v15 = sub_6135F0(a1);
      if ( sub_6131D0(v14, v15, 0) )
      {
        v16 = *(TESObjectREFR **)(a1 + 0x3C);
        v29 = *(_BYTE *)(a1 + 0x158);
        v17 = (TESObjectREFR *)sub_6135F0(a1);
        *(_BYTE *)(a1 + 0x174) = sub_617590(v16, v17, v29);
LABEL_14:
        v18 = a1;
LABEL_15:
        sub_61D320(v18);
        return result;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 )
  {
    sub_6191B0(a1, v10, a3, result);
    return result;
  }
  result = ((double (__thiscall *)(int))loc_622820)(a1);
  if ( v19 )
    return result;
  v20 = sub_612690(*(_DWORD *)(a1 + 0x70));
  if ( v20 && !*(_DWORD *)(a1 + 0x74) )
  {
    if ( v36 >= (double)v33 )
    {
      if ( *(_BYTE *)(a1 + 0x158) || *(_DWORD *)(a1 + 0x6C) == 2 )
        return result;
LABEL_29:
      sub_61CE40(a1, a4, v32, result);
      return result;
    }
    *(_BYTE *)(a1 + 0x17E) = 1;
  }
  v21 = v33;
  if ( v34 >= (double)v33 )
  {
    if ( (PlayerCharacter *)sub_6135F0(a1) == TESDataHandler_g_PlayerRef )
      *(_BYTE *)(a1 + 0x4B) = 1;
    if ( sub_6135F0(a1) )
    {
      v24 = sub_6135F0(a1);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 0x350))(v24) )
      {
        if ( *(_BYTE *)(a1 + 0x49) )
        {
          if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) )
            sub_5F4AE0(*(Actor **)(a1 + 0x3C), v21, a3, result, 0);
          if ( *(_DWORD *)(a1 + 0x74) == 1 )
          {
            *(_DWORD *)(a1 + 0x78) = 1;
            *(_DWORD *)(a1 + 0x74) = 3;
          }
        }
        return result;
      }
    }
    if ( sub_612690(*(_DWORD *)(a1 + 0x70)) )
    {
      if ( *(_BYTE *)(a1 + 0x116) )
        goto LABEL_26;
      v25 = sub_5E0F50(*(void **)(a1 + 0x3C));
      (*(void (__thiscall **)(int *))(*v25 + 0x158))(v25);
      v36 = v33;
      if ( v33 > 0.0 && v33 < (double)v36 )
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B372A8);
        v30 = v36;
        result = *(float *)SafeFloatPointer;
        v28 = *(float *)SafeFloatPointer;
        v27 = sub_6135F0(a1);
        sub_61CAA0(a1, 1, v27, v28, v30);
        return result;
      }
    }
    goto LABEL_29;
  }
  if ( v20 )
  {
    if ( *(_BYTE *)(a1 + 0x116) )
    {
LABEL_26:
      sub_61C6E0(a1);
      return result;
    }
    if ( !v12 )
    {
      v22 = sub_614290(a1);
      v18 = a1;
      if ( v22 )
        goto LABEL_15;
      sub_61FE90((float *)a1, v21, result);
      return result;
    }
LABEL_36:
    (*(void (__usercall **)(_DWORD@<ecx>, int, _DWORD, double@<st0>, double@<st1>))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C)
                                                                                                + 0x58)
                                                                                  + 0x2C4))(
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      2,
      0,
      result,
      a3);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      1,
      1);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      0x100,
      1);
    sub_619920(a1, 3);
    return result;
  }
  if ( v12 && !sub_6163A0(a1, 1) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x25C))(*(_DWORD *)(a1 + 0x3C)) )
      return result;
    goto LABEL_36;
  }
  if ( sub_614290(a1) )
    goto LABEL_14;
  v23 = sub_5E0F50(*(void **)(a1 + 0x3C));
  if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v23 + 0x16C))(v23, 0x80) )
    goto LABEL_14;
  sub_61FEF0((float *)a1, v21, result);
  return result;
}
