double __thiscall sub_68A300(float ***this, TESObjectREFR *arg0, float a3)
{
  _DWORD *v5; // eax
  float **v6; // ecx
  float *v7; // eax
  float *v8; // edi
  float *v9; // eax
  double v10; // st5
  double v11; // st6
  float **v12; // ecx
  float *v13; // eax
  double v14; // st7
  float v15; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v17; // eax
  double v18; // st7
  TESObjectCELL *ParentCell; // eax
  TESForm *v20; // ebp
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *CurrentWorldspace; // edi
  float *v23; // eax
  TESWorldSpace *v24; // eax
  TESObjectREFR *v25; // edi
  double v26; // st7
  TESWorldSpace *v27; // eax
  TESWorldSpace *v28; // eax
  float v30; // [esp+Ch] [ebp-44h]
  float v31; // [esp+20h] [ebp-30h]
  int v32; // [esp+24h] [ebp-2Ch]
  float v33; // [esp+28h] [ebp-28h]
  int a2; // [esp+2Ch] [ebp-24h] BYREF
  float v35; // [esp+30h] [ebp-20h]
  float v36; // [esp+34h] [ebp-1Ch]
  float v37; // [esp+38h] [ebp-18h] BYREF
  float v38; // [esp+3Ch] [ebp-14h]
  float v39; // [esp+40h] [ebp-10h]
  int v40; // [esp+44h] [ebp-Ch] BYREF
  float v41; // [esp+48h] [ebp-8h]
  float v42; // [esp+4Ch] [ebp-4h]
  float v43; // [esp+54h] [ebp+4h]
  float v44; // [esp+54h] [ebp+4h]
  float v45; // [esp+54h] [ebp+4h]
  int v46; // [esp+54h] [ebp+4h]

  if ( !arg0 )
    return 0.0;
  if ( a3 <= 0.0 )
    return 0.0;
  if ( !IsWeaponReady(arg0) )
    return 0.0;
  if ( ((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0) )
  {
    v5 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0);
    if ( !IsWeaponReady(v5) )
      return 0.0;
  }
  v6 = *(this + 1);
  if ( v6 )
  {
    sub_68B110(v6);
    v8 = v7;
  }
  else
  {
    v8 = &Vector3_InitValue_;
  }
  v9 = arg0->vtbl->GetPos(arg0);
  v37 = *v8 - *v9;
  v38 = v8[1] - v9[1];
  v39 = v8[2] - v9[2];
  v31 = sub_5E65B0(arg0) * flt_B3A4C8;
  v10 = v37 * v37;
  v43 = v38 * v38 + v10 + v39 * v39;
  v44 = sqrt(v43);
  v45 = v44 / v31;
  v11 = v45;
  if ( v45 >= (double)a3 )
  {
    sub_43F350(&v37);
    GetPos = arg0->vtbl->GetPos;
    *(float *)&v40 = v37 * v31;
    v41 = v38 * v31;
    v42 = v31 * v39;
    v10 = a3;
    v37 = *(float *)&v40 * a3;
    v11 = v41 * a3;
    v38 = v11;
    v39 = a3 * v42;
    v17 = GetPos(arg0);
    *(float *)&v40 = v37 + *v17;
    v41 = v17[1] + v38;
    v18 = v17[2];
    a2 = v40;
    v35 = v41;
    v42 = v18 + v39;
    v15 = v42;
    v14 = 0.0;
  }
  else
  {
    v12 = *(this + 1);
    if ( v12 )
      sub_68B110(v12);
    else
      v13 = &Vector3_InitValue_;
    v14 = a3 - v45;
    a2 = *(int *)v13;
    v35 = v13[1];
    v15 = v13[2];
  }
  v33 = v14;
  v36 = v15;
  ParentCell = TESObjectREFR_GetParentCell(arg0);
  v20 = (TESForm *)ParentCell;
  if ( !ParentCell || !TESObjectCELL_IsInterior(ParentCell) )
  {
    LOBYTE(this) = 0;
    v46 = (int)*arg0->vtbl->GetPos(arg0);
    v32 = (int)arg0->vtbl->GetPos(arg0)[1];
    LODWORD(v31) = (int)v35;
    if ( ((v46 ^ (int)*(float *)&a2) & 0xFFFFF000) != 0 || ((v32 ^ LODWORD(v31)) & 0xFFFFF000) != 0 )
      LOBYTE(this) = 1;
    if ( !v20 )
    {
      WorldSpace = TESObjectREFR_GetWorldSpace(arg0);
      v20 = sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)&a2, v35, WorldSpace, 0);
    }
    if ( (_BYTE)this )
    {
      if ( !TES->currentInteriorCell )
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(TES);
        if ( CurrentWorldspace == TESObjectREFR_GetWorldSpace(arg0) )
        {
          v30 = flt_A427E4;
          v23 = arg0->vtbl->GetPos(arg0);
          if ( sub_43F7C0((int *)TES, v23, (float *)&a2, (float *)&v40, v30) )
          {
            v24 = TES::GetCurrentWorldspace(TES);
            v20 = sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)&v40, v41, v24, 0);
            a2 = v40;
            v35 = v41;
            v36 = v42;
          }
        }
      }
    }
  }
  v25 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[2].super.Unk_0C)(arg0);
  TESObjectREFR_SetPosition(arg0, *(float *)&a2, v35, v36);
  v26 = flt_A32048;
  sub_4D89D0(flt_A32048);
  if ( v25 )
  {
    TESObjectREFR_SetPosition(v25, v33, *(float *)&a2, v35);
    v26 = flt_A32048;
    sub_4D89D0(flt_A32048);
  }
  if ( v20 != (TESForm *)TESObjectREFR_GetParentCell(arg0) )
  {
    if ( v25 )
    {
      v27 = TESObjectREFR_GetWorldSpace(v25);
      sub_4DD4B0((int)this, v10, v11, v26, (Actor *)v25, (TESObjectCELL *)v20, v27);
    }
    v28 = TESObjectREFR_GetWorldSpace(arg0);
    sub_4DD4B0((int)this, v10, v11, v26, (Actor *)arg0, (TESObjectCELL *)v20, v28);
  }
  return v31;
}
