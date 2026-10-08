void __thiscall sub_70C720(int this, float *a2, float *a3, float *a4, float a5)
{
  float v6; // edx
  bool v8; // zf
  double v10; // st7
  double v11; // st7
  NiPoint3 *v12; // eax
  double x; // st7
  double y; // st6
  double z; // st5
  NiPoint3 *v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  double v21; // st6
  double v22; // st6
  double v23; // st7
  double v24; // rt0
  double v25; // rt1
  double v26; // st7
  float v27; // [esp+0h] [ebp-38h]
  float v28; // [esp+0h] [ebp-38h]
  float v29; // [esp+4h] [ebp-34h]
  float v30; // [esp+8h] [ebp-30h]
  float v31; // [esp+Ch] [ebp-2Ch]
  float v32; // [esp+10h] [ebp-28h]
  NiPoint3 v33; // [esp+14h] [ebp-24h] BYREF
  NiPoint3 out; // [esp+20h] [ebp-18h] BYREF
  NiPoint3 rhs; // [esp+2Ch] [ebp-Ch] BYREF
  float v36; // [esp+3Ch] [ebp+4h]
  float v37; // [esp+40h] [ebp+8h]
  float v38; // [esp+40h] [ebp+8h]
  int v39; // [esp+40h] [ebp+8h]
  int v40; // [esp+40h] [ebp+8h]
  int v41; // [esp+40h] [ebp+8h]
  int v42; // [esp+40h] [ebp+8h]

  v6 = a2[1]; /*0x70c72a*/
  v36 = a2[3]; /*0x70c72d*/
  v8 = *(_BYTE *)(this + 0x104) == 0; /*0x70c735*/
  v30 = *a2; /*0x70c73e*/
  v31 = v6; /*0x70c74f*/
  v32 = a2[2]; /*0x70c753*/
  v33.x = *a2 - *(float *)(this + 0x88); /*0x70c757*/
  v33.y = v6 - *(float *)(this + 0x8C); /*0x70c76e*/
  v33.z = v32 - *(float *)(this + 0x90); /*0x70c77c*/
  v29 = 1.0 / (*(float *)(this + 0x100) - *(float *)(this + 0xFC)); /*0x70c790*/
  out.x = *(float *)(this + 0x64); /*0x70c797*/
  out.y = *(float *)(this + 0x70); /*0x70c79e*/
  out.z = *(float *)(this + 0x7C); /*0x70c7a5*/
  v27 = out.y * v33.y + out.x * v33.x + out.z * v33.z; /*0x70c7c5*/
  v28 = v27 - *(float *)(this + 0xFC); /*0x70c7d3*/
  v10 = v36; /*0x70c7d7*/
  if ( v8 ) /*0x70c7dd*/
  {
    v37 = v28 - v10; /*0x70c7f0*/
    a3[2] = v37 * v29; /*0x70c802*/
    v38 = v10 + v28; /*0x70c80b*/
    v11 = v29 * v38; /*0x70c80f*/
  }
  else
  {
    v11 = 0.0; /*0x70c7df*/
    a3[2] = 0.0; /*0x70c7e1*/
  }
  a4[2] = v11; /*0x70c813*/
  rhs.x = *(float *)(this + 0x68); /*0x70c81e*/
  rhs.y = *(float *)(this + 0x74); /*0x70c82a*/
  rhs.z = *(float *)(this + 0x80); /*0x70c838*/
  v12 = NiPoint3__NormalizedCrossProduct(&v33, &out, &rhs); /*0x70c83c*/
  rhs.x = v12->x * v36; /*0x70c84d*/
  rhs.y = v12->y * v36; /*0x70c856*/
  rhs.z = v36 * v12->z; /*0x70c85d*/
  x = rhs.x; /*0x70c86d*/
  out.x = v30 - rhs.x; /*0x70c86f*/
  y = rhs.y; /*0x70c87f*/
  out.y = v31 - rhs.y; /*0x70c881*/
  z = rhs.z; /*0x70c891*/
  out.z = v32 - rhs.z; /*0x70c893*/
  *(float *)&v39 = *(float *)(this + 0xDC) * out.x /*0x70c8c9*/
                 + *(float *)(this + 0xE0) * out.y
                 + out.z * *(float *)(this + 0xE4)
                 + *(float *)(this + 0xE8);
  if ( a5 >= (double)*(float *)&v39 ) /*0x70c8dc*/
    goto LABEL_32; /*0x70c8dc*/
  *a3 = (out.y * *(float *)(this + 0xB0) /*0x70c90a*/
       + out.x * *(float *)(this + 0xAC)
       + *(float *)(this + 0xB4) * out.z
       + *(float *)(this + 0xB8))
      / *(float *)&v39;
  rhs.x = x + v30; /*0x70c914*/
  rhs.y = y + v31; /*0x70c91c*/
  rhs.z = z + v32; /*0x70c924*/
  *(float *)&v40 = *(float *)(this + 0xE0) * rhs.y /*0x70c95e*/
                 + rhs.x * *(float *)(this + 0xDC)
                 + rhs.z * *(float *)(this + 0xE4)
                 + *(float *)(this + 0xE8);
  if ( a5 >= (double)*(float *)&v40 ) /*0x70c971*/
    goto LABEL_32; /*0x70c971*/
  *a4 = (rhs.y * *(float *)(this + 0xB0) /*0x70c9a9*/
       + rhs.x * *(float *)(this + 0xAC)
       + rhs.z * *(float *)(this + 0xB4)
       + *(float *)(this + 0xB8))
      / *(float *)&v40;
  rhs.x = *(float *)(this + 0x6C); /*0x70c9ae*/
  rhs.y = *(float *)(this + 0x78); /*0x70c9b5*/
  rhs.z = *(float *)(this + 0x84); /*0x70c9bf*/
  v16 = NiPoint3__NormalizedCrossProduct(&rhs, &out, &v33); /*0x70c9c3*/
  rhs.x = v16->x * v36; /*0x70c9d4*/
  rhs.y = v16->y * v36; /*0x70c9dd*/
  rhs.z = v36 * v16->z; /*0x70c9e4*/
  v17 = rhs.x; /*0x70c9f4*/
  out.x = v30 - rhs.x; /*0x70c9f6*/
  v18 = rhs.y; /*0x70ca06*/
  out.y = v31 - rhs.y; /*0x70ca08*/
  v19 = rhs.z; /*0x70ca18*/
  out.z = v32 - rhs.z; /*0x70ca1a*/
  *(float *)&v41 = *(float *)(this + 0xE0) * out.y /*0x70ca4e*/
                 + out.x * *(float *)(this + 0xDC)
                 + out.z * *(float *)(this + 0xE4)
                 + *(float *)(this + 0xE8);
  if ( a5 >= (double)*(float *)&v41 /*0x70caf7*/
    || (a3[1] = (out.y * *(float *)(this + 0xC0)
               + out.x * *(float *)(this + 0xBC)
               + *(float *)(this + 0xC4) * out.z
               + *(float *)(this + 0xC8))
              / *(float *)&v41,
        rhs.x = v17 + v30,
        rhs.y = v18 + v31,
        rhs.z = v19 + v32,
        *(float *)&v42 = *(float *)(this + 0xE0) * rhs.y
                       + rhs.x * *(float *)(this + 0xDC)
                       + rhs.z * *(float *)(this + 0xE4)
                       + *(float *)(this + 0xE8),
        a5 >= (double)*(float *)&v42) )
  {
LABEL_32:
    v26 = kTerrainLODQuadRayDirectionZ; /*0x70cc2a*/
    a3[1] = kTerrainLODQuadRayDirectionZ; /*0x70cc30*/
    *a3 = v26; /*0x70cc33*/
    v23 = 1.0; /*0x70cc35*/
    a4[1] = 1.0; /*0x70cc37*/
    *a4 = 1.0; /*0x70cc3a*/
    goto LABEL_25; /*0x70cc3c*/
  }
  a4[1] = (rhs.y * *(float *)(this + 0xC0) /*0x70cb21*/
         + rhs.x * *(float *)(this + 0xBC)
         + rhs.z * *(float *)(this + 0xC4)
         + *(float *)(this + 0xC8))
        / *(float *)&v42;
  v20 = kTerrainLODQuadRayDirectionZ; /*0x70cb24*/
  v21 = 1.0; /*0x70cb2e*/
  if ( v20 <= *a3 ) /*0x70cb33*/
  {
    if ( *a4 > 1.0 ) /*0x70cb5c*/
    {
      *a4 = 1.0; /*0x70cb5e*/
      if ( *a3 > 1.0 ) /*0x70cb67*/
        *a3 = 1.0; /*0x70cb69*/
    }
  }
  else
  {
    v22 = kTerrainLODQuadRayDirectionZ; /*0x70cb35*/
    v23 = 1.0; /*0x70cb35*/
    *a3 = kTerrainLODQuadRayDirectionZ; /*0x70cb37*/
    if ( v22 > *a4 ) /*0x70cb40*/
    {
      *a4 = v22; /*0x70cb42*/
      goto LABEL_17; /*0x70cb44*/
    }
    v24 = v22; /*0x70cb46*/
    v21 = 1.0; /*0x70cb46*/
    v20 = v24; /*0x70cb46*/
    if ( *a4 > 1.0 ) /*0x70cb4f*/
      *a4 = 1.0; /*0x70cb51*/
  }
  v25 = v21; /*0x70cb6b*/
  v22 = v20; /*0x70cb6b*/
  v23 = v25; /*0x70cb6b*/
LABEL_17:
  if ( v22 <= a3[1] ) /*0x70cb75*/
  {
    if ( v23 < a4[1] ) /*0x70cba4*/
    {
      a4[1] = v23; /*0x70cba6*/
      if ( v23 < a3[1] ) /*0x70cbb1*/
        a3[1] = v23; /*0x70cbb3*/
    }
  }
  else
  {
    a3[1] = v22; /*0x70cb77*/
    if ( v22 <= a4[1] ) /*0x70cb82*/
    {
      if ( v23 < a4[1] ) /*0x70cb93*/
        a4[1] = v23; /*0x70cb95*/
    }
    else
    {
      a4[1] = v22; /*0x70cb84*/
    }
  }
LABEL_25:
  if ( a3[2] >= 0.0 ) /*0x70cbc0*/
  {
    if ( v23 < a4[2] ) /*0x70cbe7*/
    {
      a4[2] = v23; /*0x70cbe9*/
      if ( v23 < a3[2] ) /*0x70cbf4*/
        a3[2] = v23; /*0x70cbf7*/
    }
  }
  else
  {
    a3[2] = 0.0; /*0x70cbc2*/
    if ( a4[2] < 0.0 ) /*0x70cbcd*/
    {
      v23 = 0.0; /*0x70cbcf*/
LABEL_28:
      a4[2] = v23; /*0x70cbd1*/
      return; /*0x70cbda*/
    }
    if ( v23 < a4[2] ) /*0x70cc53*/
      goto LABEL_28; /*0x70cc53*/
  }
}
