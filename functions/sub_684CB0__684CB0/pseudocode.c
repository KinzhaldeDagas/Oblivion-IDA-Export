bool __cdecl sub_684CB0(MobileObject *a1, _BYTE *a2, _BYTE *a3)
{
  bhkCharacterProxy *CharProxy; // eax
  float *v5; // ebp
  float v6; // eax
  float v7; // edx
  float (__thiscall *GetZRotation)(MobileObject *); // eax
  char v9; // al
  char v10; // al
  __int64 v12; // [esp+0h] [ebp-78h]
  __int64 v13; // [esp+0h] [ebp-78h]
  float v14; // [esp+24h] [ebp-54h] BYREF
  float v15; // [esp+28h] [ebp-50h]
  float v16; // [esp+2Ch] [ebp-4Ch]
  float v17; // [esp+30h] [ebp-48h]
  float v18; // [esp+34h] [ebp-44h]
  float v19; // [esp+38h] [ebp-40h]
  float v20; // [esp+3Ch] [ebp-3Ch]
  float v21; // [esp+40h] [ebp-38h]
  float v22; // [esp+44h] [ebp-34h]
  float v23[3]; // [esp+48h] [ebp-30h] BYREF
  float v24[9]; // [esp+54h] [ebp-24h] BYREF
  float v25; // [esp+7Ch] [ebp+4h]
  float v26; // [esp+7Ch] [ebp+4h]
  float v27; // [esp+7Ch] [ebp+4h]
  float v28; // [esp+7Ch] [ebp+4h]

  if ( !a1 || !sub_5E3290(a1) )
    return 1;
  CharProxy = MobileObject_GetCharProxy(a1);
  v5 = (float *)CharProxy;
  if ( CharProxy && (*((_BYTE *)CharProxy + 0x1F4) & 1) != 0 )
  {
    v6 = a1->super.pos[0];
    v7 = a1->super.pos[2];
    v18 = a1->super.pos[1];
    v17 = v6;
    v19 = v7;
    v25 = sub_8913C0(v5);
    v23[0] = 0.0;
    *a3 = 1;
    GetZRotation = a1->vtbl->GetZRotation;
    v26 = v25 * dbl_A372E0;
    qmemcpy(v24, &stru_B26AF0[0xA].unk2C, sizeof(v24));
    v23[1] = v26 * dbl_A38618;
    v23[2] = 0.0;
    v27 = ((double (__thiscall *)(MobileObject *))GetZRotation)(a1) + dbl_A4D918;
    NiMatrix33_InitRotationTransform(v24, v27);
    HIDWORD(v12) = &Vector3_InitValue_;
    LODWORD(v12) = v24;
    sub_710580(v12, 1, (int)v23, (int)&v14);
    v20 = v17 + v14;
    v14 = v20;
    v21 = v15 + v18;
    v15 = v21;
    v22 = v16 + v19;
    v16 = v22;
    sub_8949C0(&v14, 1, 0, 0);
    if ( !v9 )
      *a3 = 0;
    *a2 = 1;
    v28 = ((double (__thiscall *)(MobileObject *))a1->vtbl->GetZRotation)(a1) - dbl_A4D918;
    NiMatrix33_InitRotationTransform(v24, v28);
    HIDWORD(v13) = &Vector3_InitValue_;
    LODWORD(v13) = v24;
    sub_710580(v13, 1, (int)v23, (int)&v14);
    v20 = v17 + v14;
    v14 = v20;
    v21 = v15 + v18;
    v15 = v21;
    v22 = v16 + v19;
    v16 = v22;
    sub_8949C0(&v14, 1, 0, 0);
    if ( v10 )
    {
      if ( *a2 )
        return 1;
    }
    else
    {
      *a2 = 0;
    }
    return *a3 != 0;
  }
  return 1;
}
