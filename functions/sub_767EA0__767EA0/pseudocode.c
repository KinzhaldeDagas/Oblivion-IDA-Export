int __thiscall sub_767EA0(NiDX9Renderer *this, UInt32 IBSize, signed int a3)
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
  int result; // eax
  int v61; // eax
  unsigned int v62; // edx
  int v63; // eax
  int v64; // ebx
  int v65; // ebx
  int v66; // edi
  UInt16 v67; // cx
  int IB; // ebp
  UInt16 *ScreenTextureIndices; // edx
  int v70; // esi
  char v71; // [esp+13h] [ebp-49h]
  float v72; // [esp+14h] [ebp-48h]
  unsigned __int16 v73; // [esp+18h] [ebp-44h]
  unsigned __int16 v74; // [esp+1Ch] [ebp-40h]
  int v75; // [esp+20h] [ebp-3Ch]
  int v76; // [esp+24h] [ebp-38h]
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

  v4 = *(_WORD *)(IBSize + 0x10);
  v5 = *(NiGeometryBufferData **)(IBSize + 0x1C);
  v6 = (unsigned __int16)(4 * v4);
  v77 = 4 * v4;
  v7 = 2 * v4;
  v8 = (unsigned __int8)a3 >> 3;
  v5->TriCount = v7;
  v5->MaxTriCount = v7;
  v9 = 0;
  v10 = (int)(3 * v6) / 2;
  v11 = v8 & 1;
  v12 = v5->StreamCount == 0;
  v95 = v5;
  v92 = v4;
  v93 = v6;
  v94 = v10;
  v71 = v11;
  v5->VertCount = v6;
  v5->MaxVertCount = v6;
  v5->IndexArray = 0;
  v5->ArrayLengths = 0;
  v5->NumArrays = 1;
  if ( !v12 )
    v9 = *v5->VBChip;
  v76 = (int)v9;
  if ( v11 )
  {
    if ( v77 > this->member.unkA4C )
    {
      FormHeapFree(this->member.ScreenTextureVerts);
      FormHeapFree((unsigned int)this->member.ScreenTextureColors);
      FormHeapFree(this->member.ScreenTextureTexCoords);
      this->member.ScreenTextureVerts = FormHeapAlloc((unsigned __int64)v6 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v6);
      v13 = (NiColorAlpha *)FormHeapAlloc((unsigned __int64)v6 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v6);
      v88 = v13;
      if ( v13 )
      {
        sub_401080(v13, 0x10, v6, (void *(__thiscall *)(void *))sub_47EA50);
        v14 = v88;
      }
      else
      {
        v14 = 0;
      }
      this->member.ScreenTextureColors = v14;
      this->member.ScreenTextureTexCoords = FormHeapAlloc((unsigned __int64)v6 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v6);
      this->member.unkA4C = v77;
    }
    if ( v76 )
    {
      if ( v5->StreamCount )
        v15 = *v5->VertexStride;
      else
        v15 = 0;
      if ( v6 > *(_DWORD *)(v76 + 0x14) / v15 )
        a3 = 0xF;
    }
  }
  v78 = this->member.currentRTGroup->vtbl->GetWidth(this->member.currentRTGroup, 0);
  v79 = this->member.currentRTGroup->vtbl->GetHeight(this->member.currentRTGroup, 0);
  v16 = **(_DWORD **)(*(_DWORD *)(IBSize + 0x14) + 0x20);
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 8);
  else
    v17 = 0;
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x4C))(v17);
  v19 = *(_DWORD *)(*(_DWORD *)(IBSize + 0x14) + 0x20);
  if ( *(_DWORD *)v19 )
    v20 = *(_DWORD *)(*(_DWORD *)v19 + 8);
  else
    v20 = 0;
  v86 = 1.0 / (double)v18;
  v74 = 0;
  v89 = 1.0 / (double)(*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v20 + 0x50))(v20);
  if ( v92 )
  {
    v21 = v86;
    v75 = 0;
    v22 = v89;
    v23 = dbl_A2FAA0;
    do
    {
      v24 = v75 + *(_DWORD *)(IBSize + 8);
      for ( i = *(_WORD *)(v24 + 2); i < 0; i += v78 )
        ;
      for ( ; i >= v78; i -= v78 )
        ;
      for ( j = *(_WORD *)v24; j < 0; j += v79 )
        ;
      for ( ; j >= v79; j -= v79 )
        ;
      v80 = (double)i - v23;
      v27 = 0;
      v87 = (double)j - v23;
      v28 = 0;
      v29 = (double)*(unsigned __int16 *)(v24 + 4);
      v30 = v80;
      v72 = v80 + v29;
      v31 = (double)*(unsigned __int16 *)(v24 + 6);
      v96 = v87 + v31;
      v73 = 4 * v74;
      v81 = (double)*(unsigned __int16 *)(v24 + 0xA) * v21;
      v90 = (double)*(unsigned __int16 *)(v24 + 8) * v22;
      v32 = v29 * v21 + v81;
      v33 = v81;
      v97 = v32;
      v34 = v90;
      v91 = 0;
      v35 = v34;
      v36 = v31 * v22 + v34;
      v37 = v35;
      v98 = v36;
      v38 = v72;
      while ( 1 )
      {
        if ( v27 >> 1 )
        {
          v82 = v38;
          v47 = v38;
          v45 = v30;
          v46 = v47;
        }
        else
        {
          v44 = v38;
          v45 = v30;
          v46 = v44;
          v82 = v45;
        }
        v48 = v73;
        *(float *)(this->member.ScreenTextureVerts + 8 * v73) = v82;
        v49 = v28 % 2;
        v50 = v49 ? v96 : v87;
        v83 = v50;
        *(float *)(this->member.ScreenTextureVerts + 8 * v73 + 4) = v83;
        v51 = (_DWORD *)((char *)this->member.ScreenTextureColors + 0x10 * v73);
        *v51 = *(_DWORD *)(v24 + 0xC);
        v51[1] = *(_DWORD *)(v24 + 0x10);
        v51[2] = *(_DWORD *)(v24 + 0x14);
        v51[3] = *(_DWORD *)(v24 + 0x18);
        if ( v27 >> 1 )
        {
          v84 = v97;
          v55 = v45;
          v53 = v33;
          v54 = v55;
        }
        else
        {
          v52 = v45;
          v53 = v33;
          v54 = v52;
          v84 = v53;
        }
        *(float *)(this->member.ScreenTextureTexCoords + 8 * v73) = v84;
        if ( v49 )
        {
          v85 = v98;
          v59 = v53;
          v57 = v37;
          v58 = v59;
        }
        else
        {
          v56 = v53;
          v57 = v37;
          v58 = v56;
          v85 = v57;
        }
        ++v73;
        *(float *)(this->member.ScreenTextureTexCoords + 8 * v48 + 4) = v85;
        ++v27;
        v28 = ++v91;
        if ( v27 >= 4u )
          break;
        v39 = v57;
        v40 = v58;
        v37 = v39;
        v41 = v40;
        v42 = v54;
        v33 = v41;
        v43 = v42;
        v38 = v46;
        v30 = v43;
      }
      v75 += 0x1C;
      ++v74;
    }
    while ( v74 < v92 );
    v6 = v93;
    v5 = v95;
  }
  result = sub_777240(
             (char *)this->member.vertexBufferMgr,
             (int)v5,
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
        FormHeapFree((unsigned int)this->member.ScreenTextureIndices);
        this->member.ScreenTextureIndices = (UInt16 *)FormHeapAlloc((unsigned __int64)v10 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v10);
        v61 = 0;
        v62 = 0;
        this->member.NumScreenTextureIndices = v10;
        if ( v6 )
        {
          do
          {
            this->member.ScreenTextureIndices[(unsigned __int16)v61] = v62;
            v63 = v61 + 1;
            v64 = (unsigned __int16)v63++;
            this->member.ScreenTextureIndices[v64] = v62 + 1;
            this->member.ScreenTextureIndices[(unsigned __int16)v63++] = v62 + 2;
            this->member.ScreenTextureIndices[(unsigned __int16)v63++] = v62 + 2;
            v65 = (unsigned __int16)v63++;
            this->member.ScreenTextureIndices[v65] = v62 + 1;
            v66 = (unsigned __int16)v63;
            v67 = v62 + 3;
            v62 += 4;
            v61 = v63 + 1;
            this->member.ScreenTextureIndices[v66] = v67;
          }
          while ( v62 < v93 );
          v10 = v94;
          v5 = v95;
        }
      }
      IB = (int)v5->IB;
      ScreenTextureIndices = this->member.ScreenTextureIndices;
      IBSize = v5->IBSize;
      result = sub_7781F0(
                 (int)this->member.indexBufferMgr,
                 v5,
                 (int)this,
                 (int)ScreenTextureIndices,
                 (void *)v10,
                 v10,
                 IB,
                 &IBSize,
                 1,
                 v5->SoftwareVP != 0 ? (void *)0x10 : 0);
      v70 = result;
      if ( IB != result )
      {
        sub_777F40(v5);
        result = IBSize;
        v5->IB = (IDirect3DIndexBuffer9 *)v70;
        v5->IndexCount = v10;
        v5->IBSize = result;
      }
    }
  }
  return result;
}
