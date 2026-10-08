// Detect duplicate and find ordered insertion point using normalized receiver-surface distance: (distance to light - receiver radius) / light range.
unsigned __int8 __thiscall BSShaderProperty_FindShadowLightInsertionPoint(
        MEF_PropertyShadowLightListView32 *self,
        ShadowSceneLight_DecodedLayout *light,
        const MEF_ReceiverBound32 *bound,
        MEF_RefListNode32 **before)
{
  MEF_RefListNode32 *lightListHead_70; // ecx
  MEF_RefListNode32 *next; // ebp
  ShadowSceneLight_DecodedLayout *payload; // edi
  float v8; // esi
  float *v9; // eax
  const MEF_ReceiverBound32 *v10; // esi
  double v11; // st7
  float v12; // ebx
  const MEF_ReceiverBound32 *v13; // ebx
  float *v14; // eax
  double v15; // st7
  void (__thiscall ***v16)(_DWORD, int); // edi
  MEF_RefListNode32 *v17; // [esp+10h] [ebp-20h]
  float v18; // [esp+14h] [ebp-1Ch] BYREF
  float v19; // [esp+18h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-14h] BYREF
  float v21; // [esp+20h] [ebp-10h]
  float v22; // [esp+24h] [ebp-Ch]
  float v23; // [esp+28h] [ebp-8h]
  float v24; // [esp+2Ch] [ebp-4h]

  *before = 0; /*0x7ecc67*/
  if ( !self->lightListCount_78 ) /*0x7ecc6d*/
    return 0; /*0x7ecc73*/
  lightListHead_70 = self->lightListHead_70; /*0x7ecc7b*/
  next = lightListHead_70->next; /*0x7ecc84*/
  payload = (ShadowSceneLight_DecodedLayout *)lightListHead_70->payload; /*0x7ecc88*/
  v17 = lightListHead_70; /*0x7ecc8b*/
  v19 = *(float *)(*ShadowSceneLight_GetLightRef(light, &v18) + 0xF8); /*0x7ecca9*/
  if ( v18 != 0.0 ) /*0x7eccad*/
  {
    v8 = v18; /*0x7eccaf*/
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v18) + 4)) ) /*0x7eccb5*/
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v8))(LODWORD(v8), 1); /*0x7ecccb*/
  }
  if ( payload ) /*0x7ecccf*/
  {
    v9 = (float *)*ShadowSceneLight_GetLightRef(light, &v18); /*0x7ecce1*/
    v10 = bound; /*0x7ecce3*/
    v11 = v9[0x22] - bound->centerX; /*0x7ecced*/
    v9 += 0x22; /*0x7eccef*/
    v22 = v11; /*0x7eccf4*/
    v23 = v9[1] - bound->centerY; /*0x7eccfe*/
    v24 = v9[2] - bound->centerZ; /*0x7ecd08*/
    *(float *)&bound = v23 * v23 + v22 * v22 + v24 * v24; /*0x7ecd28*/
    *(float *)&bound = sqrt(*(float *)&bound); /*0x7ecd35*/
    v21 = (*(float *)&bound - v10->radius) / v19; /*0x7ecd4a*/
    if ( v18 != 0.0 ) /*0x7ecd4e*/
    {
      v12 = v18; /*0x7ecd50*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v18) + 4)) ) /*0x7ecd56*/
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v12))(LODWORD(v12), 1); /*0x7ecd6c*/
    }
    while ( 1 ) /*0x7ecd70*/
    {
      if ( payload == light ) /*0x7ecd74*/
        return 1; /*0x7ece99*/
      if ( !*before ) /*0x7ecd7e*/
      {
        v18 = *(float *)(*ShadowSceneLight_GetLightRef(payload, &bound) + 0xF8); /*0x7ecda1*/
        if ( *(float *)&bound != 0.0 ) /*0x7ecda5*/
        {
          v13 = bound; /*0x7ecda7*/
          if ( !InterlockedDecrement((volatile LONG *)&bound->centerY) ) /*0x7ecdad*/
            (*(void (__thiscall **)(const MEF_ReceiverBound32 *, int))LODWORD(v13->centerX))(v13, 1); /*0x7ecdc3*/
        }
        v14 = (float *)*ShadowSceneLight_GetLightRef(payload, &v20); /*0x7ecdd1*/
        v15 = v14[0x22]; /*0x7ecdd3*/
        v14 += 0x22; /*0x7ecdd9*/
        v22 = v15 - v10->centerX; /*0x7ecde0*/
        v23 = v14[1] - v10->centerY; /*0x7ecdea*/
        v24 = v14[2] - v10->centerZ; /*0x7ecdf4*/
        v19 = v23 * v23 + v22 * v22 + v24 * v24; /*0x7ece14*/
        v19 = sqrt(v19); /*0x7ece21*/
        v19 = (v19 - v10->radius) / v18; /*0x7ece36*/
        if ( v20 ) /*0x7ece3a*/
        {
          v16 = (void (__thiscall ***)(_DWORD, int))v20; /*0x7ece3c*/
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x7ece42*/
            (**v16)(v16, 1); /*0x7ece58*/
        }
        if ( v19 > (double)v21 ) /*0x7ece69*/
          break; /*0x7ece69*/
      }
      if ( !next ) /*0x7ece6d*/
        return 0; /*0x7ece6d*/
      payload = (ShadowSceneLight_DecodedLayout *)next->payload; /*0x7ece6f*/
      v17 = next; /*0x7ece77*/
      next = next->next; /*0x7ece7b*/
      if ( !payload ) /*0x7ece7e*/
        return 0; /*0x7ece8d*/
    }
    *before = v17; /*0x7ecea4*/
  }
  return 0; /*0x7ecc75*/
}
