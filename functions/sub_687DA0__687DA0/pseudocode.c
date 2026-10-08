char __cdecl sub_687DA0(MobileObject *a1, float *a2, NiPoint3 *a3, char a4)
{
  char v4; // al
  float v5; // edx
  float v6; // eax
  float *Head; // eax
  float v8; // edi
  float v9; // ebp
  float v10; // ebx
  float y; // edx
  float z; // eax
  NiAVObject *v13; // esi
  BSShaderProperty *v14; // eax
  NiAVObject *v16; // esi
  BSShaderProperty *VertexColorProperty; // eax
  float v18; // [esp+18h] [ebp-60h]
  double v19; // [esp+1Ch] [ebp-5Ch] BYREF
  float v20; // [esp+24h] [ebp-54h]
  float v21; // [esp+28h] [ebp-50h]
  float v22; // [esp+2Ch] [ebp-4Ch]
  NiPoint3 end; // [esp+30h] [ebp-48h] BYREF
  NiPoint3 start; // [esp+3Ch] [ebp-3Ch] BYREF
  float v25; // [esp+48h] [ebp-30h] BYREF
  float v26; // [esp+4Ch] [ebp-2Ch]
  float v27; // [esp+50h] [ebp-28h]
  float v28; // [esp+54h] [ebp-24h]
  TeleportData v29; // [esp+58h] [ebp-20h] BYREF
  unsigned int v30; // [esp+74h] [ebp-4h]

  if ( unk_B3C089 ) /*0x687dc7*/
    return 1; /*0x687dc7*/
  *(float *)&v19 = *a2 - a3->x; /*0x687de3*/
  v18 = a2[1] - a3->y; /*0x687ded*/
  v22 = a2[2] - a3->z; /*0x687df7*/
  v19 = v18 * v18 + *(float *)&v19 * *(float *)&v19; /*0x687e0b*/
  v22 = v19 + v22 * v22; /*0x687e17*/
  v22 = sqrt(v22); /*0x687e24*/
  if ( v22 < 1.0 ) /*0x687e3f*/
    return 1; /*0x687e3f*/
  if ( v22 > (double)flt_A56670 ) /*0x687e53*/
  {
    v22 = v19; /*0x687e59*/
    v22 = sqrt(v22); /*0x687e66*/
    if ( v22 < dbl_A74D18 ) /*0x687e79*/
      return 0; /*0x687e79*/
  }
  if ( !a1 || !MobileObject_GetCharProxy(a1) ) /*0x687e8d*/
    return 1; /*0x687e94*/
  if ( !MEMORY[0xB333A0]->currentInteriorCell && !sub_43F840(MEMORY[0xB333A0], &a3->x) ) /*0x687ea7*/
    return 0; /*0x68805d*/
  sub_68CB30(&v29); /*0x687eb8*/
  v30 = 0; /*0x687ec5*/
  v4 = a4 || byte_B15824; /*0x687edc*/
  if ( !sub_686450(a1, a3, &v29, 1, v4) ) /*0x687ef5*/
  {
LABEL_20:
    v30 = 0xFFFFFFFF; /*0x688037*/
    Shared_NoOpVirtual_60D0A0(&v29); /*0x688043*/
    return 0; /*0x688043*/
  }
  v5 = a2[1]; /*0x687efd*/
  v6 = a2[2]; /*0x687f00*/
  start.x = *a2; /*0x687f03*/
  start.y = v5; /*0x687f0b*/
  start.z = v6; /*0x687f0f*/
  Head = (float *)EmbeddedList_GetHead((char *)&v29); /*0x687f13*/
  v8 = *Head; /*0x687f18*/
  end.x = *Head; /*0x687f1a*/
  v9 = Head[1]; /*0x687f26*/
  end.y = v9; /*0x687f29*/
  v10 = Head[2]; /*0x687f2d*/
  v22 = end.x - start.x; /*0x687f30*/
  end.z = v10; /*0x687f3c*/
  *(float *)&v19 = v9 - start.y; /*0x687f44*/
  v25 = v22; /*0x687f4c*/
  v26 = *(float *)&v19; /*0x687f54*/
  v27 = 0.0; /*0x687f5a*/
  *(float *)&v19 = NiPoint3_Length(&v25); /*0x687f63*/
  v22 = v10 - start.z; /*0x687f77*/
  v22 = fabs(v22); /*0x687f81*/
  if ( *(float *)&v19 >= (double)v22 ) /*0x687f94*/
  {
    a3->x = v8; /*0x688064*/
    a3->y = v9; /*0x688068*/
    a3->z = v10; /*0x68806b*/
    if ( !sub_687060((TESChildCELL *)a1, &start, &end, a4) ) /*0x688081*/
    {
      if ( a4 ) /*0x68808f*/
      {
        v25 = 1.0; /*0x688097*/
        v26 = 1.0; /*0x68809c*/
        v27 = 0.0; /*0x6880a7*/
        v28 = 0.0; /*0x6880af*/
        v20 = 0.0; /*0x6880b4*/
        v21 = 0.0; /*0x6880bc*/
        *(float *)&v19 = 1.0; /*0x6880c1*/
        *((float *)&v19 + 1) = 1.0; /*0x6880c5*/
        v16 = NiLines_CreateSegment(&start, (const NiColorAlpha *)&v19, &end, (const NiColorAlpha *)&v25); /*0x6880d1*/
        VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x6880d3*/
        sub_405680((NiNode *)v16, VertexColorProperty); /*0x6880db*/
        sub_440E60(MEMORY[0xB333A0], (int)v16, flt_A3D8F0); /*0x6880f1*/
      }
      goto LABEL_25; /*0x6880f1*/
    }
    goto LABEL_20; /*0x68808b*/
  }
  if ( start.z <= (double)v10 || !sub_5E34B0(a1) ) /*0x687fa7*/
  {
    if ( byte_B15824 ) /*0x687fc9*/
    {
      v25 = 1.0; /*0x687fd8*/
      v26 = 0.0; /*0x687fe3*/
      v27 = 0.0; /*0x687fe8*/
      v28 = 0.0; /*0x687ff0*/
      *(float *)&v19 = 0.0; /*0x687ff5*/
      v20 = 0.0; /*0x687ffd*/
      v21 = 0.0; /*0x688002*/
      *((float *)&v19 + 1) = 1.0; /*0x688006*/
      v13 = NiLines_CreateSegment(&start, (const NiColorAlpha *)&v19, &end, (const NiColorAlpha *)&v25); /*0x688012*/
      v14 = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x688014*/
      sub_405680((NiNode *)v13, v14); /*0x68801c*/
      sub_440E60(MEMORY[0xB333A0], (int)v13, flt_A3D8F0); /*0x688032*/
    }
    goto LABEL_20; /*0x688032*/
  }
  y = end.y; /*0x687fb4*/
  z = end.z; /*0x687fb8*/
  a3->x = end.x; /*0x687fbc*/
  a3->y = y; /*0x687fbe*/
  a3->z = z; /*0x687fc1*/
LABEL_25:
  v30 = 0xFFFFFFFF; /*0x6880f6*/
  Shared_NoOpVirtual_60D0A0(&v29); /*0x688102*/
  return 1; /*0x68804a*/
}
