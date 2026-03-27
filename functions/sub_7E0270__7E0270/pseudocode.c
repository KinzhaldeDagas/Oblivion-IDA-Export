void __thiscall sub_7E0270(WaterShaderHeightMap *this, signed int a2, float a3)
{
  signed int v4; // esi
  unsigned int v5; // ebp
  NiRenderedTexture *InnerTexture; // eax
  int v7; // eax
  double v8; // st7
  int v9; // ebx
  signed int v10; // eax
  double v11; // st5
  signed int v12; // ecx
  signed int v13; // eax
  signed int v14; // ecx
  double v15; // st7
  double v16; // st6
  BSRenderedTexture *Unk0E0; // eax
  int v18; // ebx
  char v19; // cl
  int *p_RenderedTexture; // eax
  int v21; // esi
  signed int v22; // esi
  float v23; // ebx
  int v24; // ebp
  double v25; // st7
  int v26; // ebx
  signed int v27; // eax
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // st4
  double v32; // st3
  signed int v33; // esi
  double v34; // st6
  double v35; // st3
  int v36; // edx
  float *v37; // ecx
  float *v38; // eax
  double v39; // rt0
  double v40; // st3
  double v41; // rt1
  double v42; // st2
  double v43; // st2
  double v44; // st1
  double v45; // rt2
  double v46; // st3
  double v47; // st4
  double v48; // rtt
  double v49; // st3
  double v50; // st6
  double v51; // st4
  double v52; // st3
  double v53; // rtt
  int v54; // edi
  size_t v55; // [esp+Ch] [ebp-44h]
  size_t v56; // [esp+Ch] [ebp-44h]
  int i; // [esp+20h] [ebp-30h]
  float v58; // [esp+20h] [ebp-30h]
  int v59; // [esp+20h] [ebp-30h]
  float v60; // [esp+24h] [ebp-2Ch]
  float v61; // [esp+24h] [ebp-2Ch]
  float v62; // [esp+24h] [ebp-2Ch]
  float v63; // [esp+24h] [ebp-2Ch]
  _WORD *Src; // [esp+28h] [ebp-28h]
  char *Srca; // [esp+28h] [ebp-28h]
  int v66; // [esp+2Ch] [ebp-24h] BYREF
  float v67; // [esp+30h] [ebp-20h]
  WaterShaderHeightMap *v68; // [esp+34h] [ebp-1Ch]
  float v69; // [esp+38h] [ebp-18h]
  signed int j; // [esp+3Ch] [ebp-14h]
  int v71; // [esp+40h] [ebp-10h]
  signed int v72; // [esp+44h] [ebp-Ch]
  _BYTE v73[4]; // [esp+48h] [ebp-8h] BYREF
  void *Dst; // [esp+4Ch] [ebp-4h]
  float a3b; // [esp+58h] [ebp+8h]
  float a3c; // [esp+58h] [ebp+8h]
  float a3d; // [esp+58h] [ebp+8h]
  float a3a; // [esp+58h] [ebp+8h]
  float a3e; // [esp+58h] [ebp+8h]
  float a3f; // [esp+58h] [ebp+8h]

  v4 = 0;
  v68 = this;
  v67 = 0.0;
  v5 = FormHeapAlloc((unsigned int)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  Src = (_WORD *)FormHeapAlloc((unsigned int)a2 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * a2);
  _memset(v5, 0, 4 * a2);
  InnerTexture = BSRenderedTexture::GetInnerTexture(this->Unk0E4);
  v7 = (*((int (__thiscall **)(NiDX9TextureData *))InnerTexture->member.super.rendererData->_vtbl + 5))(InnerTexture->member.super.rendererData);
  v8 = dbl_A2FAA0;
  v9 = v7;
  v10 = 0;
  v66 = v9;
  for ( i = 0; v10 < a2; *(float *)(v5 + 4 * v10 - 4) = *(float *)&j / v60 )
  {
    v11 = (double)i;
    i = ++v10;
    *(float *)&j = v11 + v8;
    v60 = (float)a2;
  }
  v12 = 0;
  if ( a2 > 0 )
  {
    v13 = a2 >> 1;
    for ( j = a2 >> 1; ; v13 = j )
    {
      if ( v12 > v4 )
      {
        v69 = *(float *)(v5 + 4 * v4);
        *(float *)(v5 + 4 * v4) = *(float *)(v5 + 4 * v12);
        *(float *)(v5 + 4 * v12) = v69;
      }
      for ( ; v4 >= v13 && v13 >= 2; v13 >>= 1 )
        v4 -= v13;
      ++v12;
      v4 += v13;
      if ( v12 >= a2 )
        break;
    }
    v9 = v66;
  }
  v14 = 0;
  if ( a2 > 0 )
  {
    v15 = dbl_A3DDD0;
    do
    {
      v16 = *(float *)(v5 + 4 * v14++);
      j = (int)(v16 * v15);
      Src[v14 - 1] = j;
    }
    while ( v14 < a2 );
  }
  (*(void (__stdcall **)(int, _DWORD, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v9 + 0x4C))(v9, 0, v73, 0, 0);
  LODWORD(v55) = 2 * a2;
  memcpy(Dst, Src, v55);
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 0x50))(v9, 0);
  FormHeapFree(v5);
  FormHeapFree((unsigned int)Src);
  Unk0E0 = v68->Unk0E0;
  if ( Unk0E0 )
  {
    v18 = v66;
    v19 = LOBYTE(v67);
    p_RenderedTexture = (int *)&Unk0E0->members.RenderedTexture;
  }
  else
  {
    v18 = 0;
    v66 = 0;
    p_RenderedTexture = &v66;
    v19 = 1;
  }
  v21 = *p_RenderedTexture;
  if ( (v19 & 1) != 0 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    }
  }
  v66 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v21 + 0x24) + 0x14))(*(_DWORD *)(v21 + 0x24));
  v22 = a2 << 8;
  v23 = COERCE_FLOAT(FormHeapAlloc((unsigned int)(a2 << 6) >> 0x1E != 0 ? 0xFFFFFFFF : a2 << 8));
  *(float *)&j = v23;
  v72 = a2 << 8;
  _memset(LODWORD(v23), 0, a2 << 8);
  v24 = 1;
  if ( SLODWORD(a3) > 0 )
  {
    v25 = dbl_A2FAA0;
    Srca = 0;
    v69 = a3;
    do
    {
      v26 = v24;
      v24 *= 2;
      v71 = v24;
      v61 = dbl_A91CF0 / (double)-v24;
      a3b = v25 * v61;
      a3c = sin(a3b);
      v58 = a3c * (dbl_A3F400 * a3c);
      a3d = sin(v61);
      v27 = 0;
      v67 = a3d;
      v68 = 0;
      v62 = 1.0;
      a3a = 0.0;
      if ( v26 <= 0 )
      {
        v25 = dbl_A2FAA0;
      }
      else
      {
        v28 = v58;
        v29 = v67;
        v30 = dbl_A2FAA0;
        do
        {
          v31 = v62;
          v32 = a3a;
          v33 = v27;
          v59 = v27;
          if ( v27 < a2 )
          {
            v34 = a3a;
            v63 = (float)a2;
            v35 = v63;
            v36 = 0x10 * v24;
            v37 = (float *)(0x10 * (_DWORD)&Srca[v27] + j + 8);
            v38 = (float *)(0x10 * (_DWORD)&Srca[v27 + v26] + j + 8);
            while ( 1 )
            {
              v42 = (double)(v26 + v33);
              v24 = v71;
              v33 += v71;
              v43 = (v42 + v30) / v35;
              v38[0xFFFFFFFE] = -v43;
              v44 = (double)v59;
              v59 = v33;
              a3e = (v44 + v30) / v35;
              v38[0xFFFFFFFF] = a3e;
              v37[0xFFFFFFFF] = a3e;
              v37[0xFFFFFFFE] = v43;
              v45 = v35;
              v46 = v31;
              v47 = v45;
              *v38 = v46;
              v48 = v46;
              v49 = v34;
              v38[1] = v34;
              v38 = (float *)((char *)v38 + v36);
              *v37 = v48;
              v50 = v48;
              v37[1] = v49;
              v37 = (float *)((char *)v37 + v36);
              if ( v33 >= a2 )
                break;
              v39 = v49;
              v40 = v50;
              v34 = v39;
              v41 = v40;
              v35 = v47;
              v31 = v41;
            }
            v27 = (signed int)v68;
            v51 = v49;
            v52 = v50;
            v29 = v67;
            v53 = v52;
            v32 = v51;
            v31 = v53;
          }
          ++v27;
          a3f = v31;
          v68 = (WaterShaderHeightMap *)v27;
          v62 = v31 + v31 * v28 - v32 * v29;
          a3a = v32 + v32 * v28 + v29 * a3f;
        }
        while ( v27 < v26 );
        v22 = v72;
        v25 = v30;
      }
      Srca += a2;
      --LODWORD(v69);
    }
    while ( v69 != 0.0 );
    v23 = *(float *)&j;
  }
  v54 = v66;
  (*(void (__stdcall **)(int, _DWORD, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v66 + 0x4C))(v66, 0, v73, 0, 0);
  LODWORD(v56) = v22;
  memcpy(Dst, (const void *)LODWORD(v23), v56);
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v54 + 0x50))(v54, 0);
  FormHeapFree(LODWORD(v23));
}
