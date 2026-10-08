// Rotates the SFrondGuide range [first,middle) with [middle,last). Uses a greatest-common-divisor cycle decomposition and deep guide movement so embedded vertex-vector ownership remains valid.
void __cdecl OB_SFrondGuide_RotateRange_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *middle,
        OB_SFrondGuide_010201A0 *last)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // esi
  float *p_radius; // ebp
  float *v9; // edi
  char v10; // cl
  int v11; // edx
  int v12; // eax
  double v13; // st7
  double v14; // st7
  OB_SFrondGuide_010201A0 *v15; // eax
  OB_SFrondGuide_010201A0 *v16; // esi
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  void *begin; // eax
  double v23; // st7
  OB_stVector16_010201A0 source; // [esp+18h] [ebp-3Ch] BYREF
  float v25; // [esp+28h] [ebp-2Ch]
  float v26; // [esp+2Ch] [ebp-28h]
  char v27; // [esp+30h] [ebp-24h]
  float v28; // [esp+34h] [ebp-20h]
  float v29; // [esp+38h] [ebp-1Ch]
  float v30; // [esp+3Ch] [ebp-18h]
  int v31; // [esp+40h] [ebp-14h]
  int v32; // [esp+44h] [ebp-10h]
  unsigned int v33; // [esp+50h] [ebp-4h]
  OB_SFrondGuide_010201A0 *middlea; // [esp+5Ch] [ebp+8h]

  v3 = middle - first; /*0x79bb66*/
  v4 = last - first; /*0x79bb7b*/
  middlea = (OB_SFrondGuide_010201A0 *)v4; /*0x79bb7d*/
  v5 = v3; /*0x79bb81*/
  if ( v3 ) /*0x79bb83*/
  {
    do /*0x79bb94*/
    {
      v6 = v4 % v5; /*0x79bb86*/
      middlea = (OB_SFrondGuide_010201A0 *)v5; /*0x79bb88*/
      v4 = v5; /*0x79bb8c*/
      v5 = v6; /*0x79bb92*/
    }
    while ( v6 ); /*0x79bb94*/
  }
  if ( v4 < last - first && v4 > 0 ) /*0x79bba0*/
  {
    v7 = 0xC * v3; /*0x79bba9*/
    p_radius = &first[v4].radius; /*0x79bbb6*/
    while ( 1 ) /*0x79bbc4*/
    {
      v9 = p_radius + 0xFFFFFFFB; /*0x79bbc4*/
      OB_stVector_SFrondVertex_CopyCtor_010201A0(&source, (const OB_stVector16_010201A0 *)(p_radius + 0xFFFFFFFB)); /*0x79bbcc*/
      v10 = *((_BYTE *)p_radius + 4); /*0x79bbd4*/
      v25 = p_radius[0xFFFFFFFF]; /*0x79bbd7*/
      v11 = *((_DWORD *)p_radius + 5); /*0x79bbde*/
      v12 = *((_DWORD *)p_radius + 6); /*0x79bbe1*/
      v26 = *p_radius; /*0x79bbe4*/
      v13 = p_radius[2]; /*0x79bbe8*/
      v27 = v10; /*0x79bbeb*/
      v28 = v13; /*0x79bbef*/
      v31 = v11; /*0x79bbf3*/
      v14 = p_radius[3]; /*0x79bbf7*/
      v32 = v12; /*0x79bbfa*/
      v29 = v14; /*0x79bbfe*/
      v30 = p_radius[4]; /*0x79bc05*/
      v15 = (OB_SFrondGuide_010201A0 *)&p_radius[v7 - 5]; /*0x79bc09*/
      v16 = first; /*0x79bc11*/
      v33 = 0; /*0x79bc15*/
      if ( v15 != last ) /*0x79bc1d*/
        v16 = v15; /*0x79bc1f*/
      while ( v16 != (OB_SFrondGuide_010201A0 *)(p_radius + 0xFFFFFFFB) ) /*0x79bc26*/
      {
        OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)v9, (const OB_stVector16_010201A0 *)v16); /*0x79bc2b*/
        v9[4] = v16->guideLength; /*0x79bc33*/
        v9[5] = v16->radius; /*0x79bc39*/
        *((_BYTE *)v9 + 0x18) = v16->frondMapIndex; /*0x79bc3f*/
        v9[7] = v16->offsetAngle; /*0x79bc45*/
        v9[8] = v16->surfaceArea; /*0x79bc4b*/
        v9[9] = v16->fuzzySurfaceArea; /*0x79bc51*/
        v9[0xA] = *(float *)&v16->sharedVertexStartIndex; /*0x79bc57*/
        v9[0xB] = *(float *)&v16->verticesPerGuideVertex; /*0x79bc5d*/
        v17 = last - v16; /*0x79bc75*/
        v9 = (float *)v16; /*0x79bc79*/
        if ( v3 >= v17 ) /*0x79bc7b*/
          v16 = &first[v3 - v17]; /*0x79bc8d*/
        else
          v16 += v3; /*0x79bc7d*/
      }
      OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)v9, &source); /*0x79bc9f*/
      v18 = v27; /*0x79bca8*/
      v9[4] = v25; /*0x79bcac*/
      v19 = v31; /*0x79bcb3*/
      v20 = v32; /*0x79bcb7*/
      v9[5] = v26; /*0x79bcbb*/
      v21 = v28; /*0x79bcbe*/
      *((_BYTE *)v9 + 0x18) = v18; /*0x79bcc2*/
      begin = source.begin; /*0x79bcc5*/
      v9[7] = v21; /*0x79bcc9*/
      v9[8] = v29; /*0x79bcd2*/
      *((_DWORD *)v9 + 0xA) = v19; /*0x79bcd5*/
      v23 = v30; /*0x79bcd8*/
      *((_DWORD *)v9 + 0xB) = v20; /*0x79bcdc*/
      v9[9] = v23; /*0x79bcdf*/
      v33 = 0xFFFFFFFF; /*0x79bce2*/
      if ( begin ) /*0x79bcea*/
        FormHeapFree((unsigned int)begin); /*0x79bced*/
      p_radius += 0xFFFFFFF4; /*0x79bcfc*/
      middlea = (OB_SFrondGuide_010201A0 *)((char *)middlea + 0xFFFFFFFF); /*0x79bd01*/
      if ( (int)middlea <= 0 ) /*0x79bd05*/
        break; /*0x79bd05*/
      v7 = 0xC * v3; /*0x79bbc0*/
    }
  }
}
