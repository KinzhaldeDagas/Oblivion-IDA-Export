// positive sp value has been detected, the output may be wrong!
char __userpurge def_68110C@<al>(Actor *a1@<edi>, int a2@<esi>, __int16 a3)
{
  Actor *v3; // ecx
  bool v4; // bl
  float (__thiscall *GetZRotation)(MobileObject *); // eax
  TESPackage *CurrentPackage; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  bool v13; // bl
  PathLow *v14; // eax
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

  if ( *(_BYTE *)(a2 + 0xC) == 5 ) /*0x681186*/
    goto LABEL_20; /*0x681186*/
  v3 = *(Actor **)(a2 + 0x2C); /*0x68118c*/
  if ( !v3 || v3 == a1 ) /*0x681199*/
    return 0; /*0x681199*/
  v4 = 0; /*0x68119f*/
  HIWORD(v31[0]) = 0; /*0x6811a1*/
  if ( sub_5E05B0(v3) ) /*0x6811a9*/
  {
    GetZRotation = a1->vtbl->super.GetZRotation; /*0x6811b4*/
    HIBYTE(v31[0]) = 1; /*0x6811bc*/
    v32[0] = ((double (__thiscall *)(Actor *))GetZRotation)(a1); /*0x6811c3*/
    *(float *)v32 = v32[0] /*0x6811d8*/
                  - ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a2 + 0x2C) + 0x1E0))(*(_DWORD *)(a2 + 0x2C));
    *(float *)v32 = fabs(*(float *)v32); /*0x6811e2*/
    v4 = *(float *)v32 > (double)flt_A74AE0; /*0x6811f7*/
  }
  CurrentPackage = Actor::GetCurrentPackage(a1); /*0x6811fb*/
  if ( CurrentPackage ) /*0x681202*/
  {
    v7 = CurrentPackage->members.type - 1; /*0x681208*/
    if ( v7 ) /*0x68120b*/
    {
      if ( v7 == 1 ) /*0x681210*/
      {
        sub_5E2E00(a1); /*0x681214*/
        if ( v8 == *(_DWORD *)(a2 + 0x2C) ) /*0x68121c*/
        {
          v4 = 0; /*0x68121e*/
LABEL_13:
          BYTE2(v31[0]) = 1; /*0x681236*/
        }
      }
    }
    else
    {
      sub_5E2E00(a1); /*0x681224*/
      if ( v9 == *(_DWORD *)(a2 + 0x2C) ) /*0x68122c*/
      {
        v4 = HIBYTE(v31[0]) == 0; /*0x681233*/
        goto LABEL_13; /*0x681233*/
      }
    }
  }
  if ( !sub_5E0510(a1) && !a1->vtbl->IsInCombat(a1, 1) && v4 ) /*0x68125a*/
  {
    if ( MEMORY[0xB333B4] == (TESChildCELL *)a1 ) /*0x681262*/
    {
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x2C) + 0xD4))(*(_DWORD *)(a2 + 0x2C)); /*0x68126f*/
      v11 = (const char *)((int (__thiscall *)(Actor *, int))a1->vtbl->super.super.super.GetEditorName)(a1, v10); /*0x68127c*/
      _sprintf(v34, "Actor '%s' waiting for Actor '%s'.", v11, v26); /*0x681289*/
      Interface_ConsolePrint(v34); /*0x681293*/
    }
    *(_BYTE *)(a2 + 0xC) = 5; /*0x68129d*/
    *(float *)(a2 + 0x1C) = 0.0; /*0x6812a1*/
LABEL_20:
    sub_5E05F0(a1, 0x3F); /*0x6812a4*/
    *(float *)(a2 + 0x10) = 0.0; /*0x6812af*/
    return 1; /*0x6812b4*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 0x2C) + 0x334))(*(_DWORD *)(a2 + 0x2C), 1) ) /*0x6812c6*/
    return 0; /*0x6812c6*/
  v13 = 1; /*0x6812db*/
  v14 = a1->members.super.process->GetCurrentPath(a1->members.super.process); /*0x6812dd*/
  if ( v14 ) /*0x6812e1*/
  {
    v24 = (float *)(*(_DWORD *)(a2 + 0x2C) + 0x2C); /*0x6812e9*/
    sub_68B3F0((int)v14); /*0x6812f1*/
    sub_4121A0(v15, v31, v24); /*0x6812f8*/
    *(float *)v32 = 0.0; /*0x681303*/
    v13 = NiPoint3_Length(v31) <= fCostant_100; /*0x681319*/
  }
  if ( v27 || v28 || v13 ) /*0x681333*/
    return 0; /*0x68147b*/
  if ( MEMORY[0xB333B4] == (TESChildCELL *)a1 ) /*0x68133f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x2C) + 0xD4))(*(_DWORD *)(a2 + 0x2C)); /*0x68134c*/
    v17 = (const char *)((int (__thiscall *)(Actor *, int))a1->vtbl->super.super.super.GetEditorName)(a1, v16); /*0x681359*/
    _sprintf(&v33, "Actor '%s' angling away from Actor '%s'.", v17, v25); /*0x681366*/
    Interface_ConsolePrint(&v33); /*0x681370*/
  }
  v18 = *(_DWORD *)(a2 + 0x2C); /*0x681381*/
  v23 = a1->vtbl->super.super.GetPos(a1); /*0x68138b*/
  v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x174))(v18); /*0x681399*/
  sub_4121A0(v19, (float *)v32 + 1, v23); /*0x68139d*/
  v31[0] = Vector3_CalculateHeadingRadiansXY((float *)v32 + 1); /*0x6813ac*/
  v29 = kTerrainLODQuadRayDirectionZ; /*0x6813b9*/
  *(_BYTE *)(a2 + 0xC) = 3; /*0x6813bd*/
  v20 = v31[0]; /*0x6813c1*/
  if ( *(float *)(a2 + 0x18) > (double)v31[0] ) /*0x6813d2*/
  {
    v29 = 1.0; /*0x6813d4*/
    *(_BYTE *)(a2 + 0xC) = 4; /*0x6813d8*/
  }
  v31[0] = v20 - *(float *)(a2 + 0x18); /*0x6813e3*/
  v31[0] = fabs(v31[0]); /*0x6813ed*/
  if ( v31[0] > dbl_A3D5B8 ) /*0x681400*/
  {
    *(_BYTE *)(a2 + 0xC) = 3; /*0x681406*/
    v29 = v29 * dbl_A3D360; /*0x681410*/
  }
  v21 = *(void **)(a2 + 0x2C); /*0x681414*/
  v31[0] = 1.0; /*0x681417*/
  if ( sub_5E3290(v21) ) /*0x68141b*/
    v31[0] = flt_A35AA4; /*0x68142a*/
  v30 = v29 * dbl_A74A88 * v31[0] + *(float *)(a2 + 0x18); /*0x681442*/
  sub_680E70((float *)a2, v30); /*0x68144d*/
  *(float *)(a2 + 0x10) = v30; /*0x68145b*/
  v22 = *GameSetting_GetSafeFloatPointer(&unk_B3A4A8); /*0x681463*/
  *(float *)(a2 + 0x20) = v22 * dbl_A2FAA0 * v31[0]; /*0x681471*/
  *(float *)(a2 + 0x1C) = 0.0; /*0x681476*/
  return 1; /*0x681494*/
}
