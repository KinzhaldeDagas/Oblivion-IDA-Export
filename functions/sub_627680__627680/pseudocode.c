int __thiscall sub_627680(TESPackage *this, int a2, TESChildCELL *arg4, int a4, float argC)
{
  TESObjectREFR *v6; // esi
  _DWORD *v7; // eax
  TESForm *v8; // eax
  TESWorldSpace *WorldSpace; // ebp
  char v10; // al
  TESObjectCELL *ParentCell; // eax
  int v12; // eax
  bool v13; // zf
  _BYTE *v14; // ecx
  float *v15; // eax
  float v16; // edx
  float v17; // ecx
  float v18; // eax
  int (__thiscall **vtbl)(TESChildCELL *); // edx
  float *v20; // eax
  float v21; // ecx
  float v22; // edx
  float v23; // eax
  TESObjectCELL *v24; // eax
  int *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  float *v29; // [esp-4h] [ebp-58h]
  float a3; // [esp+0h] [ebp-54h]
  float *v31; // [esp+4h] [ebp-50h]
  float a5; // [esp+8h] [ebp-4Ch]
  int v33; // [esp+24h] [ebp-30h] BYREF
  float v34; // [esp+28h] [ebp-2Ch]
  float v35; // [esp+2Ch] [ebp-28h]
  float v36; // [esp+30h] [ebp-24h]
  float v37; // [esp+34h] [ebp-20h]
  float v38; // [esp+38h] [ebp-1Ch]
  float v39; // [esp+3Ch] [ebp-18h]
  float v40; // [esp+40h] [ebp-14h]
  float v41; // [esp+44h] [ebp-10h]
  int v42; // [esp+48h] [ebp-Ch] BYREF
  float v43; // [esp+4Ch] [ebp-8h]
  float v44; // [esp+50h] [ebp-4h]
  float v45; // [esp+64h] [ebp+10h]

  if ( !sub_4D7930(arg4) || (*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0xE0))(arg4) )
  {
    if ( (*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0xE0))(arg4) )
    {
      v10 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v6 = sub_4D7930(arg4);
    v7 = OblivionDynamicCast(
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      if ( v7 )
      {
        if ( v7[0x16] )
        {
          v8 = (TESForm *)(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0x5C))(arg4);
          ExtraDataList::SetOrRemoveExtraOwnership(&v6->member.baseExtraList, v8);
          WorldSpace = TESObjectREFR_GetWorldSpace(v6);
          if ( WorldSpace == TESObjectREFR_GetWorldSpace((TESObjectREFR *)arg4)
            && !v6->vtbl->IsDead(v6, 0)
            && (v6->member.super.flags & 0x800) == 0
            && TesObjectREF_GetDistance(v6, (TESObjectREFR *)arg4, 0) <= dbl_A3F470 )
          {
            *((_BYTE *)this + 0x65) = 1;
            v10 = 0;
            goto LABEL_14;
          }
        }
      }
    }
  }
  v10 = LOBYTE(argC);
LABEL_14:
  if ( !*((_BYTE *)this + 0x3C) )
  {
    v27 = (_DWORD *)sub_566B30(this, (int)&v42, (Actor *)arg4);
    *(_DWORD *)a2 = *v27;
    *(_DWORD *)(a2 + 4) = v27[1];
    *(_DWORD *)(a2 + 8) = v27[2];
    goto LABEL_28;
  }
  if ( a4 )
  {
    dword_B3B924 = a4;
    *((_DWORD *)this + 0x17) = 0;
    if ( v10 )
    {
      if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)arg4) && Actor::CanUSeDoor_((Actor *)arg4) )
      {
        a5 = flt_A578C0;
        v31 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0x5D))(arg4);
        a3 = flt_A578C0;
        v29 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0x5D))(arg4);
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)arg4);
        sub_446B90(
          ParentCell,
          v29,
          a3,
          v31,
          a5,
          (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_626CC0,
          (int)arg4);
      }
    }
    v12 = dword_B3B91C;
    v13 = dword_B3B91C == 0;
    dword_B3B924 = 0;
    if ( !v13 )
    {
      *((_DWORD *)this + 0x17) = v12;
      dword_B3B91C = 0;
    }
    v14 = *((_BYTE **)this + 0x17);
    if ( v14 )
    {
      sub_4D76F0(v14);
      goto LABEL_26;
    }
    v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4);
    v16 = v15[1];
    v17 = *v15;
    v18 = v15[2];
    v40 = v16;
    vtbl = (int (__thiscall **)(TESChildCELL *))arg4->vtbl;
    v39 = v17;
    v41 = v18;
    v20 = (float *)vtbl[0x5D](arg4);
    v21 = *v20;
    v45 = flt_B37030;
    v22 = v20[1];
    v23 = v20[2];
    v36 = v21;
    v37 = v22;
    v38 = v23;
    *(float *)&v33 = v21 - v39;
    v34 = v22 - v40;
    v35 = v23 - v41;
    sub_43F350((float *)&v33);
    v39 = *(float *)&v33 * v45;
    v40 = v34 * v45;
    v41 = v45 * v35;
    *(float *)&v42 = v39 + v36;
    v33 = v42;
    v43 = v40 + v37;
    v34 = v43;
    v44 = v41 + v38;
    v35 = v44;
    v24 = TESObjectREFR_GetParentCell((TESObjectREFR *)arg4);
    v25 = sub_5E2E20((TESObjectREFR *)arg4, &v42, v33, SLODWORD(v34), v35, v24, 0.0, 0, 0);
    *(_DWORD *)a2 = *v25;
    *(_DWORD *)(a2 + 4) = v25[1];
    *(_DWORD *)(a2 + 8) = v25[2];
    if ( sub_8AA350((float *)a2, (float *)&v33) )
    {
      v26 = sub_5E03E0((TESObjectREFR *)arg4, &v42, (int)&v33);
LABEL_26:
      *(_DWORD *)a2 = *v26;
      *(_DWORD *)(a2 + 4) = v26[1];
      *(_DWORD *)(a2 + 8) = v26[2];
    }
  }
LABEL_28:
  *((_DWORD *)this + 0x10) = *(_DWORD *)a2;
  *((_DWORD *)this + 0x11) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 0x12) = *(_DWORD *)(a2 + 8);
  return a2;
}
