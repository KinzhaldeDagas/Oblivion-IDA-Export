char __cdecl sub_687DA0(MobileObject *a1, float *a2, NiPoint3 *a3, char a4)
{
  char v4; // al
  float v5; // edx
  float v6; // eax
  int v7; // eax
  float v8; // edi
  float v9; // ebp
  float v10; // ebx
  float v11; // edx
  float v12; // eax
  NiAVObject *v13; // esi
  BSShaderProperty *v14; // eax
  NiAVObject *v16; // esi
  BSShaderProperty *v17; // eax
  float v18; // [esp+18h] [ebp-60h]
  double v19; // [esp+1Ch] [ebp-5Ch] BYREF
  float v20; // [esp+24h] [ebp-54h]
  float v21; // [esp+28h] [ebp-50h]
  float v22; // [esp+2Ch] [ebp-4Ch]
  float v23; // [esp+30h] [ebp-48h] BYREF
  float v24; // [esp+34h] [ebp-44h]
  float v25; // [esp+38h] [ebp-40h]
  float v26; // [esp+3Ch] [ebp-3Ch] BYREF
  float v27; // [esp+40h] [ebp-38h]
  float v28; // [esp+44h] [ebp-34h]
  float v29; // [esp+48h] [ebp-30h] BYREF
  float v30; // [esp+4Ch] [ebp-2Ch]
  float v31; // [esp+50h] [ebp-28h]
  float v32; // [esp+54h] [ebp-24h]
  TeleportData v33; // [esp+58h] [ebp-20h] BYREF
  unsigned int v34; // [esp+74h] [ebp-4h]

  if ( byte_B3C089 )
    return 1;
  *(float *)&v19 = *a2 - a3->x;
  v18 = a2[1] - a3->y;
  v22 = a2[2] - a3->z;
  v19 = v18 * v18 + *(float *)&v19 * *(float *)&v19;
  v22 = v19 + v22 * v22;
  v22 = sqrt(v22);
  if ( v22 < 1.0 )
    return 1;
  if ( v22 > (double)flt_A56670 )
  {
    v22 = v19;
    v22 = sqrt(v22);
    if ( v22 < dbl_A74D18 )
      return 0;
  }
  if ( !a1 || !MobileObject_GetCharProxy(a1) )
    return 1;
  if ( !TES->currentInteriorCell && !sub_43F840(TES, &a3->x) )
    return 0;
  sub_68CB30(&v33);
  v34 = 0;
  v4 = a4 || byte_B15824;
  if ( !sub_686450(a1, a3, &v33, 1, v4) )
  {
LABEL_20:
    v34 = 0xFFFFFFFF;
    TESTexture::ClearComponentReferences(&v33);
    return 0;
  }
  v5 = a2[1];
  v6 = a2[2];
  v26 = *a2;
  v27 = v5;
  v28 = v6;
  v7 = sub_6899C0((char *)&v33);
  v8 = *(float *)v7;
  v23 = *(float *)v7;
  v9 = *(float *)(v7 + 4);
  v24 = v9;
  v10 = *(float *)(v7 + 8);
  v22 = v23 - v26;
  v25 = v10;
  *(float *)&v19 = v9 - v27;
  v29 = v22;
  v30 = *(float *)&v19;
  v31 = 0.0;
  *(float *)&v19 = sub_404C90(&v29);
  v22 = v10 - v28;
  v22 = fabs(v22);
  if ( *(float *)&v19 >= (double)v22 )
  {
    a3->x = v8;
    a3->y = v9;
    a3->z = v10;
    if ( !sub_687060(a1, &v26, &v23, a4) )
    {
      if ( a4 )
      {
        v29 = 1.0;
        v30 = 1.0;
        v31 = 0.0;
        v32 = 0.0;
        v20 = 0.0;
        v21 = 0.0;
        *(float *)&v19 = 1.0;
        *((float *)&v19 + 1) = 1.0;
        v16 = sub_47F070(&v26, &v19, &v23, &v29);
        v17 = (BSShaderProperty *)sub_4E70B0();
        sub_405680((NiNode *)v16, v17);
        sub_440E60(TES, (int)v16, flt_A3D8F0);
      }
      goto LABEL_25;
    }
    goto LABEL_20;
  }
  if ( v28 <= (double)v10 || !sub_5E34B0(a1) )
  {
    if ( byte_B15824 )
    {
      v29 = 1.0;
      v30 = 0.0;
      v31 = 0.0;
      v32 = 0.0;
      *(float *)&v19 = 0.0;
      v20 = 0.0;
      v21 = 0.0;
      *((float *)&v19 + 1) = 1.0;
      v13 = sub_47F070(&v26, &v19, &v23, &v29);
      v14 = (BSShaderProperty *)sub_4E70B0();
      sub_405680((NiNode *)v13, v14);
      sub_440E60(TES, (int)v13, flt_A3D8F0);
    }
    goto LABEL_20;
  }
  v11 = v24;
  v12 = v25;
  a3->x = v23;
  a3->y = v11;
  a3->z = v12;
LABEL_25:
  v34 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(&v33);
  return 1;
}
