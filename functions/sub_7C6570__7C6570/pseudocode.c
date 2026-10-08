// Accumulate Oblivion light-level inputs: sum eligible full-list light influence and output reference-light ambient/diffuse channel maxima.
float __thiscall ShadowSceneNode_AccumulateLightLevelInputs(
        ShadowSceneNode_DecodedLayout *self,
        float x,
        float y,
        float z,
        unsigned int *positiveCount,
        float *outAmbientMax,
        float *outDiffuseMax,
        void *excludedBackingLight)
{
  _DWORD *fullListHead_E8; // esi
  void *v9; // edi
  ShadowSceneLight_DecodedLayout *v10; // ecx
  float *v11; // eax
  LONG (__stdcall *v12)(volatile LONG *); // edi
  void (__thiscall ***v13)(void *, int); // esi
  double v14; // st6
  double v15; // st7
  float *v16; // eax
  void (__thiscall ***v17)(void *, int); // esi
  double v18; // st6
  double v19; // st7
  float v22; // [esp+8h] [ebp-8h]
  ShadowSceneNode_DecodedLayout *v23; // [esp+Ch] [ebp-4h]
  float xa; // [esp+14h] [ebp+4h]
  float xb; // [esp+14h] [ebp+4h]
  float ya; // [esp+18h] [ebp+8h]
  float yb; // [esp+18h] [ebp+8h]
  float za; // [esp+1Ch] [ebp+Ch]
  float zb; // [esp+1Ch] [ebp+Ch]

  v22 = 0.0; /*0x7c6577*/
  fullListHead_E8 = self->fullListHead_E8;      // Iterate ShadowSceneNode full-list entries from +0xE8 for point/source influence accumulation. /*0x7c657c*/
  v23 = self; /*0x7c6585*/
  if ( fullListHead_E8 ) /*0x7c6589*/
  {
    v9 = excludedBackingLight; /*0x7c658b*/
    do /*0x7c65d8*/
    {
      v10 = (ShadowSceneLight_DecodedLayout *)fullListHead_E8[2]; /*0x7c6597*/
      fullListHead_E8 = (_DWORD *)*fullListHead_E8; /*0x7c659f*/
      if ( v10 ) /*0x7c65a1*/
      {
        v22 = ShadowSceneLight_ComputePointInfluenceScore(v10, x, y, z, v9) + v22;// Add this ShadowSceneLight's native point/source influence at the queried world position, excluding the supplied backing light. /*0x7c65be*/
        if ( v22 > 0.0 ) /*0x7c65cd*/
          ++*positiveCount; /*0x7c65d3*/
      }
    }
    while ( fullListHead_E8 ); /*0x7c65d8*/
    self = v23; /*0x7c65da*/
  }
  v11 = (float *)*ShadowSceneLight_GetLightRef((_DWORD *)self->lightLevelReference_118, &excludedBackingLight);// Resolve ShadowSceneNode+0x118 backing reference light and compute the maximum of its ambient RGB channels (+0xE0..+0xE8). /*0x7c65ee*/
  v12 = InterlockedDecrement; /*0x7c6602*/
  za = v11[0x3A]; /*0x7c6608*/
  xa = v11[0x38]; /*0x7c6612*/
  ya = v11[0x39]; /*0x7c6616*/
  if ( *(float *)&excludedBackingLight != 0.0 ) /*0x7c661a*/
  {
    v13 = (void (__thiscall ***)(void *, int))excludedBackingLight; /*0x7c661c*/
    if ( !v12((volatile LONG *)excludedBackingLight + 1) ) /*0x7c6622*/
      (**v13)(v13, 1); /*0x7c6634*/
  }
  if ( za >= (double)ya ) /*0x7c6645*/
  {
    *(float *)&excludedBackingLight = za; /*0x7c664f*/
    v14 = ya; /*0x7c6653*/
    v15 = za; /*0x7c6653*/
  }
  else
  {
    v14 = ya; /*0x7c6647*/
    v15 = za; /*0x7c6647*/
    *(float *)&excludedBackingLight = ya; /*0x7c6649*/
  }
  if ( *(float *)&excludedBackingLight >= (double)xa ) /*0x7c6664*/
  {
    if ( v14 > v15 ) /*0x7c6675*/
      v15 = v14; /*0x7c6677*/
  }
  else
  {
    v15 = xa; /*0x7c6668*/
  }
  *(float *)&excludedBackingLight = v15; /*0x7c6681*/
  *outAmbientMax = *(float *)&excludedBackingLight; /*0x7c6691*/
  v16 = (float *)*ShadowSceneLight_GetLightRef((_DWORD *)v23->lightLevelReference_118, &excludedBackingLight);// Resolve the same +0x118 backing reference light and compute the maximum of its diffuse RGB channels (+0xEC..+0xF4). /*0x7c669f*/
  zb = v16[0x3D]; /*0x7c66b3*/
  xb = v16[0x3B]; /*0x7c66bd*/
  yb = v16[0x3C]; /*0x7c66c1*/
  if ( *(float *)&excludedBackingLight != 0.0 ) /*0x7c66c5*/
  {
    v17 = (void (__thiscall ***)(void *, int))excludedBackingLight; /*0x7c66c7*/
    if ( !v12((volatile LONG *)excludedBackingLight + 1) ) /*0x7c66cd*/
      (**v17)(v17, 1); /*0x7c66df*/
  }
  if ( zb >= (double)yb ) /*0x7c66f0*/
  {
    *(float *)&excludedBackingLight = zb; /*0x7c66fa*/
    v18 = yb; /*0x7c66fe*/
    v19 = zb; /*0x7c66fe*/
  }
  else
  {
    v18 = yb; /*0x7c66f2*/
    v19 = zb; /*0x7c66f2*/
    *(float *)&excludedBackingLight = yb; /*0x7c66f4*/
  }
  if ( *(float *)&excludedBackingLight >= (double)xb ) /*0x7c670f*/
  {
    if ( v18 <= v19 ) /*0x7c6720*/
      goto LABEL_28; /*0x7c6720*/
  }
  else
  {
    v18 = xb; /*0x7c6711*/
  }
  v19 = v18; /*0x7c6713*/
LABEL_28:
  *(float *)&excludedBackingLight = v19; /*0x7c6724*/
  *outDiffuseMax = *(float *)&excludedBackingLight; /*0x7c6732*/
  return v22; /*0x7c6738*/
}
