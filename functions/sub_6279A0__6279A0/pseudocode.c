float *__thiscall sub_6279A0(TESPackage *this, float *pointXYZ, TESChildCELL *arg4, int a4, float argC)
{
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectREFR *v7; // eax
  bool v8; // zf
  NiPoint3 *LinkedTeleportMarkerPosition; // eax
  float *v10; // eax
  float v11; // edx
  float v12; // ecx
  float v13; // eax
  int (__thiscall **vtbl)(TESChildCELL *); // edx
  int v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  TESObjectCELL *v19; // eax
  float *v20; // eax
  float *v21; // eax
  int v22; // eax
  float v23; // ecx
  int (__thiscall **v24)(TESChildCELL *); // edx
  float *v25; // eax
  float v26; // ecx
  float v27; // edx
  float v28; // eax
  TESObjectCELL *v29; // eax
  float *v30; // eax
  float *v32; // [esp-4h] [ebp-64h]
  float a3; // [esp+0h] [ebp-60h]
  float *v34; // [esp+4h] [ebp-5Ch]
  float a5; // [esp+8h] [ebp-58h]
  NiPoint3 v36; // [esp+24h] [ebp-3Ch] BYREF
  NiPoint3 v37; // [esp+30h] [ebp-30h] BYREF
  float v38; // [esp+3Ch] [ebp-24h]
  float v39; // [esp+40h] [ebp-20h]
  float v40; // [esp+44h] [ebp-1Ch]
  NiPoint3 v41; // [esp+48h] [ebp-18h]
  NiPoint3 v42; // [esp+54h] [ebp-Ch] BYREF
  float v43; // [esp+70h] [ebp+10h]
  float v44; // [esp+70h] [ebp+10h]

  if ( *((_BYTE *)this + 0x3C) != 1 ) /*0x6279b1*/
  {
    LinkedTeleportMarkerPosition = (NiPoint3 *)sub_566B30(this, &v42.x, (Actor *)arg4); /*0x627d2c*/
    goto LABEL_17; /*0x627d2c*/
  }
  unk_B3B924 = a4; /*0x6279c4*/
  if ( LOBYTE(argC) ) /*0x6279ca*/
  {
    if ( TESObjectREFR_IsPersistent((TESObjectREFR *)arg4) /*0x6279e8*/
      && !(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0xE0))(arg4)
      && Actor::CanUSeDoor_((Actor *)arg4) )
    {
      a5 = flt_A578C0; /*0x627a0b*/
      v34 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0x5D))(arg4); /*0x627a16*/
      a3 = flt_A578C0; /*0x627a22*/
      v32 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg4->vtbl + 0x5D))(arg4); /*0x627a27*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg4); /*0x627a2a*/
      sub_446B90( /*0x627a36*/
        DwordAtOffset40,
        v32,
        a3,
        v34,
        a5,
        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_626CC0,
        (int)arg4);
    }
  }
  v7 = (TESObjectREFR *)unk_B3B91C; /*0x627a3b*/
  v8 = unk_B3B91C == 0; /*0x627a42*/
  unk_B3B924 = 0; /*0x627a44*/
  if ( !v8 ) /*0x627a4a*/
  {
    unk_B3B91C = 0; /*0x627a4c*/
    *((_DWORD *)this + 0x17) = v7; /*0x627a54*/
    LinkedTeleportMarkerPosition = TESObjectREFR_GetLinkedTeleportMarkerPosition(v7); /*0x627a57*/
LABEL_17:
    *pointXYZ = LinkedTeleportMarkerPosition->x; /*0x627d31*/
    pointXYZ[1] = LinkedTeleportMarkerPosition->y; /*0x627d38*/
    pointXYZ[2] = LinkedTeleportMarkerPosition->z; /*0x627d3e*/
    goto LABEL_18; /*0x627d3e*/
  }
  if ( a4 ) /*0x627a63*/
  {
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4); /*0x627a74*/
    v11 = v10[1]; /*0x627a76*/
    v12 = *v10; /*0x627a79*/
    v13 = v10[2]; /*0x627a7b*/
    v39 = v11; /*0x627a7e*/
    vtbl = (int (__thiscall **)(TESChildCELL *))arg4->vtbl; /*0x627a82*/
    v38 = v12; /*0x627a84*/
    v40 = v13; /*0x627a88*/
    v15 = vtbl[0x5D](arg4); /*0x627a94*/
    v16 = *(float *)v15; /*0x627a9c*/
    v43 = g_GameSettingStringPointers_B36CD8[0xD4]; /*0x627a9e*/
    v17 = *(float *)(v15 + 4); /*0x627aa2*/
    v18 = *(float *)(v15 + 8); /*0x627aa5*/
    v37.x = v16; /*0x627aa8*/
    *(_QWORD *)&v37.y = __PAIR64__(LODWORD(v18), LODWORD(v17)); /*0x627ab4*/
    v36.x = v16 - v38; /*0x627ac0*/
    v36.y = v17 - v39; /*0x627acc*/
    v36.z = v18 - v40; /*0x627ad8*/
    Vector3_NormalizeInPlace(&v36.x); /*0x627adc*/
    v38 = v36.x * v43; /*0x627af1*/
    v39 = v36.y * v43; /*0x627afb*/
    v40 = v43 * v36.z; /*0x627b03*/
    v41.x = v38 + v37.x; /*0x627b0f*/
    v41.y = v39 + v37.y; /*0x627b25*/
    v41.z = v40 + v37.z; /*0x627b39*/
    v36 = v41; /*0x627b41*/
    v19 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg4); /*0x627b45*/
    v20 = Actor_ChoosePathGridSteeringPosition((TESObjectREFR *)arg4, &v42.x, v36, v19, 0.0, 0.0, 0); /*0x627b71*/
    *pointXYZ = *v20; /*0x627b78*/
    pointXYZ[1] = v20[1]; /*0x627b7d*/
    pointXYZ[2] = v20[2]; /*0x627b8a*/
    if ( sub_8AA350(pointXYZ, &v36.x) || TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)arg4, pointXYZ) < fConst_200 ) /*0x627ba9*/
    {
      v21 = sub_5E03E0((TESObjectREFR *)arg4, &v42.x, &v36.x); /*0x627bb7*/
      *pointXYZ = *v21; /*0x627bbe*/
      pointXYZ[1] = v21[1]; /*0x627bc3*/
      pointXYZ[2] = v21[2]; /*0x627bc9*/
    }
    if ( sub_8AA350(pointXYZ, &v36.x) ) /*0x627bd3*/
    {
      v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4); /*0x627beb*/
      v23 = *(float *)v22; /*0x627bf0*/
      *(_QWORD *)&v41.y = *(_QWORD *)(v22 + 4); /*0x627bf5*/
      v24 = (int (__thiscall **)(TESChildCELL *))arg4->vtbl; /*0x627bf9*/
      v41.x = v23; /*0x627bfb*/
      v25 = (float *)v24[0x5D](arg4); /*0x627c0b*/
      v26 = *v25; /*0x627c13*/
      v44 = g_GameSettingStringPointers_B36CD8[0xD4]; /*0x627c15*/
      v27 = v25[1]; /*0x627c19*/
      v28 = v25[2]; /*0x627c20*/
      v38 = v26; /*0x627c23*/
      v39 = v27; /*0x627c2b*/
      v40 = v28; /*0x627c2f*/
      v37.x = v41.x - v26; /*0x627c33*/
      v37.y = v41.y - v27; /*0x627c43*/
      v37.z = v41.z - v28; /*0x627c4f*/
      Vector3_NormalizeInPlace(&v37.x); /*0x627c53*/
      v41.x = v37.x * v44; /*0x627c68*/
      v41.y = v37.y * v44; /*0x627c72*/
      v41.z = v44 * v37.z; /*0x627c7a*/
      v42.x = v41.x + v38; /*0x627c86*/
      v42.y = v41.y + v39; /*0x627c9c*/
      v42.z = v41.z + v40; /*0x627cb0*/
      v37 = v42; /*0x627cb8*/
      v29 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg4); /*0x627cbc*/
      v30 = Actor_ChoosePathGridSteeringPosition((TESObjectREFR *)arg4, &v42.x, v37, v29, 0.0, 0.0, 0); /*0x627ce8*/
      *pointXYZ = *v30; /*0x627cef*/
      pointXYZ[1] = v30[1]; /*0x627cf4*/
      pointXYZ[2] = v30[2]; /*0x627d01*/
      if ( sub_8AA350(pointXYZ, &v37.x) ) /*0x627d04*/
      {
        LinkedTeleportMarkerPosition = (NiPoint3 *)sub_5E03E0((TESObjectREFR *)arg4, &v42.x, &v37.x); /*0x627d19*/
        goto LABEL_17; /*0x627d1e*/
      }
    }
  }
LABEL_18:
  *((float *)this + 0x10) = *pointXYZ; /*0x627d41*/
  *((float *)this + 0x11) = pointXYZ[1]; /*0x627d49*/
  *((float *)this + 0x12) = pointXYZ[2]; /*0x627d50*/
  return pointXYZ; /*0x627d4f*/
}
