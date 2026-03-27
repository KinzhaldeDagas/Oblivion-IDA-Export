void __userpurge sub_66B710(PlayerCharacter *this@<ecx>, double a2@<st0>, double st5_0@<st2>, char a4)
{
  bool v5; // bl
  double v6; // st7
  double v7; // st7
  float *v8; // esi
  float *v9; // eax
  bool v10; // zf
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  _DWORD *unk05C; // esi
  int v15; // eax
  double v16; // st6
  int v17; // eax
  int v18; // esi
  float *v19; // esi
  float *v20; // eax
  float y; // ecx
  double v22; // st7
  int v23; // eax
  int *unk1F0; // ecx
  Actor *v25; // eax
  NiNode *NiNode; // eax
  double v27; // st7
  double v28; // st6
  double v29; // st7
  double v30; // st7
  double v31; // st6
  double v32; // st6
  double v33; // st6
  double v34; // st7
  float *v35; // eax
  NiTransform *v36; // eax
  float x; // esi
  float v38; // edi
  float z; // ebx
  double v40; // st7
  SceneGraph *v41; // ebx
  float *vtbl; // eax
  float v43; // edx
  float v44; // ecx
  NiAVObjectVtbl *v45; // eax
  NiAVObject *v46; // ecx
  float *sound; // esi
  float v48; // eax
  float v49; // edx
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v51; // edi
  int v52; // eax
  int v53; // ecx
  int v54; // edx
  float v55; // esi
  float *camera; // esi
  double v57; // st7
  double v58; // st7
  double v59; // st6
  float v60; // esi
  float v61; // edi
  float v62; // ebx
  float *v63; // eax
  float v64; // edx
  float v65; // [esp+8h] [ebp-F8h]
  float v66; // [esp+Ch] [ebp-F4h]
  SceneGraph *v67; // [esp+24h] [ebp-DCh]
  float v68; // [esp+24h] [ebp-DCh]
  float v69; // [esp+24h] [ebp-DCh]
  float v70; // [esp+24h] [ebp-DCh]
  float v71; // [esp+24h] [ebp-DCh]
  float v72; // [esp+24h] [ebp-DCh]
  float v73; // [esp+24h] [ebp-DCh]
  float v74; // [esp+24h] [ebp-DCh]
  float v75; // [esp+24h] [ebp-DCh]
  float v76; // [esp+24h] [ebp-DCh]
  float v77; // [esp+28h] [ebp-D8h]
  float v78; // [esp+28h] [ebp-D8h]
  float v79; // [esp+28h] [ebp-D8h]
  float v80; // [esp+28h] [ebp-D8h]
  float v81; // [esp+28h] [ebp-D8h]
  float v82; // [esp+28h] [ebp-D8h]
  float v83; // [esp+28h] [ebp-D8h]
  float a3; // [esp+2Ch] [ebp-D4h]
  float a3a; // [esp+2Ch] [ebp-D4h]
  float a3b; // [esp+2Ch] [ebp-D4h]
  float a3c; // [esp+2Ch] [ebp-D4h]
  float a3d; // [esp+2Ch] [ebp-D4h]
  float a3e; // [esp+2Ch] [ebp-D4h]
  float a3f; // [esp+2Ch] [ebp-D4h]
  NiPoint3 CameraPosition; // [esp+30h] [ebp-D0h] BYREF
  NiPoint3 v92; // [esp+3Ch] [ebp-C4h]
  NiPoint3 v93; // [esp+48h] [ebp-B8h]
  float v94; // [esp+54h] [ebp-ACh] BYREF
  float v95; // [esp+58h] [ebp-A8h]
  int v96; // [esp+5Ch] [ebp-A4h]
  float a1; // [esp+60h] [ebp-A0h]
  NiPoint3 PlayerPosition; // [esp+64h] [ebp-9Ch] BYREF
  _BYTE v99[84]; // [esp+70h] [ebp-90h] BYREF
  float v100[9]; // [esp+C4h] [ebp-3Ch] BYREF
  float v101[3]; // [esp+E8h] [ebp-18h] BYREF
  unsigned int v102; // [esp+FCh] [ebp-4h]

  ((void (__usercall *)(PlayerCharacter *@<ecx>, double@<st0>))this->vtbl->super.super.GetZRotation)(this, a2);
  flt_B3BAC8 = a2;
  flt_B3BAC4 = sub_4A9720((Actor *)this);
  v67 = g_worldScenegraph;
  if ( this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) )
    this->firstPersonNiNodeTranslateZ = (1.0 - flt_B33E9C * dbl_A3C770) * this->firstPersonNiNodeTranslateZ;
  if ( !this->isThirdPerson && !VanityCamState )
  {
    NiMatrix33_InitRotationTransform((float *)v99, flt_B3BAC8);
    NiMatrix33_InitRotationTransposedTransform___((float *)&v99[0x30], flt_B3BAC4);
    qmemcpy(v99, NiMAtrix33_Multiply((float *)v99, v100, (float *)&v99[0x30]), 0x24u);
    v5 = sub_5E6C10((MobileObject *)this);
    if ( v5 )
      v6 = 0.0;
    else
      v6 = *(float *)(CameraP1 + 0x3C);
    v77 = v6;
    v78 = -v77 * dbl_A3D5B8 * dbl_A2FAA0;
    NiMatrix33_InitRotationTransform((float *)&v99[0x30], v78);
    qmemcpy(v99, NiMAtrix33_Multiply((float *)v99, v100, (float *)&v99[0x30]), 0x24u);
    if ( v5 )
      v7 = 0.0;
    else
      v7 = *(float *)(CameraP1 + 0x40);
    v79 = v7;
    v80 = v79 * dbl_A3D5B8 * dbl_A2FAA0;
    NiMatrix33_InitRotationTransposedTransform___((float *)&v99[0x30], v80);
    v8 = NiMAtrix33_Multiply((float *)v99, v100, (float *)&v99[0x30]);
    v9 = (float *)CameraP1;
    v10 = CameraP1 == 0;
    qmemcpy(v99, v8, 0x24u);
    if ( !v10 )
    {
      v11 = v9[0x22];
      v12 = v9[0x23];
      v13 = v9[0x24];
      v93.x = v11;
      v93.y = v12;
      v93.z = v13;
    }
    unk05C = (_DWORD *)this->super.super.super.process[2].unk05C;
    v15 = sub_477EC0(&this->super.ActorSkinInfo->Bip01Node, 0);
    v81 = sub_4710B0(unk05C, v15);
    v16 = v81;
    if ( v81 < 1.0 )
    {
      v17 = P3Camera;
      v18 = Camera1PBiped;
      v10 = Camera1PBiped == 0;
      a1 = *(float *)(P3Camera + 0x8C) - v93.y;
      a3 = *(float *)(v17 + 0x90) - v93.z;
      CameraPosition.x = *(float *)(v17 + 0x88) - v93.x;
      v82 = v81 * flt_B36BD0;
      CameraPosition.x = CameraPosition.x * v82;
      CameraPosition.y = a1 * v82;
      CameraPosition.z = v82 * a3;
      st5_0 = v93.x + CameraPosition.x;
      v93.x = st5_0;
      v16 = v93.y + CameraPosition.y;
      v93.y = v16;
      v93.z = v93.z + CameraPosition.z;
      if ( !v10 )
      {
        v19 = (float *)(v18 + 0x54);
        v20 = sub_710250(&v94, &CameraPosition.x, (float *)&this->firstPersonNiNode->members.super.m_localTransform);
        v92.x = *v20 + *v19;
        v92.y = v20[1] + v19[1];
        y = v92.y;
        v22 = v20[2] + v19[2];
        v23 = Camera1PBiped + 0x54;
        *(float *)v23 = v92.x;
        *(float *)(v23 + 4) = y;
        v92.z = v22;
        *(float *)(v23 + 8) = v92.z;
        NiAVObject_UpdateNiAVObject((NiAVObject *)Camera1PBiped, 0.0, 1);
      }
    }
    unk1F0 = (int *)this->unk1F0;
    if ( unk1F0 )
    {
      if ( sub_531F10(unk1F0) )
      {
        sub_531E90((int *)this->unk1F0, 0);
        if ( this->vtbl->super.GetMountedHorse(this) )
        {
          dword_B3BB00 = 0;
          flt_B14E54 = 1.0;
          v25 = (Actor *)this->vtbl->super.GetMountedHorse(this);
          sub_5EE1B0(v25, 1.0);
        }
      }
    }
    goto LABEL_42;
  }
  NiNode = TESObjectREFR::GetNiNode((TESObjectREFR *)this);
  v10 = VanityCamState == 0;
  PlayerPosition = NiNode->members.super.m_worldTransform.pos;
  if ( v10 )
  {
    NiMatrix33_InitRotationTransform((float *)v99, flt_B3BAC8);
    NiMatrix33_InitRotationTransposedTransform___((float *)&v99[0x30], flt_B3BAC4);
    v34 = ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.super.GetScale)(this)
        * this->firstPersonNiNodeTranslateZ;
    goto LABEL_39;
  }
  if ( byte_B3BB05 )
  {
    v27 = flt_B3BB34;
    if ( v27 >= 0.0 )
    {
      v28 = dbl_A3D5B0;
      if ( v28 < v27 )
        flt_B3BB34 = v27 - v28;
    }
    else
    {
      flt_B3BB34 = v27 + dbl_A3D5B0;
    }
    a3a = ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.GetZRotation)(this) + flt_B3BB34;
    NiMatrix33_InitRotationTransform((float *)v99, a3a);
    v29 = *(float *)&qword_B3BB2C;
    goto LABEL_37;
  }
  v30 = flt_B3BB28;
  if ( v30 >= 0.0 )
  {
    v31 = dbl_A3D5B0;
    if ( v31 < v30 )
    {
      flt_B3BB28 = v30 - v31;
      v30 = flt_B3BB28;
    }
  }
  else
  {
    flt_B3BB28 = v30 + dbl_A3D5B0;
    v30 = flt_B3BB28;
  }
  v32 = *(float *)&qword_B3BB20;
  if ( v32 > dbl_A6E740 )
  {
    v33 = flt_A3F3E0;
LABEL_35:
    *(float *)&qword_B3BB20 = v33;
    goto LABEL_36;
  }
  if ( v32 < dbl_A73DD0 )
  {
    v33 = flt_A3721C;
    goto LABEL_35;
  }
LABEL_36:
  a3b = v30 + flt_B3BAC8;
  NiMatrix33_InitRotationTransform((float *)v99, a3b);
  v29 = *(float *)&qword_B3BB20;
LABEL_37:
  v66 = v29;
  NiMatrix33_InitRotationTransposedTransform___((float *)&v99[0x30], v66);
  v34 = ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.super.GetScale)(this) * fCostant_100;
LABEL_39:
  PlayerPosition.z = v34 + PlayerPosition.z;
  v35 = NiMAtrix33_Multiply((float *)v99, v100, (float *)&v99[0x30]);
  a3c = -*((float *)&qword_B3BB20 + 1);
  *(float *)&v99[0x24] = 0.0;
  qmemcpy(v99, v35, 0x24u);
  v16 = a3c;
  *(float *)&v99[0x28] = a3c;
  *(float *)&v99[0x2C] = 0.0;
  v36 = sub_7101F0((NiTransform *)v99, (NiTransform *)v101, (NiPoint3 *)&v99[0x24]);
  a3d = PlayerPosition.x + v36->rot.data[0][0];
  a1 = v36->rot.data[0][1] + PlayerPosition.y;
  v83 = v36->rot.data[0][2] + PlayerPosition.z;
  v92.x = a3d;
  CameraPosition.x = a3d;
  v92.y = a1;
  CameraPosition.y = a1;
  v92.z = v83;
  CameraPosition.z = v83;
  sub_66A5E0(this);
  UpdateCameraCollision(this, &CameraPosition, &PlayerPosition, 0);
  v10 = (dword_B3BCCC & 1) == 0;
  x = CameraPosition.x;
  v38 = CameraPosition.y;
  z = CameraPosition.z;
  v93 = CameraPosition;
  if ( v10 )
  {
    dword_B3BCCC |= 1u;
    v102 = 0;
    sub_70D590((NiCamera *)&stru_B3BBA8);
    atexit(sub_A25850);
    v102 = 0xFFFFFFFF;
  }
  stru_B3BBA8.members.super.m_localTransform.pos.x = x;
  stru_B3BBA8.members.super.m_localTransform.pos.y = v38;
  stru_B3BBA8.members.super.m_localTransform.pos.z = z;
  NiAVObject_UpdateNiAVObject((NiAVObject *)&stru_B3BBA8, 0.0, 1);
  sub_70C340((float *)&stru_B3BBA8, &PlayerPosition.x, (float *)&dword_B258E8);
  *(float *)v99 = stru_B3BBA8.members.super.m_localTransform.rot.data[0][2];
  *(float *)&v99[4] = stru_B3BBA8.members.super.m_localTransform.rot.data[0][0];
  v40 = stru_B3BBA8.members.super.m_localTransform.rot.data[0][1];
  qmemcpy(&v99[0x30], &stru_B3BBA8.members.super.m_localTransform, 0x24u);
  *(float *)&v99[8] = v40;
  *(float *)&v99[0xC] = stru_B3BBA8.members.super.m_localTransform.rot.data[1][2];
  *(float *)&v99[0x10] = stru_B3BBA8.members.super.m_localTransform.rot.data[1][0];
  *(float *)&v99[0x14] = stru_B3BBA8.members.super.m_localTransform.rot.data[1][1];
  *(float *)&v99[0x18] = stru_B3BBA8.members.super.m_localTransform.rot.data[2][2];
  *(float *)&v99[0x1C] = stru_B3BBA8.members.super.m_localTransform.rot.data[2][0];
  *(float *)&v99[0x20] = stru_B3BBA8.members.super.m_localTransform.rot.data[2][1];
LABEL_42:
  v41 = v67;
  if ( v67->super.children.end )
    vtbl = (float *)v67->super.children.data->vtbl;
  else
    vtbl = 0;
  v43 = v93.y;
  vtbl[0x15] = v93.x;
  v44 = v93.z;
  vtbl[0x16] = v43;
  vtbl[0x17] = v44;
  if ( v67->super.children.end )
    v45 = v67->super.children.data->vtbl;
  else
    v45 = 0;
  qmemcpy(&v45->super.DumpAttributes, v99, 0x24u);
  if ( v67->super.children.end )
    v46 = (NiAVObject *)v67->super.children.data->vtbl;
  else
    v46 = 0;
  NiAVObject_UpdateNiAVObject(v46, 0.0, 0);
  sound = (float *)OSGlobals->sound;
  if ( sound )
  {
    v48 = this->super.super.super.super.pos[1];
    v49 = this->super.super.super.super.pos[0];
    v92.z = this->super.super.super.super.pos[2];
    v92.y = v48;
    v92.x = v49;
    sub_6A8E10(sound, v49, v48, v92.z);
    v68 = cos(((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.GetZRotation)(this));
    a3e = this->vtbl->super.super.GetZRotation((MobileObject *)this);
    v65 = v68;
    v69 = sin(a3e);
    sub_6A8E40(sound, v69, v65, 0.0);
  }
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
  v51 = (ExtraDataList *)ParentCell;
  if ( ParentCell )
  {
    sub_4D4EB0((ExtraDataList *)ParentCell, (float *)v41->camera);
    if ( sound )
    {
      if ( *((_BYTE *)sound + 0xA5) )
        goto LABEL_71;
      if ( Actor_IsUnderwater__(this, (int)this->super.super.super.super.pos, v51, flt_A73DC8) )
      {
        sub_6AE720((int)sound, (char)this, st5_0, v16, (_DWORD *)1);
        goto LABEL_61;
      }
      if ( *((_BYTE *)sound + 0xA5) )
      {
LABEL_71:
        if ( !Actor_IsUnderwater__(this, (int)this->super.super.super.super.pos, v51, flt_A73DC8) )
          sub_6AE720((int)sound, (char)this, st5_0, v16, 0);
      }
    }
  }
LABEL_61:
  v52 = dword_B3BCCC;
  v53 = LODWORD(dword_B3F9B0);
  v54 = *((_DWORD *)&Vector3_InitValue_ + 1);
  v55 = Vector3_InitValue_;
  if ( (dword_B3BCCC & 2) == 0 )
  {
    v52 |= 2u;
    dword_B3BCCC = v52;
    *(float *)&qword_B3BB98 = v55;
    HIDWORD(qword_B3BB98) = v54;
    dword_B3BBA0 = v53;
  }
  if ( (v52 & 4) == 0 )
  {
    dword_B3BCCC = v52 | 4;
    *(float *)&qword_B3BB8C = v55;
    HIDWORD(qword_B3BB8C) = v54;
    dword_B3BB94 = v53;
  }
  camera = (float *)v41->camera;
  v94 = v93.x - *(float *)&qword_B3BB98;
  v95 = v93.y - *((float *)&qword_B3BB98 + 1);
  *(float *)&v96 = 0.0 - *(float *)&dword_B3BBA0;
  v70 = atan(camera[0x3C]);
  a3f = v70 / camera[0x48];
  v92.x = camera[0x19];
  v92.y = camera[0x1C];
  v57 = camera[0x1F];
  CameraPosition = v92;
  v92.z = v57;
  sub_43F350(&CameraPosition.x);
  v71 = v95 * v95 + v94 * v94 + *(float *)&v96 * *(float *)&v96;
  v72 = sqrt(v71);
  v73 = fabs(v72);
  v58 = a3f;
  if ( v73 > (double)flt_A56670
    || (v74 = CameraPosition.y * *((float *)&qword_B3BB8C + 1)
            + *(float *)&qword_B3BB8C * CameraPosition.x
            + CameraPosition.z * *(float *)&dword_B3BB94,
        v59 = v74,
        v75 = 1.0 - (v58 - dbl_A432D8),
        v75 > v59)
    || a4 )
  {
    v60 = CameraPosition.x;
    v61 = CameraPosition.y;
    v62 = CameraPosition.z;
    v76 = v58 - dbl_A3C770;
    DrawGrassPass_(
      SLODWORD(v93.x),
      SLODWORD(v93.y),
      SLODWORD(v93.z),
      CameraPosition.x,
      SLODWORD(CameraPosition.y),
      SLODWORD(CameraPosition.z),
      v76);
    v63 = this->vtbl->super.super.super.GetPos(this);
    sub_4EA6E0(*(_DWORD *)v63, v63[1], *((_DWORD *)v63 + 2), 0);
    v64 = v93.y;
    *(float *)&qword_B3BB98 = v93.x;
    *(float *)&v96 = 0.0;
    *((float *)&qword_B3BB98 + 1) = v64;
    dword_B3BBA0 = v96;
    *(float *)&qword_B3BB8C = v60;
    *((float *)&qword_B3BB8C + 1) = v61;
    *(float *)&dword_B3BB94 = v62;
  }
}
