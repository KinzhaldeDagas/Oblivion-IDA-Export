float *__stdcall sub_74A390(float *a1, float *a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // ebx
  NiTransform *v7; // eax
  float z; // edx
  NiTransform *v9; // esi
  float x; // eax
  int v11; // ecx
  int v12; // esi
  float y; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  float v18; // edi
  float v19; // ecx
  float v20; // ecx
  float v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ebp
  int v24; // ecx
  unsigned __int16 v25; // ax
  NiTransform *v26; // eax
  int v27; // eax
  double v28; // st6
  float v29; // ecx
  float v30; // edx
  float v31; // ecx
  float v33; // edx
  float v34; // ecx
  const NiTransform *v35; // [esp+0h] [ebp-1A4h]
  int v36; // [esp+14h] [ebp-190h]
  float v37; // [esp+14h] [ebp-190h]
  float v38; // [esp+18h] [ebp-18Ch] BYREF
  float v39; // [esp+1Ch] [ebp-188h]
  float v40; // [esp+20h] [ebp-184h]
  float v41; // [esp+24h] [ebp-180h]
  float v42; // [esp+28h] [ebp-17Ch]
  float v43; // [esp+2Ch] [ebp-178h]
  float v44; // [esp+30h] [ebp-174h]
  float v45; // [esp+34h] [ebp-170h]
  float v46; // [esp+38h] [ebp-16Ch]
  float v47; // [esp+3Ch] [ebp-168h]
  float v48; // [esp+40h] [ebp-164h]
  float v49; // [esp+44h] [ebp-160h]
  float v50; // [esp+48h] [ebp-15Ch]
  float v51; // [esp+4Ch] [ebp-158h]
  float v52; // [esp+50h] [ebp-154h]
  float v53; // [esp+54h] [ebp-150h]
  float v54; // [esp+58h] [ebp-14Ch]
  float v55; // [esp+5Ch] [ebp-148h]
  int v56; // [esp+60h] [ebp-144h]
  float v57; // [esp+64h] [ebp-140h]
  float v58; // [esp+68h] [ebp-13Ch]
  float v59; // [esp+6Ch] [ebp-138h]
  float v60; // [esp+70h] [ebp-134h]
  float v61; // [esp+74h] [ebp-130h]
  float v62; // [esp+78h] [ebp-12Ch]
  NiTransform out; // [esp+7Ch] [ebp-128h] BYREF
  int v64[9]; // [esp+B0h] [ebp-F4h] BYREF
  NiTransform parent; // [esp+D4h] [ebp-D0h] BYREF
  NiTransform local; // [esp+108h] [ebp-9Ch] BYREF
  NiTransform v67; // [esp+13Ch] [ebp-68h] BYREF
  NiTransform v68; // [esp+170h] [ebp-34h] BYREF

  v6 = a4[2]; /*0x74a39e*/
  sub_718A80((float *)(a4[4] + 0x64), &local); /*0x74a3b2*/
  v7 = NiTransform_Compose((const NiTransform *)(v6 + 0xC), &out, &local); /*0x74a3c7*/
  z = g_zeroNiPoint3.z; /*0x74a3cc*/
  v9 = v7; /*0x74a3d2*/
  x = g_zeroNiPoint3.x; /*0x74a3d4*/
  qmemcpy(&parent, v9, sizeof(parent)); /*0x74a3e5*/
  v11 = *(_DWORD *)(v6 + 0x44); /*0x74a3e7*/
  v12 = a6; /*0x74a3f1*/
  v41 = x; /*0x74a3f8*/
  v38 = x; /*0x74a3fc*/
  v56 = v11; /*0x74a400*/
  y = g_zeroNiPoint3.y; /*0x74a404*/
  v43 = z; /*0x74a40a*/
  v40 = z; /*0x74a40e*/
  v14 = *(_DWORD *)(a3 + 0xB4); /*0x74a419*/
  v15 = *(_DWORD *)(v14 + 0x20); /*0x74a41f*/
  v42 = y; /*0x74a422*/
  v39 = y; /*0x74a426*/
  v16 = *(_DWORD *)(v14 + 0x1C); /*0x74a42a*/
  v17 = 0xC * *(unsigned __int16 *)(*(_DWORD *)(a5 + 0xC) + 2 * a6); /*0x74a439*/
  v57 = *(float *)(v17 + v16); /*0x74a440*/
  v18 = *(float *)(v17 + v16 + 4); /*0x74a444*/
  v19 = *(float *)(v17 + v16 + 8); /*0x74a448*/
  v58 = v18; /*0x74a44c*/
  v59 = v19; /*0x74a450*/
  if ( v15 ) /*0x74a454*/
  {
    v47 = *(float *)(v17 + v15); /*0x74a459*/
    v20 = *(float *)(v17 + v15 + 4); /*0x74a45d*/
    v21 = *(float *)(v17 + v15 + 8); /*0x74a461*/
  }
  else
  {
    v44 = 1.0; /*0x74a469*/
    v45 = 0.0; /*0x74a473*/
    v47 = 1.0; /*0x74a477*/
    v46 = 0.0; /*0x74a47b*/
    v20 = 0.0; /*0x74a47f*/
    v21 = 0.0; /*0x74a483*/
  }
  v22 = *(unsigned __int16 *)(a5 + 0x24); /*0x74a487*/
  v23 = 0; /*0x74a48b*/
  v49 = v21; /*0x74a48f*/
  v48 = v20; /*0x74a493*/
  if ( v22 )
  {
    v36 = 0x10 * a6; /*0x74a4a2*/
    while ( 1 )
    {
      v24 = *(_DWORD *)(a5 + 0x10); /*0x74a4b7*/
      v25 = v24
          ? *(_WORD *)(*(_DWORD *)(a5 + 4) + 2 * *(unsigned __int8 *)(v24 + v12 * v22 + v23))
          : *(_WORD *)(*(_DWORD *)(a5 + 4) + 2 * v23);
      v35 = (const NiTransform *)(v56 + 0x4C * v25); /*0x74a4f1*/
      v26 = NiTransform_Compose(&parent, &v68, (const NiTransform *)(*(_DWORD *)(a4[5] + 4 * v25) + 0x64)); /*0x74a50a*/
      qmemcpy(&out, NiTransform_Compose(v26, &v67, v35), sizeof(out)); /*0x74a521*/
      NiMatrix3_ScaleTo((float *)&out, (float *)v64, out.scale); /*0x74a53a*/
      v27 = v36; /*0x74a53f*/
      v37 = *(float *)(v36 + *(_DWORD *)(a5 + 8)); /*0x74a549*/
      v44 = *(float *)&v64[2] * v59 + *(float *)v64 * v57 + *(float *)&v64[1] * v58 + out.pos.x; /*0x74a589*/
      v45 = *(float *)&v64[4] * v58 + *(float *)&v64[3] * v57 + *(float *)&v64[5] * v59 + out.pos.y; /*0x74a5b3*/
      v46 = v57 * *(float *)&v64[6] + v58 * *(float *)&v64[7] + v59 * *(float *)&v64[8] + out.pos.z; /*0x74a5dd*/
      ++v23; /*0x74a60d*/
      v53 = out.rot.data[0][2] * v49 + out.rot.data[0][0] * v47 + out.rot.data[0][1] * v48; /*0x74a616*/
      v54 = out.rot.data[1][1] * v48 + out.rot.data[1][0] * v47 + out.rot.data[1][2] * v49; /*0x74a639*/
      v55 = v47 * out.rot.data[2][0] + v48 * out.rot.data[2][1] + v49 * out.rot.data[2][2]; /*0x74a65c*/
      v28 = v37; /*0x74a664*/
      v36 = v27 + 4; /*0x74a668*/
      v22 = *(unsigned __int16 *)(a5 + 0x24); /*0x74a66e*/
      v50 = v44 * v28; /*0x74a678*/
      v51 = v45 * v28; /*0x74a682*/
      v52 = v46 * v28; /*0x74a68c*/
      v41 = v50 + v41; /*0x74a698*/
      v42 = v42 + v51; /*0x74a6a4*/
      v43 = v43 + v52; /*0x74a6b0*/
      v60 = v53 * v28; /*0x74a6ba*/
      v61 = v54 * v28; /*0x74a6c4*/
      v62 = v28 * v55; /*0x74a6cc*/
      v38 = v60 + v38; /*0x74a6d8*/
      v39 = v39 + v61; /*0x74a6e4*/
      v40 = v40 + v62; /*0x74a6f0*/
      if ( v23 >= v22 ) /*0x74a6f4*/
        break; /*0x74a6f4*/
      v12 = a6; /*0x74a4b0*/
    }
  }
  Vector3_NormalizeInPlace(&v38); /*0x74a6fe*/
  v29 = v42; /*0x74a710*/
  *a1 = v41; /*0x74a714*/
  v30 = v43; /*0x74a716*/
  a1[1] = v29; /*0x74a71a*/
  v31 = v38; /*0x74a71d*/
  a1[2] = v30; /*0x74a721*/
  v33 = v39; /*0x74a72b*/
  *a2 = v31; /*0x74a730*/
  v34 = v40; /*0x74a732*/
  a2[1] = v33; /*0x74a738*/
  a2[2] = v34; /*0x74a73b*/
  return a2; /*0x74a72f*/
}
