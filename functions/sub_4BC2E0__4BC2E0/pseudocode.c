// Verified: tests whether a world position lies inside a placed TESSubSpace. Requires base form kFormType_SubSpace (0x29) and reference flag 0x20 clear; first applies bound-radius broadphase (+0x2C times reference scale), transforms the query into local space, then tests all three scaled half-extents.
// local variable allocation has failed, the output may be wrong!
char __usercall TESSubSpace_ContainsPosition@<al>(
        float *worldPosition,
        TESObjectREFR *candidate,
        float searchScale@<st0>)
{
  TESSubSpace *v4; // edi
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float v9; // [esp+8h] [ebp-44h]
  float v10; // [esp+Ch] [ebp-40h]
  float v11; // [esp+Ch] [ebp-40h]
  float v12; // [esp+Ch] [ebp-40h]
  float v13; // [esp+10h] [ebp-3Ch] BYREF
  float v14; // [esp+14h] [ebp-38h]
  float v15; // [esp+18h] [ebp-34h]
  float outHalfExtents; // [esp+1Ch] [ebp-30h] BYREF
  float v17; // [esp+20h] [ebp-2Ch]
  float v18; // [esp+24h] [ebp-28h]
  float v19[9]; // [esp+28h] [ebp-24h] BYREF
  TESObjectREFR *candidatea; // [esp+54h] [ebp+8h]

  if ( candidate ) /*0x4bc2ed*/
  {
    if ( (candidate->member.super.flags & 0x20) == 0 /*0x4bc311*/
      && candidate->vtbl->GetBaseForm(candidate)->member.type == kFormType_SubSpace )
    {
      v4 = (TESSubSpace *)candidate->vtbl->GetBaseForm(candidate); /*0x4bc324*/
      if ( v4 ) /*0x4bc328*/
      {
        candidate->vtbl->GetScale(candidate); /*0x4bc338*/
        *(float *)&candidatea = *(double *)&searchScale; /*0x4bc33a*/
        v5 = candidate->vtbl->GetPos(candidate); /*0x4bc348*/
        v9 = worldPosition[1] - v5[1]; /*0x4bc354*/
        v10 = worldPosition[2] - v5[2]; /*0x4bc35e*/
        v13 = *worldPosition - *v5; /*0x4bc366*/
        v14 = v9; /*0x4bc36e*/
        v15 = v10; /*0x4bc376*/
        v11 = v9 * v9 + v13 * v13 + v10 * v10; /*0x4bc38a*/
        v12 = sqrt(v11); /*0x4bc397*/
        if ( v4->boundRadius * *(float *)&candidatea > v12 ) /*0x4bc3ad*/
        {
          v6 = sub_4D7AF0((float *)candidate, v19); /*0x4bc3ba*/
          v7 = NiPoint3_MultiplyMatrix3(&outHalfExtents, &v13, v6); /*0x4bc3ca*/
          v13 = *v7; /*0x4bc3d1*/
          v14 = v7[1]; /*0x4bc3df*/
          v15 = v7[2]; /*0x4bc3e9*/
          TESSubSpace_GetHalfExtents(v4, &outHalfExtents); /*0x4bc3ed*/
          outHalfExtents = outHalfExtents * *(float *)&candidatea; /*0x4bc400*/
          v17 = v17 * *(float *)&candidatea; /*0x4bc40a*/
          v18 = *(float *)&candidatea * v18; /*0x4bc412*/
          if ( outHalfExtents > (double)v13 ) /*0x4bc425*/
          {
            if ( v17 <= (double)v14 ) /*0x4bc436*/
              return 0; /*0x4bc436*/
            if ( v18 > (double)v15 ) /*0x4bc447*/
            {
              if ( -outHalfExtents < v13 ) /*0x4bc456*/
                return -v17 < v14 && -v18 < v15; /*0x4bc46c*/
              return 0; /*0x4bc489*/
            }
          }
        }
      }
    }
  }
  return 0; /*0x4bc471*/
}
