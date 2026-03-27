double __usercall sub_623480@<st0>(int a1@<ecx>, int a2@<ebx>, char a3@<bpl>, int *a4@<edi>, double result@<st0>)
{
  TESObjectREFR *v7; // ebp
  TESObjectREFR *v8; // eax
  bool v9; // al
  TESObjectREFRVtbl *vtbl; // edi
  TESObjectREFR *v11; // ecx
  bool v12; // c0
  double v13; // st6
  double v14; // st6
  double v15; // st5
  char v16; // al
  _DWORD *v17; // eax
  unsigned int v18; // eax
  char *Name; // eax
  TESObjectREFRVtbl *v20; // ebx
  int v21; // eax
  int v22; // edi
  int v23; // eax
  char *v24; // eax
  bool v25; // c0
  double v26; // st7
  int v27; // eax
  bool v28; // c0
  double v29; // st6
  int v30; // eax
  int v31; // eax
  char v32; // al
  int v33; // ebx
  _DWORD *v34; // eax
  char v35; // al
  size_t v36; // [esp+10h] [ebp-2Ch]
  bool v39; // [esp+2Eh] [ebp-Eh]
  char v40; // [esp+2Fh] [ebp-Dh]
  float v41; // [esp+30h] [ebp-Ch]
  float v42; // [esp+34h] [ebp-8h]
  float v43; // [esp+38h] [ebp-4h]
  float v44; // [esp+38h] [ebp-4h]
  float v45; // [esp+38h] [ebp-4h]
  float v46; // [esp+38h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x6C) == 4 )
  {
    v7 = *(TESObjectREFR **)(a1 + 0x3C);
    if ( *(float *)(a1 + 0x184) < 0.0 )
    {
      v8 = (TESObjectREFR *)sub_6135F0(a1);
      *(float *)(a1 + 0x184) = TESObjectREFR_GetDistanceBetween_(a4, v7, v8, 0, a3);
    }
    v42 = *(float *)(a1 + 0x184);
    sub_615520(a1);
    v41 = result;
    v9 = sub_6163A0(a1, (char)a4);
    vtbl = v7[1].vtbl;
    v39 = v9;
    if ( *(float *)(a1 + 0xF0) >= *(float *)(a1 + 0x44) - *(float *)(a1 + 0xEC) )
    {
      v40 = 0;
    }
    else
    {
      v40 = 1;
      if ( (*((unsigned __int16 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xB0))(vtbl) == 0x101 )
      {
        v7->vtbl->GetScale(v7);
        v11 = *(TESObjectREFR **)(a1 + 0x3C);
        *(_DWORD *)(a1 + 0xD0) = 0x201;
        v12 = flt_A3D65C < sub_5E5850(v11, 7);
        v13 = flt_A3D65C;
        if ( v12 )
          v13 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 7);
        v43 = v13;
        *(float *)(a1 + 0xEC) = *(float *)(a1 + 0x44);
        *(float *)(a1 + 0xF0) = v43;
        *(float *)(a1 + 0xF4) = flt_A30634;
      }
    }
    v14 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4);
    v15 = *(float *)(a1 + 0xD8);
    if ( v15 < v14 )
    {
      ((void (__thiscall *)(int))loc_622820)(a1);
      if ( v16 )
        return result;
      *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
      *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30;
      v14 = flt_A30634;
      *(float *)(a1 + 0xDC) = flt_A30634;
    }
    if ( sub_6135F0(a1) )
    {
      v17 = (_DWORD *)sub_6135F0(a1);
      if ( Actor_IsSwimming(v17) )
      {
        v18 = *(_DWORD *)(a1 + 0x70);
        if ( (v18 < 2 || v18 == 3) && !Actor_IsSwimming(v7) && !Actor_CanFightInWater(v7) )
        {
          if ( byte_B3B908 )
          {
            Name = TESObjectREFR_GetName(v7);
            Interface_ConsolePrint("%.20s can't fight in the water, entering combat alert state.", Name);
          }
          sub_620E50((Actor **)a1, v15, result);
          return result;
        }
      }
    }
    (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, _DWORD, _DWORD, int, double@<st0>))vtbl->super.super.InitializeComponent
     + 0x66))(
      vtbl,
      v7,
      0,
      *(_DWORD *)(a1 + 0xD0),
      1,
      result);
    v20 = v7[1].vtbl;
    v21 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v20->super.super.InitializeComponent + 0x61))(v20);
    if ( !v21 || *(_BYTE *)(v21 + 0x20) != 0xC )
    {
      if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v20->super.super.InitializeComponent + 0x32))(v20) )
        sub_5E02B0(v7);
      return result;
    }
    v22 = ((int (__thiscall *)(TESObjectREFR *))v7->vtbl[1].IsMobileObject)(v7);
    if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v20->super.super.InitializeComponent + 0x103))(v20) )
    {
      v23 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v20->super.super.InitializeComponent + 0x103))(v20);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 0x2C))(v23) )
      {
        if ( byte_B3B908 )
        {
          v24 = TESObjectREFR_GetName(v7);
          Interface_ConsolePrint("%.20s pathing failed, entering combat alert state.", v24);
        }
        *(_BYTE *)(a1 + 0x174) = 0;
        sub_620E50((Actor **)v22, v15, result);
        return result;
      }
    }
    if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v20->super.super.InitializeComponent + 0x32))(v20) )
    {
      if ( v39 )
      {
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, int))v7[1].vtbl->super.super.InitializeComponent + 0xB1))(
          v7[1].vtbl,
          0x101,
          1);
        sub_619920(v22, 3);
        v25 = flt_A3D65C < sub_5E5850(v7, 3);
        v26 = flt_A3D65C;
        if ( v25 )
          v26 = sub_5E5850(v7, 3);
        v44 = v26;
        *(float *)(v22 + 0xF8) = *(float *)(a1 + 0x44);
        *(float *)(v22 + 0xFC) = v44;
        result = flt_A30634;
        *(float *)(v22 + 0x100) = flt_A30634;
        sub_612DA0((_DWORD *)v22, 9);
        return result;
      }
LABEL_48:
      sub_619920(v22, 0);
      sub_612DA0((_DWORD *)v22, 9);
      return result;
    }
    if ( Actor_IsBlocking(v7) )
      sub_5F4AE0((Actor *)v7, v15, v14, result, 0);
    v27 = *(_DWORD *)(v22 + 0x70);
    if ( v27 == 2 || v27 == 4 )
    {
      if ( *(_DWORD *)(v22 + 0x74) )
        return result;
      goto LABEL_48;
    }
    if ( sub_613440((void **)v22, v42, v41, 0) && *(_BYTE *)(v22 + 0x158) )
    {
      if ( v39 )
      {
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, int))v7[1].vtbl->super.super.InitializeComponent + 0xB1))(
          v7[1].vtbl,
          0x101,
          1);
        sub_619920(v22, 3);
        v28 = flt_A3D65C < sub_5E5850(v7, 3);
        v29 = flt_A3D65C;
        if ( v28 )
          v29 = sub_5E5850(v7, 3);
        v45 = v29;
        *(float *)(v22 + 0xF8) = *(float *)(a1 + 0x44);
        *(float *)(v22 + 0xFC) = v45;
        *(float *)(v22 + 0x100) = flt_A30634;
      }
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v22 + 0x74)
      && (v46 = v41 + v41, sub_613440((void **)v22, v42, v46, 0))
      && *(_BYTE *)(v22 + 0x158)
      && Actor_IsNPC(*(Actor **)(v22 + 0x3C))
      && sub_612670(*(_DWORD *)(v22 + 0x70))
      && (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v20->super.super.InitializeComponent + 0xB7))(v20) )
    {
      v30 = sub_6135F0(v22);
      if ( sub_6131D0((int)v7, v30, 0) )
      {
        v31 = sub_612D60((_DWORD *)v22);
        if ( v31 )
        {
          v32 = *(_BYTE *)(v31 + 0x90);
          if ( v32 != 5 && v32 != 4 )
          {
            result = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36F68) * fCostant_100;
            v33 = Double_To_SInt32(result);
            if ( GetRandomLargeInteger_(0) % 0x64 < v33 )
            {
              HIDWORD(v36) = off_B241C4;
              LODWORD(v36) = 0;
              v34 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x164))(
                                *(_DWORD *)(a1 + 0x3C),
                                result);
              v35 = sub_4727E0(v34, v22, v36, 0, a2);
              sub_612BD0(v22, v33, (int)v7, v42, result, (v35 != 0x6C) + 0x14, 0);
            }
          }
        }
      }
    }
    else if ( v40 )
    {
      sub_61E5A0(v22, (int)v7, v15, v42, result, v42, v41);
    }
  }
  return result;
}
