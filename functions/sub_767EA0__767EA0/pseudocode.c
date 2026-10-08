// Pass224/226: Packs NiScreenTexture records into screen vertices/indices; uses NiScreenTexture +0x14 first texture for dimensions.
int *__thiscall sub_767EA0(NiDX9Renderer *this, UInt32 IBSize, signed int a3)
{
  unsigned __int16 v4; // cx
  NiGeometryBufferData *v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  char v8; // dl
  NiVBChip *v9; // eax
  unsigned int v10; // ebx
  char v11; // dl
  bool v12; // zf
  NiColorAlpha *v13; // eax
  NiColorAlpha *v14; // eax
  UInt32 v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned __int16 v18; // dx
  int v19; // ecx
  int v20; // ecx
  double v21; // st7
  double v22; // st6
  double v23; // st5
  int v24; // ecx
  __int16 i; // dx
  __int16 j; // ax
  unsigned __int16 v27; // bp
  int v28; // edi
  double v29; // st4
  double v30; // st3
  double v31; // st2
  double v32; // st1
  double v33; // st4
  double v34; // st1
  double v35; // rt1
  double v36; // st1
  double v37; // st2
  double v38; // st1
  double v39; // rt2
  double v40; // st1
  double v41; // rtt
  double v42; // st1
  double v43; // rt0
  double v44; // rt1
  double v45; // st1
  double v46; // st3
  double v47; // rt2
  int v48; // edx
  int v49; // edi
  double v50; // st0
  _DWORD *v51; // eax
  double v52; // rtt
  double v53; // st1
  double v54; // st4
  double v55; // rt0
  double v56; // rt1
  double v57; // st1
  double v58; // st2
  double v59; // rt2
  int *result; // eax
  int v61; // eax
  unsigned int v62; // edx
  int v63; // eax
  int v64; // ebx
  int v65; // ebx
  int v66; // edi
  UInt16 v67; // cx
  int *IB; // ebp
  UInt16 *ScreenTextureIndices; // edx
  int *v70; // esi
  char v71; // [esp+13h] [ebp-49h]
  float v72; // [esp+14h] [ebp-48h]
  unsigned __int16 v73; // [esp+18h] [ebp-44h]
  unsigned __int16 v74; // [esp+1Ch] [ebp-40h]
  int v75; // [esp+20h] [ebp-3Ch]
  int *v76; // [esp+24h] [ebp-38h]
  UInt16 v77; // [esp+28h] [ebp-34h]
  signed int v78; // [esp+2Ch] [ebp-30h]
  signed int v79; // [esp+30h] [ebp-2Ch]
  float v80; // [esp+34h] [ebp-28h]
  float v81; // [esp+34h] [ebp-28h]
  float v82; // [esp+34h] [ebp-28h]
  float v83; // [esp+34h] [ebp-28h]
  float v84; // [esp+34h] [ebp-28h]
  float v85; // [esp+34h] [ebp-28h]
  float v86; // [esp+38h] [ebp-24h]
  float v87; // [esp+38h] [ebp-24h]
  NiColorAlpha *v88; // [esp+3Ch] [ebp-20h]
  float v89; // [esp+3Ch] [ebp-20h]
  float v90; // [esp+3Ch] [ebp-20h]
  int v91; // [esp+3Ch] [ebp-20h]
  unsigned __int16 v92; // [esp+40h] [ebp-1Ch]
  unsigned int v93; // [esp+44h] [ebp-18h]
  unsigned int v94; // [esp+48h] [ebp-14h]
  NiGeometryBufferData *v95; // [esp+4Ch] [ebp-10h]
  float v96; // [esp+50h] [ebp-Ch]
  float v97; // [esp+54h] [ebp-8h]
  float v98; // [esp+58h] [ebp-4h]

  v4 = *(_WORD *)(IBSize + 0x10); /*0x767eac*/
  v5 = *(NiGeometryBufferData **)(IBSize + 0x1C); /*0x767eb1*/
  v6 = (unsigned __int16)(4 * v4); /*0x767ebe*/
  v77 = 4 * v4; /*0x767ec1*/
  v7 = 2 * v4; /*0x767ed5*/
  v8 = (unsigned __int8)a3 >> 3; /*0x767ed7*/
  v5->TriCount = v7; /*0x767eda*/
  v5->MaxTriCount = v7; /*0x767edd*/
  v9 = 0; /*0x767ee0*/
  v10 = (int)(3 * v6) / 2; /*0x767ee2*/
  v11 = v8 & 1; /*0x767ee4*/
  v12 = v5->StreamCount == 0; /*0x767ee7*/
  v95 = v5; /*0x767eea*/
  v92 = v4; /*0x767eee*/
  v93 = v6; /*0x767ef2*/
  v94 = v10; /*0x767ef6*/
  v71 = v11; /*0x767efa*/
  v5->VertCount = v6; /*0x767efe*/
  v5->MaxVertCount = v6; /*0x767f01*/
  v5->IndexArray = 0; /*0x767f04*/
  v5->ArrayLengths = 0; /*0x767f07*/
  v5->NumArrays = 1; /*0x767f0a*/
  if ( !v12 ) /*0x767f11*/
    v9 = *v5->VBChip; /*0x767f16*/
  v76 = (int *)v9; /*0x767f1a*/
  if ( v11 )
  {
    if ( v77 > this->member.unkA4C )
    {
      FormHeapFree(this->member.ScreenTextureVerts); /*0x767f3d*/
      FormHeapFree((unsigned int)this->member.ScreenTextureColors); /*0x767f49*/
      FormHeapFree(this->member.ScreenTextureTexCoords); /*0x767f55*/
      this->member.ScreenTextureVerts = FormHeapAlloc((unsigned __int64)v6 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v6);
      v13 = (NiColorAlpha *)FormHeapAlloc((unsigned __int64)v6 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v6);
      v88 = v13; /*0x767f95*/
      if ( v13 ) /*0x767f99*/
      {
        sub_401080(v13, 0x10, v6, (void *(__thiscall *)(void *))sub_47EA50); /*0x767fa4*/
        v14 = v88; /*0x767fa9*/
      }
      else
      {
        v14 = 0; /*0x767faf*/
      }
      this->member.ScreenTextureColors = v14; /*0x767fb1*/
      this->member.ScreenTextureTexCoords = FormHeapAlloc((unsigned __int64)v6 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v6);
      this->member.unkA4C = v77; /*0x767fe1*/
    }
    if ( v76 ) /*0x767fee*/
    {
      if ( v5->StreamCount ) /*0x767ff0*/
        v15 = *v5->VertexStride; /*0x767ffc*/
      else
        v15 = 0; /*0x768000*/
      if ( v6 > v76[5] / v15 ) /*0x76800c*/
        a3 = 0xF; /*0x76800e*/
    }
  }
  v78 = this->member.currentRTGroup->vtbl->GetWidth(this->member.currentRTGroup, 0); /*0x76803b*/
  v79 = this->member.currentRTGroup->vtbl->GetHeight(this->member.currentRTGroup, 0); /*0x76804d*/
  v16 = **(_DWORD **)(*(_DWORD *)(IBSize + 0x14) + 0x20); /*0x768054*/
  if ( v16 ) /*0x768058*/
    v17 = *(_DWORD *)(v16 + 8); /*0x76805a*/
  else
    v17 = 0; /*0x76805f*/
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x4C))(v17); /*0x76806e*/
  v19 = *(_DWORD *)(*(_DWORD *)(IBSize + 0x14) + 0x20); /*0x768074*/
  if ( *(_DWORD *)v19 ) /*0x768077*/
    v20 = *(_DWORD *)(*(_DWORD *)v19 + 8); /*0x76807d*/
  else
    v20 = 0; /*0x768082*/
  v86 = 1.0 / (double)v18; /*0x768098*/
  v74 = 0; /*0x7680b0*/
  v89 = 1.0 / (double)(*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v20 + 0x50))(v20); /*0x7680b8*/
  if ( v92 )
  {
    v21 = v86; /*0x7680c2*/
    v75 = 0; /*0x7680c6*/
    v22 = v89; /*0x7680ca*/
    v23 = dbl_A2FAA0; /*0x7680ce*/
    do
    {
      v24 = v75 + *(_DWORD *)(IBSize + 8); /*0x7680db*/
      for ( i = *(_WORD *)(v24 + 2); i < 0; i += v78 ) /*0x7680e6*/
        ; /*0x7680e8*/
      for ( ; i >= v78; i -= v78 ) /*0x7680fa*/
        ; /*0x7680fc*/
      for ( j = *(_WORD *)v24; j < 0; j += v79 ) /*0x76810b*/
        ; /*0x76810d*/
      for ( ; j >= v79; j -= v79 ) /*0x76811f*/
        ; /*0x768121*/
      v80 = (double)i - v23; /*0x768146*/
      v27 = 0; /*0x768158*/
      v87 = (double)j - v23; /*0x76815a*/
      v28 = 0; /*0x76815e*/
      v29 = (double)*(unsigned __int16 *)(v24 + 4); /*0x768160*/
      v30 = v80; /*0x768168*/
      v72 = v80 + v29; /*0x768174*/
      v31 = (double)*(unsigned __int16 *)(v24 + 6); /*0x768178*/
      v96 = v87 + v31; /*0x76818a*/
      v73 = 4 * v74; /*0x7681a2*/
      v81 = (double)*(unsigned __int16 *)(v24 + 0xA) * v21; /*0x7681a6*/
      v90 = (double)*(unsigned __int16 *)(v24 + 8) * v22; /*0x7681b0*/
      v32 = v29 * v21 + v81; /*0x7681c0*/
      v33 = v81; /*0x7681c0*/
      v97 = v32; /*0x7681c2*/
      v34 = v90; /*0x7681c8*/
      v91 = 0; /*0x7681cc*/
      v35 = v34; /*0x7681d4*/
      v36 = v31 * v22 + v34; /*0x7681d4*/
      v37 = v35; /*0x7681d4*/
      v98 = v36; /*0x7681d6*/
      v38 = v72; /*0x7681da*/
      while ( 1 )
      {
        if ( v27 >> 1 ) /*0x7681e9*/
        {
          v82 = v38; /*0x7681fb*/
          v47 = v38; /*0x7681ff*/
          v45 = v30; /*0x7681ff*/
          v46 = v47; /*0x7681ff*/
        }
        else
        {
          v44 = v38; /*0x7681f3*/
          v45 = v30; /*0x7681f3*/
          v46 = v44; /*0x7681f3*/
          v82 = v45; /*0x7681f5*/
        }
        v48 = v73; /*0x76820b*/
        *(float *)(this->member.ScreenTextureVerts + 8 * v73) = v82; /*0x768216*/
        v49 = v28 % 2; /*0x76821f*/
        v50 = v49 ? v96 : v87;
        v83 = v50; /*0x768232*/
        *(float *)(this->member.ScreenTextureVerts + 8 * v73 + 4) = v83; /*0x76823a*/
        v51 = (_DWORD *)((char *)this->member.ScreenTextureColors + 0x10 * v73); /*0x768246*/
        *v51 = *(_DWORD *)(v24 + 0xC); /*0x768252*/
        v51[1] = *(_DWORD *)(v24 + 0x10); /*0x768257*/
        v51[2] = *(_DWORD *)(v24 + 0x14); /*0x76825d*/
        v51[3] = *(_DWORD *)(v24 + 0x18); /*0x768263*/
        if ( v27 >> 1 ) /*0x7681ec*/
        {
          v84 = v97; /*0x768274*/
          v55 = v45; /*0x768278*/
          v53 = v33; /*0x768278*/
          v54 = v55; /*0x768278*/
        }
        else
        {
          v52 = v45; /*0x768268*/
          v53 = v33; /*0x768268*/
          v54 = v52; /*0x768268*/
          v84 = v53; /*0x76826a*/
        }
        *(float *)(this->member.ScreenTextureTexCoords + 8 * v73) = v84; /*0x768286*/
        if ( v49 ) /*0x768289*/
        {
          v85 = v98; /*0x768297*/
          v59 = v53; /*0x76829b*/
          v57 = v37; /*0x76829b*/
          v58 = v59; /*0x76829b*/
        }
        else
        {
          v56 = v53; /*0x76828b*/
          v57 = v37; /*0x76828b*/
          v58 = v56; /*0x76828b*/
          v85 = v57; /*0x76828d*/
        }
        ++v73; /*0x7682ab*/
        *(float *)(this->member.ScreenTextureTexCoords + 8 * v48 + 4) = v85; /*0x7682b0*/
        ++v27; /*0x7682b4*/
        v28 = ++v91; /*0x7682b7*/
        if ( v27 >= 4u ) /*0x7682c2*/
          break; /*0x7682c2*/
        v39 = v57; /*0x7681e0*/
        v40 = v58; /*0x7681e0*/
        v37 = v39; /*0x7681e0*/
        v41 = v40; /*0x7681e2*/
        v42 = v54; /*0x7681e2*/
        v33 = v41; /*0x7681e2*/
        v43 = v42; /*0x7681e4*/
        v38 = v46; /*0x7681e4*/
        v30 = v43; /*0x7681e4*/
      }
      v75 += 0x1C; /*0x7682ce*/
      ++v74; /*0x7682e1*/
    }
    while ( v74 < v92 );
    v6 = v93; /*0x7682f1*/
    v5 = v95; /*0x7682f7*/
  }
  result = sub_777240( /*0x76832a*/
             (char *)this->member.vertexBufferMgr,
             v6,
             v5,
             v77,
             (float *)this->member.ScreenTextureVerts,
             (float *)this->member.ScreenTextureColors,
             (_DWORD *)this->member.ScreenTextureTexCoords,
             a3,
             v76,
             0);
  if ( result )
  {
    if ( v71 )
    {
      if ( v10 > this->member.NumScreenTextureIndices )
      {
        FormHeapFree((unsigned int)this->member.ScreenTextureIndices); /*0x768356*/
        this->member.ScreenTextureIndices = (UInt16 *)FormHeapAlloc((unsigned __int64)v10 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v10);
        v61 = 0; /*0x76837c*/
        v62 = 0; /*0x76837e*/
        this->member.NumScreenTextureIndices = v10; /*0x768382*/
        if ( v6 ) /*0x768388*/
        {
          do /*0x76840a*/
          {
            this->member.ScreenTextureIndices[(unsigned __int16)v61] = v62; /*0x76839c*/
            v63 = v61 + 1; /*0x7683a6*/
            v64 = (unsigned __int16)v63++; /*0x7683a9*/
            this->member.ScreenTextureIndices[v64] = v62 + 1; /*0x7683b2*/
            this->member.ScreenTextureIndices[(unsigned __int16)v63++] = v62 + 2; /*0x7683c3*/
            this->member.ScreenTextureIndices[(unsigned __int16)v63++] = v62 + 2; /*0x7683d4*/
            v65 = (unsigned __int16)v63++; /*0x7683e2*/
            this->member.ScreenTextureIndices[v65] = v62 + 1; /*0x7683eb*/
            v66 = (unsigned __int16)v63; /*0x7683f6*/
            v67 = v62 + 3; /*0x7683f9*/
            v62 += 4; /*0x7683fc*/
            v61 = v63 + 1; /*0x7683ff*/
            this->member.ScreenTextureIndices[v66] = v67; /*0x768406*/
          }
          while ( v62 < v93 ); /*0x76840a*/
          v10 = v94; /*0x76840c*/
          v5 = v95; /*0x768410*/
        }
      }
      IB = (int *)v5->IB; /*0x768417*/
      ScreenTextureIndices = this->member.ScreenTextureIndices; /*0x76841a*/
      IBSize = v5->IBSize; /*0x768420*/
      result = (int *)NiDX9IndexBufferManager_PackBuffer(
                        (int)this->member.indexBufferMgr,
                        v5,
                        (int)this,
                        (int)ScreenTextureIndices,
                        (void *)v10,
                        v10,
                        (int)IB,
                        &IBSize,
                        1,
                        v5->SoftwareVP != 0 ? (void *)0x10 : 0);
      v70 = result; /*0x768445*/
      if ( IB != result ) /*0x768449*/
      {
        sub_777F40(v5); /*0x76844d*/
        result = (int *)IBSize; /*0x768452*/
        v5->IB = (IDirect3DIndexBuffer9 *)v70; /*0x768456*/
        v5->IndexCount = v10; /*0x768459*/
        v5->IBSize = (UInt32)result; /*0x76845c*/
      }
    }
  }
  return result; /*0x76845f*/
}
