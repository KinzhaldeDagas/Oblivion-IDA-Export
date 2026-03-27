double __usercall sub_6231E0@<st0>(int a1@<ecx>, double a2@<st2>, double result@<st0>)
{
  int v4; // eax
  double v5; // st6
  double v6; // st5
  TESObjectREFR *v7; // edi
  TESObjectREFRVtbl *vtbl; // ebp
  double v9; // st7
  bool v10; // c0
  double v11; // st7
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  TESObjectCELL *ParentCell; // eax
  int v14; // eax
  TESObjectREFRVtbl *v15; // ebp
  unsigned int v16; // ebx
  int v17; // eax
  _DWORD *v18; // esi
  float *v19; // ebp
  float *v20; // eax
  char v21; // al
  TESWorldSpace *WorldSpace; // [esp+Ch] [ebp-2Ch]
  float v23; // [esp+10h] [ebp-28h]
  bool v24; // [esp+27h] [ebp-11h]
  float v25; // [esp+28h] [ebp-10h]
  float v26[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xC )
  {
    if ( *(_DWORD *)(a1 + 0x11C) )
    {
      v5 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0xEC);
      v6 = *(float *)(a1 + 0xF0);
      v7 = *(TESObjectREFR **)(a1 + 0x3C);
      vtbl = v7[1].vtbl;
      if ( v6 < v5
        && ((*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xB0))(v7[1].vtbl)
          & 0x100) != 0 )
      {
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, int))vtbl->super.super.InitializeComponent + 0xB1))(
          vtbl,
          0x201,
          1);
      }
      if ( !sub_5E05B0(v7) )
      {
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          0x101,
          1);
        v9 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 3);
        v5 = flt_A3D65C;
        v10 = v5 < v9;
        v11 = v5;
        if ( v10 )
          v11 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 3);
        v25 = v11;
        *(float *)(a1 + 0xEC) = *(float *)(a1 + 0x44);
        *(float *)(a1 + 0xF0) = v25;
        *(float *)(a1 + 0xF4) = flt_A30634;
      }
      result = flt_A30634;
      InitializeComponent = vtbl->super.super.InitializeComponent;
      v23 = flt_A30634;
      WorldSpace = TESObjectREFR_GetWorldSpace(v7);
      ParentCell = TESObjectREFR_GetParentCell(v7);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD, TESObjectCELL *, TESWorldSpace *, _DWORD))InitializeComponent
       + 0x105))(
        vtbl,
        v7,
        *(_DWORD *)(a1 + 0x11C),
        ParentCell,
        WorldSpace,
        LODWORD(v23));
      v24 = 0;
      if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x103))(vtbl) )
      {
        v14 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x103))(vtbl);
        v24 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x2C))(v14) != 0;
      }
      v15 = v7[1].vtbl;
      v16 = 0xFFFFFFFF;
      v17 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v15->super.super.InitializeComponent + 0x61))(v15);
      if ( v17 )
        v16 = *(char *)(v17 + 0x20);
      v18 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v7->vtbl[1].IsMobileObject)(v7);
      if ( v16 == 0xC )
      {
        v19 = (float *)v18[0x47];
        v20 = v7->vtbl->GetPos(v7);
        v26[0] = *v20 - *v19;
        v26[1] = v20[1] - v19[1];
        result = v20[2] - v19[2];
        v26[2] = result;
        if ( v24 || (result = sub_404C90(v26), result <= flt_A427E4) )
        {
          sub_612DA0(v18, 9);
          sub_61C6E0((int)v18);
          v18[0x47] = 0;
        }
        else
        {
          if ( sub_612690(v18[0x1C]) )
          {
            result = ((double (__thiscall *)(_DWORD *))loc_622820)(v18);
            if ( v21 )
            {
              sub_612DA0(v18, 9);
              sub_619920((int)v18, 0);
            }
          }
          if ( Actor_IsBlocking(v7) )
            sub_5F4AE0((Actor *)v7, v6, v5, result, 0);
          if ( sub_614290((int)v18) )
          {
            if ( v18[0x6A] >= iAICombatMinDetection )
            {
              sub_612DA0(v18, 9);
              sub_619920((int)v18, 0);
            }
          }
        }
      }
      else if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v15->super.super.InitializeComponent + 0x32))(v15) )
      {
        sub_612DA0(v18, 9);
      }
    }
    else
    {
      sub_6160B0((Actor **)a1);
      v4 = *(_DWORD *)(a1 + 0x70);
      if ( v4 == 2 || v4 == 4 )
        sub_61FE90((float *)a1, a2, result);
      else
        sub_61FEF0((float *)a1, a2, result);
    }
  }
  return result;
}
