void __userpurge sub_66B710(PlayerCharacter *this@<ecx>, double a2@<st0>, char arg0)
{
  bool v4; // bl
  double v5; // st7
  double v6; // st7
  NiMatrix33 *v7; // esi
  float *v8; // eax
  bool v9; // zf
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  _DWORD *unk05C; // esi
  NiNode *CachedNode; // eax
  int v15; // eax
  int v16; // esi
  float *v17; // esi
  float *v18; // eax
  float y; // ecx
  double v20; // st7
  int v21; // eax
  int *unk1F0; // ecx
  Actor *v23; // eax
  NiNode *NiNode; // eax
  double v25; // st7
  double v26; // st6
  double v27; // st7
  double v28; // st7
  double v29; // st6
  double v30; // st6
  double v31; // st6
  double v32; // st7
  NiMatrix33 *v33; // eax
  NiTransform *v34; // eax
  float x; // esi
  float v36; // edi
  float z; // ebx
  double v38; // st7
  float **v39; // ebx
  float *v40; // eax
  float v41; // edx
  float v42; // ecx
  int v43; // eax
  NiAVObject *v44; // ecx
  float *sound; // esi
  float v46; // eax
  float v47; // edx
  ExtraDataList *DwordAtOffset40; // eax
  ExtraDataList *v49; // edi
  double v50; // st7
  double v51; // st7
  float v52; // eax
  float v53; // ecx
  float v54; // edx
  float v55; // esi
  float *v56; // esi
  double v57; // st7
  double v58; // st7
  double v59; // st6
  float v60; // esi
  float v61; // edi
  float v62; // ebx
  float *v63; // eax
  float v64; // edx
  float v65; // [esp+8h] [ebp-F8h]
  float angleZ; // [esp+Ch] [ebp-F4h]
  float ***v67; // [esp+24h] [ebp-DCh]
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
  float v96; // [esp+5Ch] [ebp-A4h]
  float a1; // [esp+60h] [ebp-A0h]
  NiPoint3 PlayerPosition; // [esp+64h] [ebp-9Ch] BYREF
  NiMatrix33 v99; // [esp+70h] [ebp-90h] BYREF
  NiPoint3 v100; // [esp+94h] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+A0h] [ebp-60h] BYREF
  NiMatrix33 out; // [esp+C4h] [ebp-3Ch] BYREF
  float v103[3]; // [esp+E8h] [ebp-18h] BYREF
  unsigned int v104; // [esp+FCh] [ebp-4h]

  this->vtbl->super.super.GetZRotation((MobileObject *)this); /*0x66b748*/
  unk_B3BAC8 = a2; /*0x66b74a*/
  unk_B3BAC4 = Actor_GetAimPitch((Actor *)this); /*0x66b757*/
  v67 = (float ***)g_WorldSceneReceiverRoot; /*0x66b765*/
  if ( this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x66b773*/
    this->firstPersonNiNodeTranslateZ = (1.0 - *(float *)&MEMORY[0xB33E90][0xC] * dbl_A3C770) /*0x66b78f*/
                                      * this->firstPersonNiNodeTranslateZ;
  if ( !this->isThirdPerson && !MEMORY[0xB3BB04] ) /*0x66b7a2*/
  {
    NiMatrix33_InitRotationZ(&v99, unk_B3BAC8); /*0x66b7bd*/
    NiMatrix33_InitRotationXTransposed(&right, unk_B3BAC4); /*0x66b7d3*/
    qmemcpy(&v99, NiMAtrix33_Multiply(&v99, &out, &right), sizeof(v99)); /*0x66b7fc*/
    v4 = sub_5E6C10((MobileObject *)this); /*0x66b805*/
    if ( v4 ) /*0x66b809*/
      v5 = 0.0; /*0x66b80b*/
    else
      v5 = *(float *)(MEMORY[0xB3BB0C] + 0x3C); /*0x66b814*/
    v77 = v5; /*0x66b817*/
    v78 = -v77 * dbl_A3D5B8 * dbl_A2FAA0; /*0x66b835*/
    NiMatrix33_InitRotationZ(&right, v78); /*0x66b840*/
    qmemcpy(&v99, NiMAtrix33_Multiply(&v99, &out, &right), sizeof(v99)); /*0x66b86b*/
    if ( v4 ) /*0x66b86d*/
      v6 = 0.0; /*0x66b86f*/
    else
      v6 = *(float *)(MEMORY[0xB3BB0C] + 0x40); /*0x66b878*/
    v79 = v6; /*0x66b87b*/
    v80 = v79 * dbl_A3D5B8 * dbl_A2FAA0; /*0x66b897*/
    NiMatrix33_InitRotationXTransposed(&right, v80); /*0x66b8a2*/
    v7 = NiMAtrix33_Multiply(&v99, &out, &right); /*0x66b8c0*/
    v8 = (float *)MEMORY[0xB3BB0C]; /*0x66b8c2*/
    v9 = MEMORY[0xB3BB0C] == 0; /*0x66b8c7*/
    qmemcpy(&v99, v7, sizeof(v99)); /*0x66b8d2*/
    if ( !v9 ) /*0x66b8d4*/
    {
      v10 = v8[0x22]; /*0x66b8d6*/
      v11 = v8[0x23]; /*0x66b8dc*/
      v12 = v8[0x24]; /*0x66b8e2*/
      v93.x = v10; /*0x66b8e8*/
      v93.y = v11; /*0x66b8ec*/
      v93.z = v12; /*0x66b8f0*/
    }
    unk05C = (_DWORD *)this->super.super.super.process[2].unk05C; /*0x66b8fd*/
    CachedNode = ActorSkinInfo_GetCachedNode(this->super.skinInfo, 0); /*0x66b905*/
    v81 = sub_4710B0(unk05C, (int)CachedNode); /*0x66b912*/
    if ( v81 < 1.0 ) /*0x66b925*/
    {
      v15 = MEMORY[0xB3BB10]; /*0x66b92b*/
      v16 = MEMORY[0xB3BB14]; /*0x66b936*/
      v9 = MEMORY[0xB3BB14] == 0; /*0x66b93c*/
      a1 = *(float *)(MEMORY[0xB3BB10] + 0x8C) - v93.y; /*0x66b948*/
      a3 = *(float *)(v15 + 0x90) - v93.z; /*0x66b95c*/
      CameraPosition.x = *(float *)(v15 + 0x88) - v93.x; /*0x66b970*/
      v82 = v81 * unk_B36BD0; /*0x66b97e*/
      CameraPosition.x = CameraPosition.x * v82; /*0x66b990*/
      CameraPosition.y = a1 * v82; /*0x66b99a*/
      CameraPosition.z = v82 * a3; /*0x66b9a2*/
      v93.x = v93.x + CameraPosition.x; /*0x66b9ae*/
      v93.y = v93.y + CameraPosition.y; /*0x66b9b6*/
      v93.z = v93.z + CameraPosition.z; /*0x66b9be*/
      if ( !v9 ) /*0x66b9c2*/
      {
        v17 = (float *)(v16 + 0x54); /*0x66b9d8*/
        v18 = NiPoint3_MultiplyMatrix3( /*0x66b9db*/
                &v94,
                &CameraPosition.x,
                (float *)&this->firstPersonNiNode->members.super.m_localTransform);
        v92.x = *v18 + *v17; /*0x66b9e9*/
        v92.y = v18[1] + v17[1]; /*0x66b9f7*/
        y = v92.y; /*0x66b9fb*/
        v20 = v18[2] + v17[2]; /*0x66ba07*/
        v21 = MEMORY[0xB3BB14] + 0x54; /*0x66ba0a*/
        *(float *)v21 = v92.x; /*0x66ba0d*/
        *(float *)(v21 + 4) = y; /*0x66ba0f*/
        v92.z = v20; /*0x66ba12*/
        *(float *)(v21 + 8) = v92.z; /*0x66ba1d*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)MEMORY[0xB3BB14], 0.0, 1); /*0x66ba29*/
      }
    }
    unk1F0 = (int *)this->unk1F0; /*0x66ba32*/
    if ( unk1F0 ) /*0x66ba3a*/
    {
      if ( sub_531F10(unk1F0) ) /*0x66ba40*/
      {
        sub_531E90((int *)this->unk1F0, 0); /*0x66ba55*/
        if ( this->vtbl->super.GetMountedHorse(this) ) /*0x66ba65*/
        {
          unk_B3BB00 = 0; /*0x66ba71*/
          flt_B14E54 = 1.0; /*0x66ba7b*/
          v23 = (Actor *)this->vtbl->super.GetMountedHorse(this); /*0x66ba8c*/
          sub_5EE1B0(v23, 1.0); /*0x66ba90*/
        }
      }
    }
    goto LABEL_42; /*0x66ba95*/
  }
  NiNode = TESObjectREFR::GetNiNode((TESObjectREFR *)this); /*0x66ba9c*/
  v9 = MEMORY[0xB3BB04] == 0; /*0x66baa3*/
  PlayerPosition = NiNode->members.super.m_worldTransform.pos; /*0x66bab0*/
  if ( v9 ) /*0x66bac8*/
  {
    NiMatrix33_InitRotationZ(&v99, unk_B3BAC8); /*0x66bc18*/
    NiMatrix33_InitRotationXTransposed(&right, unk_B3BAC4); /*0x66bc2e*/
    v32 = ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.super.GetScale)(this) /*0x66bc40*/
        * this->firstPersonNiNodeTranslateZ;
    goto LABEL_39; /*0x66bc40*/
  }
  if ( unk_B3BB05 ) /*0x66bace*/
  {
    v25 = qword_B3BB2C[2]; /*0x66bae1*/
    if ( v25 >= 0.0 ) /*0x66bae6*/
    {
      v26 = dbl_A3D5B0; /*0x66baf6*/
      if ( v26 < v25 ) /*0x66bb03*/
        qword_B3BB2C[2] = v25 - v26; /*0x66bb07*/
    }
    else
    {
      qword_B3BB2C[2] = v25 + dbl_A3D5B0; /*0x66baee*/
    }
    a3a = ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.GetZRotation)(this) + qword_B3BB2C[2]; /*0x66bb2b*/
    NiMatrix33_InitRotationZ(&v99, a3a); /*0x66bb36*/
    v27 = qword_B3BB2C[0]; /*0x66bb3b*/
    goto LABEL_37; /*0x66bb41*/
  }
  v28 = unk_B3BB28; /*0x66bb50*/
  if ( v28 >= 0.0 ) /*0x66bb55*/
  {
    v29 = dbl_A3D5B0; /*0x66bb6b*/
    if ( v29 < v28 ) /*0x66bb78*/
    {
      unk_B3BB28 = v28 - v29; /*0x66bb7c*/
      v28 = unk_B3BB28; /*0x66bb82*/
    }
  }
  else
  {
    unk_B3BB28 = v28 + dbl_A3D5B0; /*0x66bb5d*/
    v28 = unk_B3BB28; /*0x66bb63*/
  }
  v30 = *(float *)&unk_B3BB20; /*0x66bb8c*/
  if ( v30 > dbl_A6E740 ) /*0x66bb9d*/
  {
    v31 = flt_A3F3E0; /*0x66bba1*/
LABEL_35:
    *(float *)&unk_B3BB20 = v31; /*0x66bbbc*/
    goto LABEL_36; /*0x66bbbc*/
  }
  if ( v30 < dbl_A73DD0 ) /*0x66bbb4*/
  {
    v31 = flt_A3721C; /*0x66bbb6*/
    goto LABEL_35; /*0x66bbb6*/
  }
LABEL_36:
  a3b = v28 + unk_B3BAC8; /*0x66bbc2*/
  NiMatrix33_InitRotationZ(&v99, a3b); /*0x66bbd8*/
  v27 = *(float *)&unk_B3BB20; /*0x66bbdd*/
LABEL_37:
  angleZ = v27; /*0x66bbe3*/
  NiMatrix33_InitRotationXTransposed(&right, angleZ); /*0x66bbee*/
  v32 = ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.super.GetScale)(this) * fCostant_100; /*0x66bc00*/
LABEL_39:
  PlayerPosition.z = v32 + PlayerPosition.z; /*0x66bc46*/
  v33 = NiMAtrix33_Multiply(&v99, &out, &right); /*0x66bc62*/
  a3c = -*(float *)&unk_B3BB24.vtbl; /*0x66bc71*/
  v100.x = 0.0; /*0x66bc80*/
  qmemcpy(&v99, v33, sizeof(v99)); /*0x66bc87*/
  v100.y = a3c; /*0x66bc8d*/
  v100.z = 0.0; /*0x66bc94*/
  v34 = sub_7101F0((NiTransform *)&v99, (NiTransform *)v103, &v100); /*0x66bcaf*/
  a3d = PlayerPosition.x + v34->rot.data[0][0]; /*0x66bcba*/
  a1 = v34->rot.data[0][1] + PlayerPosition.y; /*0x66bcc5*/
  v83 = v34->rot.data[0][2] + PlayerPosition.z; /*0x66bcd0*/
  v92.x = a3d; /*0x66bcd8*/
  CameraPosition.x = a3d; /*0x66bce4*/
  v92.y = a1; /*0x66bce8*/
  CameraPosition.y = a1; /*0x66bcf4*/
  v92.z = v83; /*0x66bcf8*/
  CameraPosition.z = v83; /*0x66bd00*/
  sub_66A5E0(this); /*0x66bd06*/
  UpdateCameraCollision(this, &CameraPosition, &PlayerPosition, 0); /*0x66bd19*/
  v9 = (LOBYTE(qword_B3BB2C[0x68]) & 1) == 0; /*0x66bd1e*/
  x = CameraPosition.x; /*0x66bd25*/
  v36 = CameraPosition.y; /*0x66bd29*/
  z = CameraPosition.z; /*0x66bd2d*/
  v93 = CameraPosition; /*0x66bd31*/
  if ( v9 ) /*0x66bd3d*/
  {
    LODWORD(qword_B3BB2C[0x68]) |= 1u; /*0x66bd3f*/
    v104 = 0; /*0x66bd4b*/
    sub_70D590((NiCamera *)&qword_B3BB2C[0x1F]); /*0x66bd56*/
    atexit(sub_A25850); /*0x66bd60*/
    v104 = 0xFFFFFFFF; /*0x66bd68*/
  }
  qword_B3BB2C[0x34] = x; /*0x66bd80*/
  qword_B3BB2C[0x35] = v36; /*0x66bd86*/
  qword_B3BB2C[0x36] = z; /*0x66bd8c*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)&qword_B3BB2C[0x1F], 0.0, 1); /*0x66bd92*/
  sub_70C340(&qword_B3BB2C[0x1F], &PlayerPosition.x, &rhs.x); /*0x66bda6*/
  v99.data[0][0] = qword_B3BB2C[0x2D]; /*0x66bdb1*/
  v99.data[0][1] = qword_B3BB2C[0x2B]; /*0x66bdc5*/
  v38 = qword_B3BB2C[0x2C]; /*0x66bdd0*/
  qmemcpy(&right, &qword_B3BB2C[0x2B], sizeof(right)); /*0x66bdd6*/
  v99.data[0][2] = v38; /*0x66bdd8*/
  v99.data[1][0] = qword_B3BB2C[0x30]; /*0x66bde2*/
  v99.data[1][1] = qword_B3BB2C[0x2E]; /*0x66bdec*/
  v99.data[1][2] = qword_B3BB2C[0x2F]; /*0x66bdf6*/
  v99.data[2][0] = qword_B3BB2C[0x33]; /*0x66be00*/
  v99.data[2][1] = qword_B3BB2C[0x31]; /*0x66be0a*/
  v99.data[2][2] = qword_B3BB2C[0x32]; /*0x66be14*/
LABEL_42:
  v39 = (float **)v67; /*0x66be1b*/
  if ( *((_WORD *)v67 + 0x5B) ) /*0x66be1f*/
    v40 = *v67[0x2C]; /*0x66be33*/
  else
    v40 = 0; /*0x66be29*/
  v41 = v93.y; /*0x66be39*/
  v40[0x15] = v93.x; /*0x66be3d*/
  v42 = v93.z; /*0x66be40*/
  v40[0x16] = v41; /*0x66be44*/
  v40[0x17] = v42; /*0x66be47*/
  if ( *((_WORD *)v67 + 0x5B) ) /*0x66be4a*/
    v43 = (int)*v67[0x2C]; /*0x66be5e*/
  else
    v43 = 0; /*0x66be54*/
  qmemcpy((void *)(v43 + 0x30), &v99, 0x24u); /*0x66be6c*/
  if ( *((_WORD *)v67 + 0x5B) ) /*0x66be6e*/
    v44 = (NiAVObject *)*v67[0x2C]; /*0x66be82*/
  else
    v44 = 0; /*0x66be78*/
  NiAVObject_UpdateNiAVObject(v44, 0.0, 0); /*0x66be8c*/
  sound = (float *)MEMORY[0xB33398]->sound; /*0x66be97*/
  if ( sound ) /*0x66be9c*/
  {
    v46 = this->super.super.super.super.pos[1]; /*0x66bea5*/
    v47 = this->super.super.super.super.pos[0]; /*0x66bea8*/
    v92.z = this->super.super.super.super.pos[2]; /*0x66beab*/
    v92.y = v46; /*0x66beba*/
    v92.x = v47; /*0x66bec2*/
    sub_6A8E10(sound, v47, v46, v92.z); /*0x66bed3*/
    v68 = cos(((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.super.GetZRotation)(this)); /*0x66beea*/
    a3e = this->vtbl->super.super.GetZRotation((MobileObject *)this); /*0x66bf03*/
    v65 = v68; /*0x66bf14*/
    v69 = sin(a3e); /*0x66bf20*/
    sub_6A8E40(sound, v69, v65, 0.0); /*0x66bf2e*/
  }
  DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x66bf35*/
  v49 = DwordAtOffset40; /*0x66bf3a*/
  if ( DwordAtOffset40 ) /*0x66bf3e*/
  {
    sub_4D4EB0(DwordAtOffset40, v39[0x37]); /*0x66bf49*/
    if ( sound ) /*0x66bf50*/
    {
      if ( *((_BYTE *)sound + 0xA5) ) /*0x66bf52*/
        goto LABEL_59; /*0x66bf52*/
      v50 = flt_A73DC8; /*0x66bf5b*/
      if ( Actor_IsUnderwater__(this, (int)this->super.super.super.super.pos, v49, flt_A73DC8) ) /*0x66bf6c*/
      {
        sub_6AE720((int)sound, v50, (_DWORD *)1); /*0x66bf77*/
        goto LABEL_61; /*0x66bf77*/
      }
      if ( *((_BYTE *)sound + 0xA5) ) /*0x66bf79*/
      {
LABEL_59:
        v51 = flt_A73DC8; /*0x66bf82*/
        if ( !Actor_IsUnderwater__(this, (int)this->super.super.super.super.pos, v49, flt_A73DC8) ) /*0x66bf93*/
          sub_6AE720((int)sound, v51, 0); /*0x66bfa0*/
      }
    }
  }
LABEL_61:
  v52 = qword_B3BB2C[0x68]; /*0x66bfa5*/
  v53 = g_zeroNiPoint3.z; /*0x66bfac*/
  v54 = g_zeroNiPoint3.y; /*0x66bfb2*/
  v55 = g_zeroNiPoint3.x; /*0x66bfb8*/
  if ( (LODWORD(qword_B3BB2C[0x68]) & 2) == 0 ) /*0x66bfbe*/
  {
    LODWORD(v52) |= 2u; /*0x66bfc0*/
    qword_B3BB2C[0x68] = v52; /*0x66bfc3*/
    qword_B3BB2C[0x1B] = v55; /*0x66bfc8*/
    qword_B3BB2C[0x1C] = v54; /*0x66bfce*/
    qword_B3BB2C[0x1D] = v53; /*0x66bfd4*/
  }
  if ( (LOBYTE(v52) & 4) == 0 ) /*0x66bfdc*/
  {
    LODWORD(qword_B3BB2C[0x68]) = LODWORD(v52) | 4; /*0x66bfe1*/
    qword_B3BB2C[0x18] = v55; /*0x66bfe6*/
    qword_B3BB2C[0x19] = v54; /*0x66bfec*/
    qword_B3BB2C[0x1A] = v53; /*0x66bff2*/
  }
  v56 = v39[0x37]; /*0x66bffc*/
  v94 = v93.x - qword_B3BB2C[0x1B]; /*0x66c008*/
  v95 = v93.y - qword_B3BB2C[0x1C]; /*0x66c016*/
  v96 = 0.0 - qword_B3BB2C[0x1D]; /*0x66c024*/
  v70 = atan(v56[0x3C]); /*0x66c033*/
  a3f = v70 / v56[0x48]; /*0x66c041*/
  v92.x = v56[0x19]; /*0x66c048*/
  v92.y = v56[0x1C]; /*0x66c053*/
  v57 = v56[0x1F]; /*0x66c057*/
  CameraPosition = v92; /*0x66c05a*/
  v92.z = v57; /*0x66c062*/
  Vector3_NormalizeInPlace(&CameraPosition.x); /*0x66c076*/
  v71 = v95 * v95 + v94 * v94 + v96 * v96; /*0x66c099*/
  v72 = sqrt(v71); /*0x66c0a6*/
  v73 = fabs(v72); /*0x66c0b0*/
  v58 = a3f; /*0x66c0c0*/
  if ( v73 > (double)flt_A56670 /*0x66c118*/
    || (v74 = CameraPosition.y * qword_B3BB2C[0x19]
            + qword_B3BB2C[0x18] * CameraPosition.x
            + CameraPosition.z * qword_B3BB2C[0x1A],
        v59 = v74,
        v75 = 1.0 - (v58 - dbl_A432D8),
        v75 > v59)
    || arg0 )
  {
    v60 = CameraPosition.x; /*0x66c124*/
    v61 = CameraPosition.y; /*0x66c128*/
    v62 = CameraPosition.z; /*0x66c12c*/
    v76 = v58 - dbl_A3C770; /*0x66c134*/
    DrawGrassPass_( /*0x66c162*/
      SLODWORD(v93.x),
      SLODWORD(v93.y),
      SLODWORD(v93.z),
      CameraPosition.x,
      SLODWORD(CameraPosition.y),
      SLODWORD(CameraPosition.z),
      v76);
    v63 = this->vtbl->super.super.super.GetPos(this); /*0x66c175*/
    DistantLOD_UpdateLandLODAtPosition(*(_DWORD *)v63, v63[1], *((_DWORD *)v63 + 2), 0); /*0x66c18e*/
    v64 = v93.y; /*0x66c1aa*/
    qword_B3BB2C[0x1B] = v93.x; /*0x66c1b0*/
    v96 = 0.0; /*0x66c1b6*/
    qword_B3BB2C[0x1C] = v64; /*0x66c1ba*/
    qword_B3BB2C[0x1D] = v96; /*0x66c1c4*/
    qword_B3BB2C[0x18] = v60; /*0x66c1c9*/
    qword_B3BB2C[0x19] = v61; /*0x66c1cf*/
    qword_B3BB2C[0x1A] = v62; /*0x66c1d5*/
  }
}
