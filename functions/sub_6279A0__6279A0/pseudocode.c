int __thiscall sub_6279A0(TESPackage *this, int a2, TESChildCELL *arg4, int a4, float argC)
{
  TESObjectCELL *ParentCell; // eax
  _BYTE *v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  float *v10; // eax
  float v11; // edx
  float v12; // ecx
  float v13; // eax
  int (__thiscall **vtbl)(TESChildCELL *); // edx
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  TESObjectCELL *v19; // eax
  int *v20; // eax
  _DWORD *v21; // eax
  float *v22; // eax
  float v23; // edx
  float v24; // ecx
  float v25; // eax
  int (__thiscall **v26)(TESChildCELL *); // edx
  float *v27; // eax
  float v28; // ecx
  float v29; // edx
  float v30; // eax
  TESObjectCELL *v31; // eax
  int *v32; // eax
  float *v34; // [esp-4h] [ebp-64h]
  float a3; // [esp+0h] [ebp-60h]
  float *v36; // [esp+4h] [ebp-5Ch]
  float a5; // [esp+8h] [ebp-58h]
  float v38; // [esp+24h] [ebp-3Ch] BYREF
  float v39; // [esp+28h] [ebp-38h]
  float v40; // [esp+2Ch] [ebp-34h]
  int v41; // [esp+30h] [ebp-30h] BYREF
  float v42; // [esp+34h] [ebp-2Ch]
  float v43; // [esp+38h] [ebp-28h]
  float v44; // [esp+3Ch] [ebp-24h]
  float v45; // [esp+40h] [ebp-20h]
  float v46; // [esp+44h] [ebp-1Ch]
  float v47; // [esp+48h] [ebp-18h]
  float v48; // [esp+4Ch] [ebp-14h]
  float v49; // [esp+50h] [ebp-10h]
  int v50; // [esp+54h] [ebp-Ch] BYREF
  float v51; // [esp+58h] [ebp-8h]
  float v52; // [esp+5Ch] [ebp-4h]
  float v53; // [esp+70h] [ebp+10h]
  float v54; // [esp+70h] [ebp+10h]

  if ( *((_BYTE *)this + 0x3C) != 1 )
  {
    v9 = (_DWORD *)sub_566B30(this, (int)&v50, (Actor *)arg4);
    goto LABEL_17;
  }
  dword_B3B924 = a4;
  if ( LOBYTE(argC) )
  {
    if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)arg4)
      && !(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0xE0))(arg4)
      && Actor::CanUSeDoor_((Actor *)arg4) )
    {
      a5 = flt_A578C0;
      v36 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0x5D))(arg4);
      a3 = flt_A578C0;
      v34 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0x5D))(arg4);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)arg4);
      sub_446B90(ParentCell, v34, a3, v36, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_626CC0, (int)arg4);
    }
  }
  v7 = (_BYTE *)dword_B3B91C;
  v8 = dword_B3B91C == 0;
  dword_B3B924 = 0;
  if ( !v8 )
  {
    dword_B3B91C = 0;
    *((_DWORD *)this + 0x17) = v7;
    sub_4D76F0(v7);
LABEL_17:
    *(_DWORD *)a2 = *v9;
    *(_DWORD *)(a2 + 4) = v9[1];
    *(_DWORD *)(a2 + 8) = v9[2];
    goto LABEL_18;
  }
  if ( a4 )
  {
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4);
    v11 = v10[1];
    v12 = *v10;
    v13 = v10[2];
    v45 = v11;
    vtbl = (int (__thiscall **)(TESChildCELL *))arg4->vtbl;
    v44 = v12;
    v46 = v13;
    v15 = (float *)vtbl[0x5D](arg4);
    v16 = *v15;
    v53 = flt_B37028;
    v17 = v15[1];
    v18 = v15[2];
    *(float *)&v41 = v16;
    v42 = v17;
    v43 = v18;
    v38 = v16 - v44;
    v39 = v17 - v45;
    v40 = v18 - v46;
    sub_43F350(&v38);
    v44 = v38 * v53;
    v45 = v39 * v53;
    v46 = v53 * v40;
    v47 = v44 + *(float *)&v41;
    v38 = v47;
    v48 = v45 + v42;
    v39 = v48;
    v49 = v46 + v43;
    v40 = v49;
    v19 = TESObjectREFR_GetParentCell((TESObjectREFR *)arg4);
    v20 = sub_5E2E20((TESObjectREFR *)arg4, &v50, SLODWORD(v38), SLODWORD(v39), v40, v19, 0.0, 0, 0);
    *(_DWORD *)a2 = *v20;
    *(_DWORD *)(a2 + 4) = v20[1];
    *(_DWORD *)(a2 + 8) = v20[2];
    if ( sub_8AA350((float *)a2, &v38) || sub_4D7E30((float *)arg4, (float *)a2) < fConst_200 )
    {
      v21 = sub_5E03E0((TESObjectREFR *)arg4, &v50, (int)&v38);
      *(_DWORD *)a2 = *v21;
      *(_DWORD *)(a2 + 4) = v21[1];
      *(_DWORD *)(a2 + 8) = v21[2];
    }
    if ( sub_8AA350((float *)a2, &v38) )
    {
      v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4);
      v23 = v22[1];
      v24 = *v22;
      v25 = v22[2];
      v48 = v23;
      v26 = (int (__thiscall **)(TESChildCELL *))arg4->vtbl;
      v47 = v24;
      v49 = v25;
      v27 = (float *)v26[0x5D](arg4);
      v28 = *v27;
      v54 = flt_B37028;
      v29 = v27[1];
      v30 = v27[2];
      v44 = v28;
      v45 = v29;
      v46 = v30;
      *(float *)&v41 = v47 - v28;
      v42 = v48 - v29;
      v43 = v49 - v30;
      sub_43F350((float *)&v41);
      v47 = *(float *)&v41 * v54;
      v48 = v42 * v54;
      v49 = v54 * v43;
      *(float *)&v50 = v47 + v44;
      v41 = v50;
      v51 = v48 + v45;
      v42 = v51;
      v52 = v49 + v46;
      v43 = v52;
      v31 = TESObjectREFR_GetParentCell((TESObjectREFR *)arg4);
      v32 = sub_5E2E20((TESObjectREFR *)arg4, &v50, v41, SLODWORD(v42), v43, v31, 0.0, 0, 0);
      *(_DWORD *)a2 = *v32;
      *(_DWORD *)(a2 + 4) = v32[1];
      *(_DWORD *)(a2 + 8) = v32[2];
      if ( sub_8AA350((float *)a2, (float *)&v41) )
      {
        v9 = sub_5E03E0((TESObjectREFR *)arg4, &v50, (int)&v41);
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  *((_DWORD *)this + 0x10) = *(_DWORD *)a2;
  *((_DWORD *)this + 0x11) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 0x12) = *(_DWORD *)(a2 + 8);
  return a2;
}
