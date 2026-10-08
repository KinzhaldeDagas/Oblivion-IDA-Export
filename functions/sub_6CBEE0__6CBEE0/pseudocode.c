// Oblivion: evaluates multiple 0x18-byte blend items using item+8 normalized weight. Translation, rotation, and scale validity are tracked independently; missing channels reduce only that channel's weight. Quaternions are hemisphere-corrected before weighted summation and normalized afterward.
bool __thiscall NiBlendTransformInterpolator_UpdateMultiple(_DWORD *this, float a2, int a3, int a4)
{
  float v4; // eax
  float v5; // edx
  double v7; // st7
  unsigned __int8 v8; // bl
  int v9; // esi
  int v10; // ecx
  double v11; // st7
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  double v16; // st4
  double v17; // st7
  float *v18; // eax
  float *v19; // eax
  float v20; // edx
  double v21; // st7
  char v23; // [esp+21h] [ebp-8Fh]
  char v24; // [esp+22h] [ebp-8Eh]
  char v25; // [esp+23h] [ebp-8Dh]
  float v26; // [esp+24h] [ebp-8Ch]
  float v27; // [esp+24h] [ebp-8Ch]
  float v28; // [esp+24h] [ebp-8Ch]
  float v29; // [esp+24h] [ebp-8Ch]
  float v30; // [esp+24h] [ebp-8Ch]
  char v31; // [esp+2Bh] [ebp-85h]
  float v32; // [esp+2Ch] [ebp-84h]
  float v33; // [esp+30h] [ebp-80h]
  float v34; // [esp+34h] [ebp-7Ch]
  float v35; // [esp+34h] [ebp-7Ch]
  float v36; // [esp+38h] [ebp-78h] BYREF
  float v37; // [esp+3Ch] [ebp-74h]
  float v38; // [esp+40h] [ebp-70h]
  float v39; // [esp+44h] [ebp-6Ch] BYREF
  float v40; // [esp+48h] [ebp-68h]
  float v41; // [esp+4Ch] [ebp-64h]
  float v42; // [esp+50h] [ebp-60h]
  float v43; // [esp+54h] [ebp-5Ch] BYREF
  float v44; // [esp+58h] [ebp-58h]
  float v45; // [esp+5Ch] [ebp-54h]
  float v46; // [esp+60h] [ebp-50h]
  float v47; // [esp+64h] [ebp-4Ch] BYREF
  float v48; // [esp+68h] [ebp-48h]
  float v49; // [esp+6Ch] [ebp-44h]
  float v50; // [esp+70h] [ebp-40h]
  float v51; // [esp+74h] [ebp-3Ch]
  float v52; // [esp+78h] [ebp-38h]
  float v53; // [esp+7Ch] [ebp-34h]
  float v54; // [esp+80h] [ebp-30h]
  float v55; // [esp+84h] [ebp-2Ch]
  float v56; // [esp+88h] [ebp-28h]
  float v57; // [esp+8Ch] [ebp-24h]
  int v58[4]; // [esp+90h] [ebp-20h] BYREF
  float v59[4]; // [esp+A0h] [ebp-10h] BYREF

  v4 = g_zeroNiPoint3; /*0x6cbee8*/
  v5 = MEMORY[0xB3F9B0][0]; /*0x6cbeed*/
  v33 = 1.0; /*0x6cbef3*/
  v32 = 1.0; /*0x6cbef8*/
  v37 = *(&g_zeroNiPoint3 + 1); /*0x6cbf17*/
  v36 = v4; /*0x6cbf22*/
  v38 = v5; /*0x6cbf26*/
  sub_714C40(&v43, 0.0, 0.0, 0.0, 0.0); /*0x6cbf2a*/
  v7 = 0.0; /*0x6cbf2f*/
  v8 = 0; /*0x6cbf31*/
  v34 = 0.0; /*0x6cbf33*/
  v24 = 0; /*0x6cbf3a*/
  v25 = 0; /*0x6cbf3f*/
  v23 = 0; /*0x6cbf44*/
  v31 = 1; /*0x6cbf49*/
  while ( v8 < *((_BYTE *)this + 0xD) ) /*0x6cbf37*/
  {
    v9 = *(this + 5) + 0x18 * v8; /*0x6cbf69*/
    v10 = *(_DWORD *)v9; /*0x6cbf6c*/
    if ( !*(_DWORD *)v9 || v7 >= *(float *)(v9 + 8) ) /*0x6cbf7e*/
      goto LABEL_27; /*0x6cbf7e*/
    v26 = a2; /*0x6cbf92*/
    if ( unk_B3CBD0 && *((_BYTE *)this + 0xE) == 1 ) /*0x6cbf9c*/
    {
      if ( (*(_BYTE *)(this + 3) & 1) != 0 ) /*0x6cbfa4*/
      {
        v11 = *((float *)this + 8); /*0x6cbfa6*/
LABEL_11:
        v26 = v11; /*0x6cbfbe*/
      }
    }
    else
    {
      if ( v7 == *(float *)(v9 + 8) ) /*0x6cbfb3*/
        goto LABEL_13; /*0x6cbfb3*/
      if ( (*(_BYTE *)(this + 3) & 1) != 0 ) /*0x6cbfb9*/
      {
        v11 = *(float *)(v9 + 0x14); /*0x6cbfbb*/
        goto LABEL_11; /*0x6cbfbb*/
      }
    }
    if ( flt_A79F00 != v26 ) /*0x6cbfd5*/
    {
      v12 = dword_B24260; /*0x6cbff4*/
      v13 = dword_B24264; /*0x6cc000*/
      v54 = flt_A79E10; /*0x6cc005*/
      v47 = *(float *)&v12; /*0x6cc009*/
      v49 = *(float *)&dword_B24268; /*0x6cc013*/
      v51 = flt_B3CBA8; /*0x6cc01d*/
      v14 = flt_B3CBB0; /*0x6cc021*/
      v48 = *(float *)&v13; /*0x6cc027*/
      v15 = flt_B3CBA4; /*0x6cc02b*/
      v53 = *(float *)&v14; /*0x6cc030*/
      v50 = *(float *)&v15; /*0x6cc034*/
      v52 = flt_B3CBAC; /*0x6cc042*/
      if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x4C))( /*0x6cc050*/
             COERCE_FLOAT(LODWORD(v26)),
             a3,
             &v47) )
      {
        v27 = -flt_A7DEB4; /*0x6cc05e*/
        if ( v27 == v47 ) /*0x6cc077*/
        {
          v17 = v27; /*0x6cc0cf*/
          v33 = v33 - *(float *)(v9 + 8); /*0x6cc0d8*/
        }
        else
        {
          v24 = 1; /*0x6cc07c*/
          v16 = *(float *)(v9 + 8); /*0x6cc089*/
          v55 = v47 * v16; /*0x6cc08f*/
          v56 = v48 * v16; /*0x6cc099*/
          v17 = v27; /*0x6cc0a3*/
          v57 = v16 * v49; /*0x6cc0a5*/
          v36 = v55 + v36; /*0x6cc0b1*/
          v37 = v37 + v56; /*0x6cc0bd*/
          v38 = v38 + v57; /*0x6cc0c9*/
        }
        if ( v51 != v17 ) /*0x6cc0eb*/
        {
          v39 = v50; /*0x6cc102*/
          v40 = v51; /*0x6cc10a*/
          v41 = v52; /*0x6cc10e*/
          v42 = v53; /*0x6cc112*/
          if ( v31 ) /*0x6cc116*/
          {
            v31 = 0; /*0x6cc17f*/
          }
          else
          {
            v28 = v51 * v44 + v50 * v43 + v52 * v45 + v53 * v46; /*0x6cc13a*/
            if ( v28 < (double)*(float *)&SrcStr ) /*0x6cc14d*/
            {
              v18 = sub_714CC0(&v39, v59); /*0x6cc15b*/
              v39 = *v18; /*0x6cc162*/
              v40 = v18[1]; /*0x6cc169*/
              v41 = v18[2]; /*0x6cc170*/
              v42 = v18[3]; /*0x6cc177*/
            }
          }
          v19 = sub_72F930(&v39, (float *)v58, *(float *)(v9 + 8)); /*0x6cc197*/
          v39 = *v19; /*0x6cc19e*/
          v40 = v19[1]; /*0x6cc1ad*/
          v41 = v19[2]; /*0x6cc1b4*/
          v20 = v19[3]; /*0x6cc1b8*/
          v43 = v39 + v43; /*0x6cc1bb*/
          v42 = v20; /*0x6cc1c3*/
          v25 = 1; /*0x6cc1cb*/
          v44 = v44 + v40; /*0x6cc1d0*/
          v45 = v45 + v41; /*0x6cc1dc*/
          v46 = v46 + v20; /*0x6cc1e8*/
        }
        if ( -flt_A7DEB4 == v54 ) /*0x6cc205*/
        {
          v32 = v32 - *(float *)(v9 + 8); /*0x6cc222*/
        }
        else
        {
          v23 = 1; /*0x6cc20a*/
          v34 = v54 * *(float *)(v9 + 8) + v34; /*0x6cc213*/
        }
        goto LABEL_27; /*0x6cc217*/
      }
    }
LABEL_13:
    v33 = v33 - *(float *)(v9 + 8); /*0x6cbfd9*/
    v32 = v32 - *(float *)(v9 + 8); /*0x6cbfeb*/
LABEL_27:
    v7 = 0.0; /*0x6cc22a*/
    ++v8; /*0x6cc22c*/
  }
  *(float *)a4 = -flt_A7DEB4; /*0x6cc239*/
  *(float *)(a4 + 0x10) = -flt_A7DEB4; /*0x6cc257*/
  *(float *)(a4 + 0x1C) = -flt_A7DEB4; /*0x6cc262*/
  if ( v24 || v25 || v23 ) /*0x6cc273*/
  {
    if ( v33 == v7 ) /*0x6cc286*/
      v24 = 0; /*0x6cc288*/
    if ( v32 < dbl_A68618 ) /*0x6cc29c*/
      v23 = 0; /*0x6cc29e*/
    if ( v24 ) /*0x6cc2a8*/
    {
      v29 = 1.0 / v33; /*0x6cc2b5*/
      v36 = v29 * v36; /*0x6cc2c3*/
      v37 = v37 * v29; /*0x6cc2cd*/
      v38 = v29 * v38; /*0x6cc2d5*/
      sub_471390((_DWORD *)a4, &v36); /*0x6cc2d9*/
    }
    if ( v25 ) /*0x6cc2e7*/
    {
      sub_715340(&v43); /*0x6cc2ed*/
      sub_471430((_DWORD *)a4, &v43); /*0x6cc2f9*/
    }
    if ( v23 ) /*0x6cc303*/
    {
      v35 = v34 / v32; /*0x6cc310*/
      if ( !_isnan(v35) ) /*0x6cc31b*/
      {
        if ( _finite(v35) ) /*0x6cc331*/
          *(float *)(a4 + 0x1C) = v35; /*0x6cc341*/
      }
    }
  }
  v30 = -flt_A7DEB4; /*0x6cc350*/
  v21 = v30; /*0x6cc361*/
  return v30 != *(float *)(a4 + 0x1C) || v21 != *(float *)(a4 + 0x10) || *(float *)a4 != v21; /*0x6cc386*/
}
