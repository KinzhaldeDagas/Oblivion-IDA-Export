// positive sp value has been detected, the output may be wrong!
char __userpurge def_68110C@<al>(Actor *a1@<edi>, int a2@<esi>, __int16 a3)
{
  Actor *v3; // ecx
  bool v4; // bl
  float (__thiscall *GetZRotation)(MobileObject *); // eax
  TESPackage *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  bool v13; // bl
  int v14; // eax
  float *v15; // eax
  int v16; // eax
  const char *v17; // eax
  int v18; // ebp
  float *v19; // eax
  double v20; // st7
  void *v21; // ecx
  double v22; // st7
  float *v23; // [esp-134h] [ebp-140h]
  float *v24; // [esp-130h] [ebp-13Ch]
  const char *v25; // [esp-130h] [ebp-13Ch]
  const char *v26; // [esp-12Ch] [ebp-138h]
  char v27; // [esp-11Eh] [ebp-12Ah]
  char v28; // [esp-11Dh] [ebp-129h]
  float v29; // [esp-11Ch] [ebp-128h]
  float v30; // [esp-11Ch] [ebp-128h]
  float v31[2]; // [esp-118h] [ebp-124h] BYREF
  double v32[2]; // [esp-110h] [ebp-11Ch] BYREF
  char v33; // [esp-100h] [ebp-10Ch] BYREF
  char v34[252]; // [esp-FCh] [ebp-108h] BYREF

  if ( *(_BYTE *)(a2 + 0xC) == 5 )
    goto LABEL_20;
  v3 = *(Actor **)(a2 + 0x2C);
  if ( !v3 || v3 == a1 )
    return 0;
  v4 = 0;
  HIWORD(v31[0]) = 0;
  if ( sub_5E05B0(v3) )
  {
    GetZRotation = a1->vtbl->super.GetZRotation;
    HIBYTE(v31[0]) = 1;
    v32[0] = ((double (__thiscall *)(Actor *))GetZRotation)(a1);
    *(float *)v32 = v32[0]
                  - ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a2 + 0x2C) + 0x1E0))(*(_DWORD *)(a2 + 0x2C));
    *(float *)v32 = fabs(*(float *)v32);
    v4 = *(float *)v32 > (double)flt_A74AE0;
  }
  v6 = sub_5E0380(a1);
  if ( v6 )
  {
    v7 = (char)v6->members.type - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        sub_5E2E00(a1);
        if ( v8 == *(_DWORD *)(a2 + 0x2C) )
        {
          v4 = 0;
LABEL_13:
          BYTE2(v31[0]) = 1;
        }
      }
    }
    else
    {
      sub_5E2E00(a1);
      if ( v9 == *(_DWORD *)(a2 + 0x2C) )
      {
        v4 = HIBYTE(v31[0]) == 0;
        goto LABEL_13;
      }
    }
  }
  if ( !sub_5E0510(a1) && !a1->vtbl->IsInCombat(a1, 1) && v4 )
  {
    if ( srcObj == (TESChildCELL *)a1 )
    {
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x2C) + 0xD4))(*(_DWORD *)(a2 + 0x2C));
      v11 = (const char *)((int (__thiscall *)(Actor *, int))a1->vtbl->super.super.super.GetEditorName)(a1, v10);
      _sprintf(v34, "Actor '%s' waiting for Actor '%s'.", v11, v26);
      Interface_ConsolePrint(v34);
    }
    *(_BYTE *)(a2 + 0xC) = 5;
    *(float *)(a2 + 0x1C) = 0.0;
LABEL_20:
    sub_5E05F0(a1, 0x3F);
    *(float *)(a2 + 0x10) = 0.0;
    return 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 0x2C) + 0x334))(*(_DWORD *)(a2 + 0x2C), 1) )
    return 0;
  v13 = 1;
  v14 = (int)a1->members.super.process->GetCurrentPath(a1->members.super.process);
  if ( v14 )
  {
    v24 = (float *)(*(_DWORD *)(a2 + 0x2C) + 0x2C);
    sub_68B3F0(v14);
    sub_4121A0(v15, v31, v24);
    *(float *)v32 = 0.0;
    v13 = sub_404C90(v31) <= fCostant_100;
  }
  if ( v27 || v28 || v13 )
    return 0;
  if ( srcObj == (TESChildCELL *)a1 )
  {
    v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x2C) + 0xD4))(*(_DWORD *)(a2 + 0x2C));
    v17 = (const char *)((int (__thiscall *)(Actor *, int))a1->vtbl->super.super.super.GetEditorName)(a1, v16);
    _sprintf(&v33, "Actor '%s' angling away from Actor '%s'.", v17, v25);
    Interface_ConsolePrint(&v33);
  }
  v18 = *(_DWORD *)(a2 + 0x2C);
  v23 = a1->vtbl->super.super.GetPos((TESObjectREFR *)a1);
  v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x174))(v18);
  sub_4121A0(v19, (float *)v32 + 1, v23);
  v31[0] = sub_683CB0((float *)v32 + 1);
  v29 = flt_A30634;
  *(_BYTE *)(a2 + 0xC) = 3;
  v20 = v31[0];
  if ( *(float *)(a2 + 0x18) > (double)v31[0] )
  {
    v29 = 1.0;
    *(_BYTE *)(a2 + 0xC) = 4;
  }
  v31[0] = v20 - *(float *)(a2 + 0x18);
  v31[0] = fabs(v31[0]);
  if ( v31[0] > dbl_A3D5B8 )
  {
    *(_BYTE *)(a2 + 0xC) = 3;
    v29 = v29 * dbl_A3D360;
  }
  v21 = *(void **)(a2 + 0x2C);
  v31[0] = 1.0;
  if ( sub_5E3290(v21) )
    v31[0] = flt_A35AA4;
  v30 = v29 * dbl_A74A88 * v31[0] + *(float *)(a2 + 0x18);
  sub_680E70((float *)a2, v30);
  *(float *)(a2 + 0x10) = v30;
  v22 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B3A4A8);
  *(float *)(a2 + 0x20) = v22 * dbl_A2FAA0 * v31[0];
  *(float *)(a2 + 0x1C) = 0.0;
  return 1;
}
