float *__stdcall sub_74A390(float *a1, float *a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // ebx
  NiTransform *v7; // eax
  float v8; // edx
  NiTransform *v9; // esi
  float v10; // eax
  int v11; // ecx
  int v12; // esi
  float v13; // ecx
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
  NiTransform *v35; // [esp+0h] [ebp-1A4h]
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
  NiTransform v63; // [esp+7Ch] [ebp-128h] BYREF
  int v64[9]; // [esp+B0h] [ebp-F4h] BYREF
  NiTransform v65; // [esp+D4h] [ebp-D0h] BYREF
  NiTransform v66; // [esp+108h] [ebp-9Ch] BYREF
  NiTransform v67; // [esp+13Ch] [ebp-68h] BYREF
  NiTransform v68; // [esp+170h] [ebp-34h] BYREF

  v6 = a4[2];
  sub_718A80((float *)(a4[4] + 0x64), &v66);
  v7 = sub_53D7A0((NiTransform *)(v6 + 0xC), &v63, &v66);
  v8 = dword_B3F9B0;
  v9 = v7;
  v10 = Vector3_InitValue_;
  qmemcpy(&v65, v9, sizeof(v65));
  v11 = *(_DWORD *)(v6 + 0x44);
  v12 = a6;
  v41 = v10;
  v38 = v10;
  v56 = v11;
  v13 = *(&Vector3_InitValue_ + 1);
  v43 = v8;
  v40 = v8;
  v14 = *(_DWORD *)(a3 + 0xB4);
  v15 = *(_DWORD *)(v14 + 0x20);
  v42 = v13;
  v39 = v13;
  v16 = *(_DWORD *)(v14 + 0x1C);
  v17 = 0xC * *(unsigned __int16 *)(*(_DWORD *)(a5 + 0xC) + 2 * a6);
  v57 = *(float *)(v17 + v16);
  v18 = *(float *)(v17 + v16 + 4);
  v19 = *(float *)(v17 + v16 + 8);
  v58 = v18;
  v59 = v19;
  if ( v15 )
  {
    v47 = *(float *)(v17 + v15);
    v20 = *(float *)(v17 + v15 + 4);
    v21 = *(float *)(v17 + v15 + 8);
  }
  else
  {
    v44 = 1.0;
    v45 = 0.0;
    v47 = 1.0;
    v46 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
  }
  v22 = *(unsigned __int16 *)(a5 + 0x24);
  v23 = 0;
  v49 = v21;
  v48 = v20;
  if ( v22 )
  {
    v36 = 0x10 * a6;
    while ( 1 )
    {
      v24 = *(_DWORD *)(a5 + 0x10);
      v25 = v24
          ? *(_WORD *)(*(_DWORD *)(a5 + 4) + 2 * *(unsigned __int8 *)(v24 + v12 * v22 + v23))
          : *(_WORD *)(*(_DWORD *)(a5 + 4) + 2 * v23);
      v35 = (NiTransform *)(v56 + 0x4C * v25);
      v26 = sub_53D7A0(&v65, &v68, (NiTransform *)(*(_DWORD *)(a4[5] + 4 * v25) + 0x64));
      qmemcpy(&v63, sub_53D7A0(v26, &v67, v35), sizeof(v63));
      sub_710190((float *)&v63, (float *)v64, v63.scale);
      v27 = v36;
      v37 = *(float *)(v36 + *(_DWORD *)(a5 + 8));
      v44 = *(float *)&v64[2] * v59 + *(float *)v64 * v57 + *(float *)&v64[1] * v58 + v63.pos.x;
      v45 = *(float *)&v64[4] * v58 + *(float *)&v64[3] * v57 + *(float *)&v64[5] * v59 + v63.pos.y;
      v46 = v57 * *(float *)&v64[6] + v58 * *(float *)&v64[7] + v59 * *(float *)&v64[8] + v63.pos.z;
      ++v23;
      v53 = v63.rot.data[0][2] * v49 + v63.rot.data[0][0] * v47 + v63.rot.data[0][1] * v48;
      v54 = v63.rot.data[1][1] * v48 + v63.rot.data[1][0] * v47 + v63.rot.data[1][2] * v49;
      v55 = v47 * v63.rot.data[2][0] + v48 * v63.rot.data[2][1] + v49 * v63.rot.data[2][2];
      v28 = v37;
      v36 = v27 + 4;
      v22 = *(unsigned __int16 *)(a5 + 0x24);
      v50 = v44 * v28;
      v51 = v45 * v28;
      v52 = v46 * v28;
      v41 = v50 + v41;
      v42 = v42 + v51;
      v43 = v43 + v52;
      v60 = v53 * v28;
      v61 = v54 * v28;
      v62 = v28 * v55;
      v38 = v60 + v38;
      v39 = v39 + v61;
      v40 = v40 + v62;
      if ( v23 >= v22 )
        break;
      v12 = a6;
    }
  }
  sub_43F350(&v38);
  v29 = v42;
  *a1 = v41;
  v30 = v43;
  a1[1] = v29;
  v31 = v38;
  a1[2] = v30;
  v33 = v39;
  *a2 = v31;
  v34 = v40;
  a2[1] = v33;
  a2[2] = v34;
  return a2;
}
