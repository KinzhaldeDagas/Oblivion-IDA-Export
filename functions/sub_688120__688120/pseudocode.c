void __userpurge sub_688120(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double st7_0@<st0>, Actor *a5)
{
  Actor *v6; // edi
  char *v7; // eax
  float *v8; // ebx
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  char *v12; // ebx
  float *v13; // eax
  float *v14; // eax
  double v15; // st7
  double v16; // st6
  bhkCharacterProxy *CharProxy; // eax
  double v18; // st7
  _DWORD *v19; // eax
  NiDX92DBufferData *v20; // eax
  NiDX92DBufferData *SurfaceData; // eax
  float *v22; // eax
  double v23; // st7
  char v24; // al
  float *v25; // eax
  const char *v26; // eax
  int v27; // ecx
  const char *v28; // eax
  float *v29; // eax
  TESObjectREFR *linkedDoor; // ecx
  float *v31; // eax
  char *v32; // ecx
  TESObjectREFR *v33; // eax
  int v34; // ecx
  int v35; // edi
  int v36; // eax
  char *v37; // ecx
  int v38; // eax
  float *v39; // eax
  double v40; // st7
  float *v41; // eax
  char *v42; // ecx
  int v43; // eax
  TESObjectREFRVtbl *p_super; // edx
  int v45; // eax
  double v46; // st7
  float *v47; // eax
  bhkCharacterProxy *v48; // eax
  int v49; // eax
  char v50; // al
  float *v51; // eax
  float *v52; // eax
  char *v53; // eax
  char *v54; // eax
  TESObjectREFRVtbl *v55; // edi
  int v56; // eax
  float *v57; // eax
  int v58; // ebx
  int v59; // eax
  const char *v60; // eax
  const char *v61; // eax
  float a4; // [esp+Ch] [ebp-17Ch]
  float *a4a; // [esp+Ch] [ebp-17Ch]
  float a4b; // [esp+Ch] [ebp-17Ch]
  float *a4c; // [esp+Ch] [ebp-17Ch]
  float *a4d; // [esp+Ch] [ebp-17Ch]
  char v67; // [esp+25h] [ebp-163h]
  char v68; // [esp+25h] [ebp-163h]
  char v69; // [esp+26h] [ebp-162h]
  bool v70; // [esp+27h] [ebp-161h]
  char v71; // [esp+27h] [ebp-161h]
  NiDX92DBufferData *v72; // [esp+28h] [ebp-160h]
  float v73; // [esp+28h] [ebp-160h]
  float v74; // [esp+28h] [ebp-160h]
  float v75; // [esp+28h] [ebp-160h]
  char *v76; // [esp+28h] [ebp-160h]
  char v77; // [esp+2Fh] [ebp-159h]
  float v78; // [esp+30h] [ebp-158h]
  float v79; // [esp+30h] [ebp-158h]
  char *v80; // [esp+30h] [ebp-158h]
  char *v81; // [esp+30h] [ebp-158h]
  char v82; // [esp+37h] [ebp-151h]
  float v83; // [esp+38h] [ebp-150h]
  float v84; // [esp+38h] [ebp-150h]
  TeleportData v85; // [esp+3Ch] [ebp-14Ch] BYREF
  float v86; // [esp+58h] [ebp-130h]
  NiPoint3 v87; // [esp+5Ch] [ebp-12Ch] BYREF
  __int64 v88; // [esp+68h] [ebp-120h] BYREF
  float v89; // [esp+70h] [ebp-118h]
  char Format[260]; // [esp+74h] [ebp-114h] BYREF
  unsigned int v91; // [esp+184h] [ebp-4h]

  v6 = (Actor *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetMountedHorse)(
                  a5,
                  st7_0,
                  a3,
                  a2);
  if ( !v6 || !sub_5E1030(a5) )
    v6 = a5;
  if ( !IsWeaponReady(v6) )
    return;
  sub_5E05F0(v6, 0x30);
  sub_68B4F0((int *)a1, a2, a3, (float ***)a5);
  if ( byte_B3C08A )
  {
    if ( !*(_DWORD *)(a1 + 0x28) )
      sub_685EA0((_DWORD *)a1, (int)v6);
  }
  v7 = (char *)sub_42B410((BSExtraData *)(a1 + 0x14));
  v72 = (NiDX92DBufferData *)v7;
  if ( !v7 )
  {
    ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1);
    ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1);
    if ( *(char *)(a1 + 0x2C) < 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1);
    goto LABEL_148;
  }
  v8 = (float *)sub_6899C0(v7);
  v9 = a5->vtbl->super.super.GetPos(a5);
  v83 = *v9 - *v8;
  *(float *)&v85.linkedDoor = v9[1] - v8[1];
  v78 = v9[2] - v8[2];
  v70 = v78 > 0.0;
  v79 = fabs(v78);
  *(float *)&v85.linkedDoor = v83 * v83 + *(float *)&v85.linkedDoor * *(float *)&v85.linkedDoor + 0.0 * 0.0;
  *(float *)&v85.linkedDoor = sqrt(*(float *)&v85.linkedDoor);
  v77 = 1;
  v84 = *(float *)&v85.linkedDoor;
  v10 = *(float *)&v85.linkedDoor;
  v11 = fCostant_100;
  if ( *(float *)(a1 + 0x1C) >= (double)*(float *)&v85.linkedDoor )
  {
    *(float *)(a1 + 0x24) = 0.0;
  }
  else if ( v11 > v10 || *(float *)(a1 + 0x1C) < v11 )
  {
    v77 = 0;
    *(float *)(a1 + 0x24) = v10 - *(float *)(a1 + 0x1C);
  }
  else
  {
    v77 = 0;
  }
  v67 = 0;
  if ( bSnapToAngle || byte_B1582C )
  {
    v12 = (char *)v72;
  }
  else
  {
    v12 = (char *)v72;
    if ( NiDX92DBufferData::GetSurfaceData(v72) )
    {
      v73 = flt_A417B4;
      if ( MobileObject_GetCharProxy((MobileObject *)v6) )
      {
        if ( (*((_BYTE *)MobileObject_GetCharProxy((MobileObject *)v6) + 0x1F4) & 1) != 0 )
          v73 = 0.0;
      }
      if ( sub_5E0510(v6) )
        v73 = v73 + dbl_A46E48;
      if ( sub_5E3290(v6) )
        v73 = v73 + dbl_A46E48;
      v13 = (float *)sub_6899C0(v12);
      if ( sub_684B30((MobileObject *)v6, v13, v73, 1) )
        v67 = 1;
    }
  }
  if ( sub_5E0510(v6) )
  {
    sub_68A160((_DWORD *)a1);
    *(float *)&v85.linkedDoor = sub_4D7E30((float *)a5, v14);
    v74 = sub_5E3750((TESObjectREFR *)v6) * flt_B3A450;
    if ( v74 > *(float *)&v85.linkedDoor - *(float *)(a1 + 0xC) )
    {
      sub_5E05F0(v6, 0x200);
      sub_5E0610(v6, 0x100);
    }
  }
  v75 = flt_B3A458;
  if ( NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v12) || !sub_68A140((_DWORD *)a1) )
  {
    if ( !sub_68CA50(v12) || !Actor_IsSwimming(v6) )
      goto LABEL_38;
    v15 = sub_5E0660(v6) * dbl_A31C70;
  }
  else
  {
    v15 = sub_6899D0((float *)a1);
  }
  v75 = v15;
LABEL_38:
  v69 = 0;
  v82 = 1;
  if ( Actor_IsSwimming(a5) )
  {
    if ( sub_68CA50(v12) || !NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v12) )
    {
      if ( v75 <= (double)v79 )
      {
        if ( v84 < (double)v75 )
          v82 = 0;
      }
      else
      {
        v69 = 1;
      }
    }
    else
    {
      v69 = 1;
    }
  }
  else if ( sub_68CA20(v12) || !NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v12) )
  {
    if ( flt_B3A470 > (double)v79 )
      v69 = 1;
  }
  else
  {
    v69 = 1;
  }
  v16 = v75;
  if ( v75 > (double)v84 || (v16 = flt_B3A478, v16 < *(float *)(a1 + 0x24)) || v67 )
  {
    if ( v69 )
    {
      v71 = 0;
      if ( sub_68CA20(v12) )
      {
        v71 = 1;
        v19 = (_DWORD *)sub_6899C0(v12);
        *(_DWORD *)(a1 + 0x3C) = *v19;
        *(_DWORD *)(a1 + 0x40) = v19[1];
        *(_DWORD *)(a1 + 0x44) = v19[2];
      }
      sub_68C170((int *)(a1 + 0x14), v12);
      v20 = (NiDX92DBufferData *)sub_42B410((BSExtraData *)(a1 + 0x14));
      v12 = (char *)v20;
      v68 = 0;
      if ( !v20 )
        goto LABEL_84;
      SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(v20);
      v80 = (char *)SurfaceData;
      if ( SurfaceData )
      {
        if ( !NiDX92DBufferData::GetSurfaceData(SurfaceData) )
        {
          v87 = *(NiPoint3 *)v6->vtbl->super.super.GetPos((TESObjectREFR *)v6);
          v22 = (float *)sub_6899C0(v80);
          v23 = flt_A34A80;
          v85.yRot = *v22;
          v85.zRot = v22[1];
          a4 = v23;
          v86 = v22[2];
          if ( sub_480520(&v87.x, &v85.yRot, a4) < 0 && v86 - v87.z < fCostant_100 )
          {
            if ( v71 )
              v24 = sub_687C30((MobileObject *)v6, (NiPoint3 *)&v85.yRot, &v87.x);
            else
              v24 = sub_687AA0((MobileObject *)v6, (NiPoint3 *)&v85.yRot, &v87);
            if ( v24 )
            {
              sub_68C170((int *)(a1 + 0x14), v12);
              v12 = (char *)sub_42B410((BSExtraData *)(a1 + 0x14));
              v68 = 1;
            }
          }
        }
      }
      if ( v12 )
      {
        if ( !v68 )
        {
          a4a = (float *)sub_6899C0(v12);
          v25 = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6);
          sub_4121A0(v25, (float *)&v88, a4a);
          sub_68CB30(&v85);
          a4b = flt_A342A4;
          v91 = 0;
          if ( sub_47F6F0((float *)&v88, a4b) < 0 && !sub_686F50((MobileObject *)v6, v12, &v85, 0, 0) )
          {
            sub_684EC0((int **)a1);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1);
            ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1);
            ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1);
            if ( srcObj == (TESChildCELL *)a5 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908) )
            {
              v26 = v6->vtbl->super.super.super.GetEditorName((TESForm *)v6);
              _sprintf(Format, "Actor '%s' stopping path at invalid point.", v26);
              Interface_ConsolePrint(Format);
            }
            v91 = 0xFFFFFFFF;
            TESTexture::ClearComponentReferences(&v85);
            return;
          }
          v91 = 0xFFFFFFFF;
          TESTexture::ClearComponentReferences(&v85);
        }
      }
      else
      {
LABEL_84:
        if ( *(char *)(a1 + 0x2C) < 0 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1);
        ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1);
        ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1);
        sub_683C20((unsigned int *)a1);
        v27 = *(_DWORD *)(a1 + 0x30);
        if ( v27 )
          sub_680C90(v27);
        if ( srcObj == (TESChildCELL *)a5 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908) )
        {
          v28 = a5->vtbl->super.super.super.GetEditorName(a5);
          _sprintf(Format, "Actor '%s' indicating pathing completed succesfully.", v28);
          Interface_ConsolePrint(Format);
        }
      }
      *(float *)(a1 + 0x1C) = flt_A32048;
      v77 = 0;
      *(float *)(a1 + 0x24) = 0.0;
      *(float *)(a1 + 0x20) = 0.0;
      if ( !v12 )
      {
LABEL_148:
        sub_686060((_DWORD *)a1, (int)v6);
        return;
      }
      v85.linkedDoor = (TESObjectREFR *)sub_6899C0(v12);
      v29 = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6);
      linkedDoor = v85.linkedDoor;
      *(float *)&v85.linkedDoor = *v29 - *(float *)&v85.linkedDoor->vtbl;
      v85.x = v29[1] - *(float *)&linkedDoor->member.super.type;
      v85.y = v29[2] - *(float *)&linkedDoor->member.super.flags;
      v89 = 0.0;
      v88 = *(_QWORD *)&v85.linkedDoor;
      v84 = sub_404C90((float *)&v88);
    }
    else if ( !Actor_IsSwimming(v6) && (!sub_5E34B0(v6) || !v70) && v84 < dbl_A3F3D0 )
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)v6);
      if ( CharProxy )
      {
        if ( !sub_88D370((_DWORD *)CharProxy + 0x78) )
        {
          v18 = flt_A342A4;
          *(_DWORD *)(a1 + 0x48) = 2;
          *(float *)(a1 + 0x20) = v18;
        }
      }
    }
  }
  v31 = (float *)sub_6899C0(v12);
  if ( sub_43F840(TES, v31) )
  {
    v32 = *(char **)(a1 + 0x30);
    if ( v32 )
    {
      v33 = (TESObjectREFR *)sub_680CB0(v32);
      v34 = *(_DWORD *)(a1 + 0x30);
      v85.linkedDoor = v33;
      sub_681DF0(v34, v16, (MobileObject *)v6, v12);
      if ( sub_680CB0(*(char **)(a1 + 0x30)) == 6 )
      {
        v35 = *(_DWORD *)a1;
        sub_68A160((_DWORD *)a1);
        (*(void (__thiscall **)(int, Actor *, int, _DWORD))(v35 + 0x14))(a1, a5, v36, 0);
        return;
      }
      if ( !sub_680CB0(*(char **)(a1 + 0x30)) )
      {
        if ( v85.linkedDoor )
        {
          *(float *)(a1 + 0x1C) = flt_A32048;
          *(float *)(a1 + 0x24) = 0.0;
          *(float *)(a1 + 0x20) = 0.0;
        }
      }
    }
  }
  if ( v82 )
    sub_686150(a1, v6);
  v37 = *(char **)(a1 + 0x30);
  if ( !v37 || sub_680CB0(v37) != 7 )
  {
    if ( sub_683DB0((char **)a1) )
    {
LABEL_113:
      if ( byte_B1582C )
      {
        if ( sub_5E05B0(v6) )
        {
          sub_5E05D0(v6);
          sub_46A9C0(v6, 1);
          a4c = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6);
          v39 = (float *)sub_6899C0(v12);
          sub_4121A0(v39, &v85.yRot, a4c);
          sub_43F350(&v85.yRot);
          *(float *)&v85.linkedDoor = flt_B33E9C;
          v40 = sub_5E65B0((TESObjectREFR *)a5);
          *(float *)&v85.linkedDoor = v40 * *(float *)&v85.linkedDoor;
          NiPoint3::MutliplyByValue((NiPoint3 *)&v85.yRot, *(float *)&v85.linkedDoor);
          v41 = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6);
          v87.x = *v41 + v85.yRot;
          v87.y = v41[1] + v85.zRot;
          v87.z = v41[2] + v86;
          TESObjectREFR_SetPosition((TESObjectREFR *)v6, v87.x, v87.y, v87.z);
        }
      }
      goto LABEL_148;
    }
    v38 = (int)v6->vtbl->super.super.GetAnimData((TESObjectREFR *)v6);
    if ( !byte_B1582C && (!v38 || !sub_470F40(v38)) )
    {
      v77 = 0;
LABEL_110:
      *(float *)(a1 + 0x1C) = flt_A32048;
      *(float *)(a1 + 0x24) = 0.0;
      *(float *)(a1 + 0x20) = 0.0;
LABEL_111:
      if ( v77 )
        *(float *)(a1 + 0x1C) = v84;
      goto LABEL_113;
    }
    if ( (*(_BYTE *)(a1 + 0x2C) & 0x20) != 0 )
      goto LABEL_110;
    v42 = *(char **)(a1 + 0x30);
    if ( v42 )
    {
      if ( sub_680CB0(v42) == 5 )
        goto LABEL_110;
    }
    if ( sub_685880(a1, v84) )
      goto LABEL_111;
    sub_683DF0((float *)a1, v6);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x2C))(a1) )
      goto LABEL_111;
    if ( *(float *)(a1 + 0x3C) == dbl_A3A5B0 && !a5->vtbl->IsInCombat(a5, 1) && !Actor_IsSwimming(a5) )
    {
      v43 = sub_6899C0(v12);
      p_super = &a5->vtbl->super.super;
      *(double *)&v85.linkedDoor = *(float *)(v43 + 8);
      v45 = (int)p_super->GetPos((TESObjectREFR *)a5);
      *(double *)&v85.linkedDoor = *(double *)&v85.linkedDoor - *(float *)(v45 + 8);
      v46 = sub_5E0660(a5);
      if ( v46 < *(double *)&v85.linkedDoor )
      {
        a4d = a5->vtbl->super.super.GetPos(a5);
        v47 = (float *)sub_6899C0(v12);
        sub_4121A0(v47, (float *)&v88, a4d);
        v89 = 0.0;
        if ( sub_404C90((float *)&v88) < flt_A2FF44 )
          goto LABEL_134;
      }
    }
    v48 = MobileObject_GetCharProxy((MobileObject *)v6);
    if ( v48 )
    {
      if ( sub_892D90((__m128 *)v48)
        || (v49 = (int)v6->vtbl->super.super.GetPos((TESObjectREFR *)v6), sub_8949C0(v49, 0, 0, 0), !v50) )
      {
LABEL_134:
        v76 = v12;
        if ( !sub_68CA20(v12) )
        {
          v51 = (float *)sub_6899C0(v12);
          v81 = sub_67D820(v51, (TESObjectREFR *)v6, 0, 0);
          if ( v81 )
          {
            v52 = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6);
            v53 = sub_67D820(v52, (TESObjectREFR *)v6, 0, 0);
            if ( !v53 || v53 == v81 )
            {
              v54 = sub_4BEF40(v81);
              v76 = (char *)sub_68C280((int *)(a1 + 0x14), v54, 0);
            }
          }
        }
        if ( v76 )
        {
          v55 = &a5->vtbl->super.super;
          v56 = sub_6899C0(v76);
          ((void (__thiscall *)(Actor *, int))v55[1].super.Unk_09)(a5, v56);
          *(float *)(a1 + 0x1C) = flt_A32048;
          *(float *)(a1 + 0x24) = 0.0;
          *(float *)(a1 + 0x20) = 0.0;
          return;
        }
      }
    }
  }
  if ( sub_68CA20(v12) && (v57 = (float *)sub_6899C0(v12), sub_6849F0((float *)a1, v57, (TESObjectREFR *)a5)) )
  {
    v58 = *(_DWORD *)a1;
    sub_68A160((_DWORD *)a1);
    (*(void (__thiscall **)(int, Actor *, int, int))(v58 + 0x14))(a1, a5, v59, 1);
    if ( srcObj == (TESChildCELL *)a5 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908) )
    {
      v60 = v6->vtbl->super.super.super.GetEditorName((TESForm *)v6);
      _sprintf(Format, "Actor '%s' added bad connection for failure. Trying again.", v60);
      Interface_ConsolePrint(Format);
    }
  }
  else
  {
    sub_684EC0((int **)a1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1);
    ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1);
    ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1);
    if ( srcObj == (TESChildCELL *)a5 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908) )
    {
      v61 = v6->vtbl->super.super.super.GetEditorName((TESForm *)v6);
      _sprintf(Format, "Actor '%s' indicating pathfinding has failed.", v61);
      Interface_ConsolePrint(Format);
    }
  }
}
