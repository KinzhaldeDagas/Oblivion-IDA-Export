void __thiscall sub_7E0270(WaterShaderHeightMap *this, signed int a2, float a3)
{
  signed int v4; // esi
  int v5; // ebp
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
  int v23; // ebx
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

  v4 = 0; /*0x7e027f*/
  v68 = this; /*0x7e028d*/
  v67 = 0.0; /*0x7e0291*/
  v5 = FormHeapAlloc((unsigned int)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  Src = (_WORD *)FormHeapAlloc((unsigned int)a2 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * a2);
  _memset(v5, 0, 4 * a2); /*0x7e02c7*/
  InnerTexture = BSRenderedTexture::GetInnerTexture(this->Unk0E4); /*0x7e02d5*/
  v7 = (*((int (__thiscall **)(NiDX9TextureData *))InnerTexture->member.super.rendererData->_vtbl + 5))(InnerTexture->member.super.rendererData); /*0x7e02e2*/
  v8 = dbl_A2FAA0; /*0x7e02e4*/
  v9 = v7; /*0x7e02ea*/
  v10 = 0; /*0x7e02ec*/
  v66 = v9; /*0x7e02f0*/
  for ( i = 0; v10 < a2; *(float *)(v5 + 4 * v10 - 4) = *(float *)&j / v60 ) /*0x7e02f8*/
  {
    v11 = (double)i; /*0x7e0306*/
    i = ++v10; /*0x7e030f*/
    *(float *)&j = v11 + v8; /*0x7e0315*/
    v60 = (float)a2; /*0x7e02fe*/
  }
  v12 = 0; /*0x7e0327*/
  if ( a2 > 0 ) /*0x7e032d*/
  {
    v13 = a2 >> 1; /*0x7e0331*/
    for ( j = a2 >> 1; ; v13 = j ) /*0x7e0333*/
    {
      if ( v12 > v4 ) /*0x7e0346*/
      {
        v69 = *(float *)(v5 + 4 * v4); /*0x7e034c*/
        *(float *)(v5 + 4 * v4) = *(float *)(v5 + 4 * v12); /*0x7e0354*/
        *(float *)(v5 + 4 * v12) = v69; /*0x7e035c*/
      }
      for ( ; v4 >= v13 && v13 >= 2; v13 >>= 1 ) /*0x7e0371*/
        v4 -= v13; /*0x7e0373*/
      ++v12; /*0x7e038a*/
      v4 += v13; /*0x7e038d*/
      if ( v12 >= a2 ) /*0x7e0391*/
        break; /*0x7e0391*/
    }
    v9 = v66; /*0x7e0393*/
  }
  v14 = 0; /*0x7e0397*/
  if ( a2 > 0 ) /*0x7e039b*/
  {
    v15 = dbl_A3DDD0; /*0x7e039d*/
    do /*0x7e03da*/
    {
      v16 = *(float *)(v5 + 4 * v14++); /*0x7e03a3*/
      j = (int)(v16 * v15); /*0x7e03c8*/
      Src[v14 - 1] = j; /*0x7e03d1*/
    }
    while ( v14 < a2 ); /*0x7e03da*/
  }
  (*(void (__stdcall **)(int, _DWORD, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v9 + 0x4C))(v9, 0, v73, 0, 0); /*0x7e03ef*/
  LODWORD(v55) = 2 * a2; /*0x7e03fc*/
  memcpy(Dst, Src, v55); /*0x7e03ff*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 0x50))(v9, 0); /*0x7e040f*/
  FormHeapFree(v5); /*0x7e0412*/
  FormHeapFree((unsigned int)Src); /*0x7e0418*/
  Unk0E0 = v68->Unk0E0; /*0x7e0421*/
  if ( Unk0E0 ) /*0x7e042c*/
  {
    v18 = v66; /*0x7e042e*/
    v19 = LOBYTE(v67); /*0x7e0432*/
    p_RenderedTexture = (int *)&Unk0E0->members.RenderedTexture; /*0x7e0436*/
  }
  else
  {
    v18 = 0; /*0x7e043b*/
    v66 = 0; /*0x7e043d*/
    p_RenderedTexture = &v66; /*0x7e0441*/
    v19 = 1; /*0x7e0445*/
  }
  v21 = *p_RenderedTexture; /*0x7e044d*/
  if ( (v19 & 1) != 0 ) /*0x7e044f*/
  {
    if ( v18 ) /*0x7e0453*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x7e0459*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x7e046b*/
    }
  }
  v66 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v21 + 0x24) + 0x14))(*(_DWORD *)(v21 + 0x24)); /*0x7e0477*/
  v22 = a2 << 8; /*0x7e0498*/
  v23 = FormHeapAlloc((unsigned int)(a2 << 6) >> 0x1E != 0 ? 0xFFFFFFFF : a2 << 8);
  j = v23; /*0x7e04a1*/
  v72 = a2 << 8; /*0x7e04a5*/
  _memset(v23, 0, a2 << 8); /*0x7e04a9*/
  v24 = 1; /*0x7e04b7*/
  if ( SLODWORD(a3) > 0 ) /*0x7e04bc*/
  {
    v25 = dbl_A2FAA0; /*0x7e04c2*/
    Srca = 0; /*0x7e04c8*/
    v69 = a3; /*0x7e04d0*/
    do /*0x7e065a*/
    {
      v26 = v24; /*0x7e04d4*/
      v24 *= 2; /*0x7e04d6*/
      v71 = v24; /*0x7e04e4*/
      v61 = dbl_A91CF0 / (double)-v24; /*0x7e04ee*/
      a3b = v25 * v61; /*0x7e04f6*/
      a3c = sin(a3b); /*0x7e0503*/
      v58 = a3c * (kFaceGenPolarNegativeTwo * a3c); /*0x7e051d*/
      a3d = sin(v61); /*0x7e052a*/
      v27 = 0; /*0x7e0532*/
      v67 = a3d; /*0x7e0536*/
      v68 = 0; /*0x7e053c*/
      v62 = 1.0; /*0x7e0540*/
      a3a = 0.0; /*0x7e0546*/
      if ( v26 <= 0 ) /*0x7e054a*/
      {
        v25 = dbl_A2FAA0; /*0x7e064b*/
      }
      else
      {
        v28 = v58; /*0x7e0550*/
        v29 = v67; /*0x7e0554*/
        v30 = dbl_A2FAA0; /*0x7e0558*/
        do /*0x7e063b*/
        {
          v31 = v62; /*0x7e0560*/
          v32 = a3a; /*0x7e0564*/
          v33 = v27; /*0x7e0568*/
          v59 = v27; /*0x7e056a*/
          if ( v27 < a2 ) /*0x7e056e*/
          {
            v34 = a3a; /*0x7e0578*/
            v63 = (float)a2; /*0x7e0588*/
            v35 = v63; /*0x7e058c*/
            v36 = 0x10 * v24; /*0x7e0595*/
            v37 = (float *)(0x10 * (_DWORD)&Srca[v27] + j + 8); /*0x7e059b*/
            v38 = (float *)(0x10 * (_DWORD)&Srca[v27 + v26] + j + 8); /*0x7e059f*/
            while ( 1 ) /*0x7e05b0*/
            {
              v42 = (double)(v26 + v33); /*0x7e05b0*/
              v24 = v71; /*0x7e05b4*/
              v33 += v71; /*0x7e05b8*/
              v43 = (v42 + v30) / v35; /*0x7e05bc*/
              v38[0xFFFFFFFE] = -v43; /*0x7e05c2*/
              v44 = (double)v59; /*0x7e05c5*/
              v59 = v33; /*0x7e05c9*/
              a3e = (v44 + v30) / v35; /*0x7e05d1*/
              v38[0xFFFFFFFF] = a3e; /*0x7e05d9*/
              v37[0xFFFFFFFF] = a3e; /*0x7e05dc*/
              v37[0xFFFFFFFE] = v43; /*0x7e05df*/
              v45 = v35; /*0x7e05e2*/
              v46 = v31; /*0x7e05e2*/
              v47 = v45; /*0x7e05e2*/
              *v38 = v46; /*0x7e05e4*/
              v48 = v46; /*0x7e05e6*/
              v49 = v34; /*0x7e05e6*/
              v38[1] = v34; /*0x7e05e8*/
              v38 = (float *)((char *)v38 + v36); /*0x7e05eb*/
              *v37 = v48; /*0x7e05ef*/
              v50 = v48; /*0x7e05f1*/
              v37[1] = v49; /*0x7e05f3*/
              v37 = (float *)((char *)v37 + v36); /*0x7e05f6*/
              if ( v33 >= a2 ) /*0x7e05fa*/
                break; /*0x7e05fa*/
              v39 = v49; /*0x7e05a5*/
              v40 = v50; /*0x7e05a5*/
              v34 = v39; /*0x7e05a5*/
              v41 = v40; /*0x7e05a7*/
              v35 = v47; /*0x7e05a7*/
              v31 = v41; /*0x7e05a7*/
            }
            v27 = (signed int)v68; /*0x7e05fc*/
            v51 = v49; /*0x7e0600*/
            v52 = v50; /*0x7e0606*/
            v29 = v67; /*0x7e0606*/
            v53 = v52; /*0x7e0608*/
            v32 = v51; /*0x7e0608*/
            v31 = v53; /*0x7e0608*/
          }
          ++v27; /*0x7e060c*/
          a3f = v31; /*0x7e0611*/
          v68 = (WaterShaderHeightMap *)v27; /*0x7e0617*/
          v62 = v31 + v31 * v28 - v32 * v29; /*0x7e0625*/
          a3a = v32 + v32 * v28 + v29 * a3f; /*0x7e0637*/
        }
        while ( v27 < v26 ); /*0x7e063b*/
        v22 = v72; /*0x7e0641*/
        v25 = v30; /*0x7e0647*/
      }
      Srca += a2; /*0x7e0651*/
      --LODWORD(v69); /*0x7e0655*/
    }
    while ( v69 != 0.0 ); /*0x7e065a*/
    v23 = j; /*0x7e0660*/
  }
  v54 = v66; /*0x7e0666*/
  (*(void (__stdcall **)(int, _DWORD, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v66 + 0x4C))(v66, 0, v73, 0, 0); /*0x7e067b*/
  LODWORD(v56) = v22; /*0x7e0681*/
  memcpy(Dst, (const void *)v23, v56); /*0x7e0684*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v54 + 0x50))(v54, 0); /*0x7e0694*/
  FormHeapFree(v23); /*0x7e0697*/
}
