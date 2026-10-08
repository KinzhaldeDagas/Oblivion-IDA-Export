// Applies the optional Compute transform to stock leaf geometry.
void __thiscall OB_CLeafGeometry_Transform_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        const OB_stTransform_010201A0 *transform)
{
  OB_SLodGeometry_010201A0 *v3; // esi
  int v4; // ebx
  int v5; // edi
  float *centerCoords; // edx
  double v7; // st7
  float *v8; // edx
  double v9; // st2
  double v10; // st7
  float *originalCenterCoords; // edx
  double v12; // st7
  float *v13; // edx
  double v14; // st2
  double v15; // st7
  int v16; // edx
  double v17; // st7
  int v18; // esi
  OB_stVec3_010201A0 *leafTextureDimensions; // eax
  double x; // st6
  float *p_x; // eax
  int v22; // [esp+0h] [ebp-34h]
  float v23; // [esp+4h] [ebp-30h]
  float v24; // [esp+8h] [ebp-2Ch]
  float v25; // [esp+10h] [ebp-24h]
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+18h] [ebp-1Ch]
  float v28; // [esp+1Ch] [ebp-18h]
  float v29; // [esp+20h] [ebp-14h]
  float v30; // [esp+28h] [ebp-Ch]
  float v31; // [esp+2Ch] [ebp-8h]
  float v32; // [esp+30h] [ebp-4h]
  float *transform4x4; // [esp+38h] [ebp+4h]

  if ( this->lodGeometryRecords ) /*0x798365*/
  {
    if ( this->leafTextureDimensions ) /*0x79836e*/
    {
      v22 = 0; /*0x798380*/
      if ( this->leafLodCount ) /*0x798377*/
      {
        transform4x4 = 0; /*0x79838c*/
        do /*0x7984fc*/
        {
          v3 = (OB_SLodGeometry_010201A0 *)((char *)transform4x4 + (unsigned int)this->lodGeometryRecords); /*0x798394*/
          v4 = 0; /*0x798398*/
          if ( v3->leafCount ) /*0x79839a*/
          {
            v5 = 0; /*0x7983a4*/
            do /*0x7984e0*/
            {
              centerCoords = v3->centerCoords; /*0x7983a6*/
              v7 = centerCoords[v5]; /*0x7983a9*/
              v8 = &centerCoords[v5]; /*0x7983ac*/
              v23 = v7; /*0x7983ae*/
              v24 = v8[1]; /*0x7983b5*/
              v9 = v8[2]; /*0x7983e0*/
              v25 = transform->m[8] * v9 + transform->m[0] * v23 + transform->m[4] * v24 + transform->m[0xC]; /*0x7983eb*/
              v26 = transform->m[1] * v23 + transform->m[5] * v24 + transform->m[9] * v9 + transform->m[0xD]; /*0x798409*/
              v10 = v9 * transform->m[0xA] + v24 * transform->m[6] + v23 * transform->m[2] + transform->m[0xE]; /*0x798422*/
              *v8 = v25; /*0x798425*/
              v8[1] = v26; /*0x79842b*/
              v27 = v10; /*0x79842e*/
              v8[2] = v27; /*0x798436*/
              if ( this->vertexWeighting ) /*0x798439*/
              {
                originalCenterCoords = v3->originalCenterCoords; /*0x798443*/
                v12 = originalCenterCoords[v5]; /*0x798446*/
                v13 = &originalCenterCoords[v5]; /*0x798449*/
                v28 = v12; /*0x79844b*/
                v29 = v13[1]; /*0x798452*/
                v14 = v13[2]; /*0x79847d*/
                v30 = transform->m[8] * v14 + transform->m[0] * v28 + transform->m[4] * v29 + transform->m[0xC]; /*0x798488*/
                v31 = transform->m[5] * v29 + transform->m[1] * v28 + transform->m[9] * v14 + transform->m[0xD]; /*0x7984a6*/
                v15 = v28 * transform->m[2] + v29 * transform->m[6] + v14 * transform->m[0xA] + transform->m[0xE]; /*0x7984bd*/
                *v13 = v30; /*0x7984c0*/
                v13[1] = v31; /*0x7984c6*/
                v32 = v15; /*0x7984c9*/
                v13[2] = v32; /*0x7984d1*/
              }
              ++v4; /*0x7984d8*/
              v5 += 3; /*0x7984db*/
            }
            while ( v4 < v3->leafCount ); /*0x7984e0*/
          }
          transform4x4 += 0x11; /*0x7984ee*/
          ++v22; /*0x7984f8*/
        }
        while ( v22 < this->leafLodCount ); /*0x7984fc*/
      }
      v16 = 0; /*0x798507*/
      if ( this->leafTextureCount ) /*0x798509*/
      {
        v17 = transform->m[0]; /*0x798513*/
        v18 = 0; /*0x798517*/
        do /*0x798541*/
        {
          leafTextureDimensions = this->leafTextureDimensions; /*0x798519*/
          x = leafTextureDimensions[v18].x; /*0x79851c*/
          p_x = &leafTextureDimensions[v18].x; /*0x79851f*/
          ++v16; /*0x798523*/
          ++v18; /*0x798526*/
          *p_x = x * v17; /*0x798529*/
          p_x[1] = p_x[1] * v17; /*0x798530*/
          p_x[2] = p_x[2] * v17; /*0x798538*/
        }
        while ( v16 < this->leafTextureCount ); /*0x798541*/
      }
    }
  }
}
