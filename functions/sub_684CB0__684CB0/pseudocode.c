bool __cdecl sub_684CB0(MobileObject *a1, _BYTE *a2, _BYTE *a3)
{
  bhkCharacterProxy *CharProxy; // eax
  __m128 *v5; // ebp
  float v6; // eax
  float v7; // edx
  float (__thiscall *GetZRotation)(MobileObject *); // eax
  __int64 v10; // [esp+0h] [ebp-78h]
  __int64 v11; // [esp+0h] [ebp-78h]
  NiPoint3 v12; // [esp+24h] [ebp-54h] BYREF
  float v13; // [esp+30h] [ebp-48h]
  float v14; // [esp+34h] [ebp-44h]
  float v15; // [esp+38h] [ebp-40h]
  NiPoint3 v16; // [esp+3Ch] [ebp-3Ch]
  float v17[3]; // [esp+48h] [ebp-30h] BYREF
  NiMatrix33 v18; // [esp+54h] [ebp-24h] BYREF
  float Radius; // [esp+7Ch] [ebp+4h]
  float v20; // [esp+7Ch] [ebp+4h]
  float angleZ; // [esp+7Ch] [ebp+4h]
  float v22; // [esp+7Ch] [ebp+4h]

  if ( !a1 || !sub_5E3290(a1) ) /*0x684cc2*/
    return 1; /*0x684eb9*/
  CharProxy = MobileObject_GetCharProxy(a1); /*0x684cd2*/
  v5 = (__m128 *)CharProxy; /*0x684cd7*/
  if ( CharProxy && (*((_BYTE *)CharProxy + 0x1F4) & 1) != 0 ) /*0x684ce8*/
  {
    v6 = a1->super.pos[0]; /*0x684cf1*/
    v7 = a1->super.pos[2]; /*0x684cf4*/
    v14 = a1->super.pos[1]; /*0x684cf8*/
    v13 = v6; /*0x684cff*/
    v15 = v7; /*0x684d03*/
    Radius = bhkCharacterController_GetRadius(v5->m128_f32); /*0x684d0c*/
    v17[0] = 0.0; /*0x684d16*/
    *a3 = 1; /*0x684d1a*/
    GetZRotation = a1->vtbl->GetZRotation; /*0x684d29*/
    v20 = Radius * dbl_A372E0; /*0x684d3d*/
    qmemcpy(&v18, &stru_B26AF0[0xA].unk2C, sizeof(v18)); /*0x684d41*/
    v17[1] = v20 * dbl_A38618; /*0x684d4d*/
    v17[2] = 0.0; /*0x684d51*/
    angleZ = ((double (__thiscall *)(MobileObject *))GetZRotation)(a1) + dbl_A4D918; /*0x684d64*/
    NiMatrix33_InitRotationZ(&v18, angleZ); /*0x684d6f*/
    HIDWORD(v10) = &g_zeroNiPoint3; /*0x684d84*/
    LODWORD(v10) = &v18; /*0x684d89*/
    sub_710580(v10, 1u, (int)v17, (int)&v12); /*0x684d8a*/
    v16.x = v13 + v12.x; /*0x684d9e*/
    v16.y = v12.y + v14; /*0x684db9*/
    v16.z = v12.z + v15; /*0x684dcf*/
    v12 = v16; /*0x684dd7*/
    if ( !sub_8949C0(v5, &v12, 1, 0, 0) ) /*0x684ddb*/
      *a3 = 0; /*0x684de8*/
    *a2 = 1; /*0x684dee*/
    v22 = ((double (__thiscall *)(MobileObject *))a1->vtbl->GetZRotation)(a1) - dbl_A4D918; /*0x684e08*/
    NiMatrix33_InitRotationZ(&v18, v22); /*0x684e13*/
    HIDWORD(v11) = &g_zeroNiPoint3; /*0x684e28*/
    LODWORD(v11) = &v18; /*0x684e2d*/
    sub_710580(v11, 1u, (int)v17, (int)&v12); /*0x684e2e*/
    v16.x = v13 + v12.x; /*0x684e42*/
    v16.y = v12.y + v14; /*0x684e5d*/
    v16.z = v12.z + v15; /*0x684e73*/
    v12 = v16; /*0x684e7b*/
    if ( sub_8949C0(v5, &v12, 1, 0, 0) ) /*0x684e7f*/
    {
      if ( *a2 ) /*0x684e8c*/
        return 1; /*0x684eb0*/
    }
    else
    {
      *a2 = 0; /*0x684e88*/
    }
    return *a3 != 0; /*0x684e95*/
  }
  return 1; /*0x684e9f*/
}
