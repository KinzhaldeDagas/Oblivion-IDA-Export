// OBLIVION AUTHORITY (2026-08-24): True CLeafGeometry::InitLods entry (range 0x798CC0..0x799318). Iterates every explicit leaf LOD and copies each CBillboardLeaf+0x14 packed color into that LOD's SLodGeometry+0x24 packedColors array.
void __thiscall sub_798CC0(_WORD *this, unsigned __int16 a2, int a3)
{
  int v4; // ebx
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  int v19; // ebp
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  double v23; // st7
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ebx
  int v31; // ecx
  int v32; // ecx
  __int16 v33; // dx
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // ebp
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  double v40; // st7
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // ebx
  int v44; // ecx
  int v45; // eax
  unsigned int v46; // ebx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // ebx
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  unsigned int v54; // ebx
  int v55; // ecx
  int v56; // eax
  unsigned int v57; // ebx
  int v58; // ebp
  int v59; // ecx
  float *v60; // eax
  int v61; // ecx
  double v62; // st7
  int v63; // ecx
  int v64; // eax
  unsigned int v65; // ebx
  int v66; // ebp
  int v67; // ecx
  float *v68; // eax
  int v69; // ecx
  double v70; // st7
  int v71; // ecx
  int v72; // eax
  float *v73; // eax
  int v74; // ecx
  double v75; // st7
  int v76; // ecx
  unsigned __int16 i; // [esp+18h] [ebp-14h]
  int v79; // [esp+1Ch] [ebp-10h]
  float v80; // [esp+1Ch] [ebp-10h]
  char v81; // [esp+1Ch] [ebp-10h]

  v4 = 0; /*0x798ced*/
  if ( a3 )
  {
    if ( *((_DWORD *)this + 4) )
    {
      if ( *((_DWORD *)this + 1) )
      {
        if ( *((_DWORD *)this + 5) )
        {
          *(this + 0x14) = a2; /*0x798d2a*/
          v5 = (0x44 * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x44 * a2;
          v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
          if ( v6 ) /*0x798d51*/
          {
            v4 = v6 + 4; /*0x798d5e*/
            *(_DWORD *)v6 = a2; /*0x798d64*/
            ArrayConstructor( /*0x798d66*/
              (char *)(v6 + 4),
              0x44u,
              a2,
              (void (__thiscall *)(char *))OB_SLodGeometry_ctor_010201A0,
              (void (__thiscall *)(void *))OB_CLeafGeometry_SLodGeometry_dtor_010201A0);
          }
          *((_DWORD *)this + 0xB) = v4; /*0x798d76*/
          for ( i = 0; i < a2; ++i )
          {
            v7 = *((_DWORD *)this + 0xB) + 0x44 * i; /*0x798d9e*/
            v8 = 0x10 * i + a3; /*0x798da6*/
            v9 = *(_DWORD *)(v8 + 4); /*0x798da9*/
            if ( v9 ) /*0x798dae*/
              v10 = (*(_DWORD *)(v8 + 8) - v9) >> 2; /*0x798db9*/
            else
              LOWORD(v10) = 0; /*0x798db0*/
            *(_WORD *)(v7 + 0xC) = v10; /*0x798dbc*/
            v11 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v10);
            v12 = 0; /*0x798dd9*/
            v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x798dde*/
            *(_DWORD *)(v7 + 0x20) = v11; /*0x798de2*/
            if ( !v13 ) /*0x798de5*/
            {
              do /*0x798e56*/
              {
                v14 = *(_DWORD *)(v8 + 4); /*0x798de7*/
                if ( !v14 || v12 >= (*(_DWORD *)(v8 + 8) - v14) >> 2 ) /*0x798df8*/
                  _invalid_parameter_noinfo(v12, v7, v8); /*0x798dfa*/
                v15 = *(_DWORD *)(v8 + 4); /*0x798e09*/
                v79 = *(unsigned __int8 *)(*(_DWORD *)(v15 + 4 * v12) + 0x40);// InitLods reads CBillboardLeaf texture index byte (+0x40) to address the per-LOD leaf vertex table. /*0x798e0d*/
                if ( !v15 || v12 >= (*(_DWORD *)(v8 + 8) - v15) >> 2 ) /*0x798e1d*/
                  _invalid_parameter_noinfo(v12, v7, v8); /*0x798e1f*/
                v16 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * i) /*0x798e46*/
                    + ((v79 * (unsigned __int16)*(this + 4)
                      + *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v12++) + 0x10)) << 6);
                *(_DWORD *)(*(_DWORD *)(v7 + 0x20) + 4 * v12 - 4) = v16; /*0x798e4c*/
              }
              while ( (int)v12 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x798e56*/
            }
            if ( *((_BYTE *)this + 1) )
            {
              v17 = FormHeapAlloc(
                      (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                    ? 0xFFFFFFFF
                    : 0xC * *(unsigned __int16 *)(v7 + 0xC));
              v18 = 0; /*0x798e83*/
              v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x798e88*/
              *(_DWORD *)(v7 + 0x40) = v17; /*0x798e8c*/
              if ( !v13 ) /*0x798e8f*/
              {
                v19 = 0; /*0x798e91*/
                do /*0x798ed7*/
                {
                  v20 = *(_DWORD *)(v8 + 4); /*0x798e93*/
                  if ( !v20 || v18 >= (unsigned int)((*(_DWORD *)(v8 + 8) - v20) >> 2) ) /*0x798ea4*/
                    _invalid_parameter_noinfo(v18, v7, v8); /*0x798ea6*/
                  v21 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v18); /*0x798eae*/
                  v22 = *(_DWORD *)(v7 + 0x40); /*0x798eb1*/
                  v23 = *(float *)(v21 + 4); /*0x798eb4*/
                  v21 += 4; /*0x798eb7*/
                  *(float *)(v22 + v19) = v23; /*0x798eba*/
                  v24 = v19 + v22; /*0x798ec0*/
                  *(float *)(v24 + 4) = *(float *)(v21 + 4); /*0x798ec2*/
                  ++v18; /*0x798ec5*/
                  v19 += 0xC; /*0x798ecb*/
                  *(float *)(v24 + 8) = *(float *)(v21 + 8); /*0x798ece*/
                }
                while ( v18 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x798ed7*/
              }
              v25 = FormHeapAlloc(
                      (unsigned __int64)*(unsigned __int16 *)(v7 + 0xC) >> 0x1E != 0
                    ? 0xFFFFFFFF
                    : 4 * *(unsigned __int16 *)(v7 + 0xC));
              v26 = 0; /*0x798ef3*/
              v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x798ef8*/
              *(_DWORD *)(v7 + 0x34) = v25; /*0x798efc*/
              if ( !v13 ) /*0x798eff*/
              {
                do /*0x798f3e*/
                {
                  v27 = *(_DWORD *)(v8 + 4); /*0x798f01*/
                  if ( !v27 || v26 >= (unsigned int)((*(_DWORD *)(v8 + 8) - v27) >> 2) ) /*0x798f12*/
                    _invalid_parameter_noinfo(v26, v7, v8); /*0x798f14*/
                  v28 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v26++); /*0x798f1c*/
                  v80 = 1.0 - *(float *)(v28 + 0x44); /*0x798f2c*/
                  *(float *)(*(_DWORD *)(v7 + 0x34) + 4 * v26 - 4) = v80; /*0x798f34*/
                }
                while ( v26 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x798f3e*/
              }
              v29 = FormHeapAlloc(*(unsigned __int16 *)(v7 + 0xC)); /*0x798f45*/
              v30 = 0; /*0x798f4a*/
              v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x798f4f*/
              *(_DWORD *)(v7 + 0x38) = v29; /*0x798f53*/
              if ( !v13 ) /*0x798f56*/
              {
                do /*0x798f9b*/
                {
                  v31 = *(_DWORD *)(v8 + 4); /*0x798f58*/
                  if ( !v31 || v30 >= (unsigned int)((*(_DWORD *)(v8 + 8) - v31) >> 2) ) /*0x798f69*/
                    _invalid_parameter_noinfo(v30, v7, v8); /*0x798f6b*/
                  v32 = *((_DWORD *)this + 1); /*0x798f74*/
                  v33 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v30++) + 0x48) /*0x798f86*/
                      % (__int16)*(unsigned __int8 *)(v32 + 0x2C);
                  *(_BYTE *)(v30 + *(_DWORD *)(v7 + 0x38) - 1) = *(_BYTE *)(v32 + 0x28) + v33; /*0x798f91*/
                }
                while ( v30 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x798f9b*/
              }
            }
            v34 = FormHeapAlloc(
                    (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 0xC * *(unsigned __int16 *)(v7 + 0xC));
            v35 = 0; /*0x798fba*/
            v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x798fbf*/
            *(_DWORD *)(v7 + 0x18) = v34; /*0x798fc3*/
            if ( !v13 ) /*0x798fc6*/
            {
              v36 = 0; /*0x798fc8*/
              do /*0x79900e*/
              {
                v37 = *(_DWORD *)(v8 + 4); /*0x798fca*/
                if ( !v37 || v35 >= (*(_DWORD *)(v8 + 8) - v37) >> 2 ) /*0x798fdb*/
                  _invalid_parameter_noinfo(v35, v7, v8); /*0x798fdd*/
                v38 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v35); /*0x798fe5*/
                v39 = *(_DWORD *)(v7 + 0x18); /*0x798fe8*/
                v40 = *(float *)(v38 + 4); /*0x798feb*/
                v38 += 4; /*0x798fee*/
                *(float *)(v39 + v36) = v40; /*0x798ff1*/
                v41 = v36 + v39; /*0x798ff7*/
                *(float *)(v41 + 4) = *(float *)(v38 + 4); /*0x798ff9*/
                ++v35; /*0x798ffc*/
                v36 += 0xC; /*0x799002*/
                *(float *)(v41 + 8) = *(float *)(v38 + 8); /*0x799005*/
              }
              while ( v35 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x79900e*/
            }
            v42 = FormHeapAlloc(*(unsigned __int16 *)(v7 + 0xC)); /*0x799015*/
            v43 = 0; /*0x79901a*/
            v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x79901f*/
            *(_DWORD *)(v7 + 0x10) = v42;       // Allocates SLodGeometry+0x10 alternate-index byte array once during CLeafGeometry InitLods, called only from first successful CSpeedTreeRT::Compute. /*0x799023*/
            if ( !v13 ) /*0x799026*/
            {
              do /*0x799058*/
              {
                v44 = *(_DWORD *)(v8 + 4); /*0x799028*/
                if ( !v44 || v43 >= (*(_DWORD *)(v8 + 8) - v44) >> 2 ) /*0x799039*/
                  _invalid_parameter_noinfo(v43, v7, v8); /*0x79903b*/
                *(_BYTE *)(v43 + *(_DWORD *)(v7 + 0x10)) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v43) + 0x40);// Copies each CBillboardLeaf+0x40 alternate texture-index byte into the persistent SLodGeometry+0x10 array. Later GetGeometry and cache invalidation do not modify this array. /*0x79904c*/
                ++v43; /*0x799053*/
              }
              while ( v43 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x799058*/
            }
            v45 = FormHeapAlloc(*(unsigned __int16 *)(v7 + 0xC)); /*0x79905f*/
            v46 = 0; /*0x799068*/
            v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x79906d*/
            *(_DWORD *)(v7 + 0x14) = v45; /*0x799071*/
            if ( !v13 ) /*0x799074*/
            {
              do /*0x7990d2*/
              {
                v47 = *(_DWORD *)(v8 + 4); /*0x799076*/
                if ( !v47 || v46 >= (*(_DWORD *)(v8 + 8) - v47) >> 2 ) /*0x799087*/
                  _invalid_parameter_noinfo(v46, v7, v8); /*0x799089*/
                v48 = *(_DWORD *)(v8 + 4); /*0x799098*/
                v81 = *(_BYTE *)(*(_DWORD *)(v48 + 4 * v46) + 0x40); /*0x79909c*/
                if ( !v48 || v46 >= (*(_DWORD *)(v8 + 8) - v48) >> 2 ) /*0x7990ac*/
                  _invalid_parameter_noinfo(v46, v7, v8); /*0x7990ae*/
                *(_BYTE *)(v46 + *(_DWORD *)(v7 + 0x14)) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v46) + 0x10) /*0x7990c6*/
                                                         + v81 * *((_BYTE *)this + 8);
                ++v46; /*0x7990cd*/
              }
              while ( v46 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x7990d2*/
            }
            v49 = FormHeapAlloc(
                    (unsigned __int64)*(unsigned __int16 *)(v7 + 0xC) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * *(unsigned __int16 *)(v7 + 0xC));
            v50 = 0; /*0x7990ee*/
            v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x7990f3*/
            *(_DWORD *)(v7 + 0x1C) = v49; /*0x7990f7*/
            if ( !v13 ) /*0x7990fa*/
            {
              do /*0x799138*/
              {
                v51 = *(_DWORD *)(v8 + 4); /*0x799100*/
                if ( !v51 || v50 >= (*(_DWORD *)(v8 + 8) - v51) >> 2 ) /*0x799111*/
                  _invalid_parameter_noinfo(v50, v7, v8); /*0x799113*/
                v52 = *((_DWORD *)this + 5) /*0x799128*/
                    + 0x20 * *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v50++) + 0x40);// InitLods selects each card's authored 8-float texcoord table by its alternate texture index: m_pLeafTexCoords + 0x20 * index.
                *(_DWORD *)(*(_DWORD *)(v7 + 0x1C) + 4 * v50 - 4) = v52; /*0x79912e*/
              }
              while ( v50 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x799138*/
            }
            v53 = FormHeapAlloc(
                    (unsigned __int64)*(unsigned __int16 *)(v7 + 0xC) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * *(unsigned __int16 *)(v7 + 0xC));
            v54 = 0; /*0x799154*/
            v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x799159*/
            *(_DWORD *)(v7 + 0x24) = v53;       // Allocate one packedColors dword per leaf in this LOD at SLodGeometry+0x24. /*0x79915d*/
            if ( !v13 ) /*0x799160*/
            {
              do /*0x799192*/
              {
                v55 = *(_DWORD *)(v8 + 4); /*0x799162*/
                if ( !v55 || v54 >= (*(_DWORD *)(v8 + 8) - v55) >> 2 ) /*0x799173*/
                  _invalid_parameter_noinfo(v54, v7, v8); /*0x799175*/
                *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 4 * v54) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v54) /*0x799186*/
                                                                          + 0x14);// Copy CBillboardLeaf+0x14 packedColor into this LOD's SLodGeometry+0x24 array. This is the authoritative source later sampled by the leaf builder.
                ++v54; /*0x79918d*/
              }
              while ( v54 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x799192*/
            }
            if ( !*(_BYTE *)this )
            {
              v56 = FormHeapAlloc(
                      (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                    ? 0xFFFFFFFF
                    : 0xC * *(unsigned __int16 *)(v7 + 0xC));
              v57 = 0; /*0x7991bb*/
              v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x7991c0*/
              *(_DWORD *)(v7 + 0x28) = v56; /*0x7991c4*/
              if ( !v13 ) /*0x7991c7*/
              {
                v58 = 0; /*0x7991c9*/
                do /*0x79920f*/
                {
                  v59 = *(_DWORD *)(v8 + 4); /*0x7991cb*/
                  if ( !v59 || v57 >= (*(_DWORD *)(v8 + 8) - v59) >> 2 ) /*0x7991dc*/
                    _invalid_parameter_noinfo(v57, v7, v8); /*0x7991de*/
                  v60 = *(float **)(*(_DWORD *)(v8 + 4) + 4 * v57); /*0x7991e6*/
                  v61 = *(_DWORD *)(v7 + 0x28); /*0x7991e9*/
                  v62 = v60[7]; /*0x7991ec*/
                  v60 += 7; /*0x7991ef*/
                  *(float *)(v61 + v58) = v62; /*0x7991f2*/
                  v63 = v58 + v61; /*0x7991f8*/
                  *(float *)(v63 + 4) = v60[1]; /*0x7991fa*/
                  ++v57; /*0x7991fd*/
                  v58 += 0xC; /*0x799203*/
                  *(float *)(v63 + 8) = v60[2]; /*0x799206*/
                }
                while ( v57 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x79920f*/
              }
              if ( !*(_BYTE *)this )
              {
                *(_DWORD *)(v7 + 0x30) = FormHeapAlloc(
                                           (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                                         ? 0xFFFFFFFF
                                         : 0xC * *(unsigned __int16 *)(v7 + 0xC));
                v64 = FormHeapAlloc(
                        (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                      ? 0xFFFFFFFF
                      : 0xC * *(unsigned __int16 *)(v7 + 0xC));
                v65 = 0; /*0x79925b*/
                v13 = *(_WORD *)(v7 + 0xC) == 0; /*0x799260*/
                *(_DWORD *)(v7 + 0x2C) = v64; /*0x799264*/
                if ( !v13 ) /*0x799267*/
                {
                  v66 = 0; /*0x79926d*/
                  do /*0x7992eb*/
                  {
                    v67 = *(_DWORD *)(v8 + 4); /*0x79926f*/
                    if ( !v67 || v65 >= (*(_DWORD *)(v8 + 8) - v67) >> 2 ) /*0x799280*/
                      _invalid_parameter_noinfo(v65, v7, v8); /*0x799282*/
                    v68 = *(float **)(*(_DWORD *)(v8 + 4) + 4 * v65); /*0x79928a*/
                    v69 = *(_DWORD *)(v7 + 0x30); /*0x79928d*/
                    v70 = v68[0xA]; /*0x799290*/
                    v68 += 0xA; /*0x799293*/
                    *(float *)(v69 + v66) = v70; /*0x799296*/
                    v71 = v66 + v69; /*0x79929c*/
                    *(float *)(v71 + 4) = v68[1]; /*0x79929e*/
                    *(float *)(v71 + 8) = v68[2]; /*0x7992a4*/
                    v72 = *(_DWORD *)(v8 + 4); /*0x7992a7*/
                    if ( !v72 || v65 >= (*(_DWORD *)(v8 + 8) - v72) >> 2 ) /*0x7992b8*/
                      _invalid_parameter_noinfo(v65, v7, v8); /*0x7992ba*/
                    v73 = *(float **)(*(_DWORD *)(v8 + 4) + 4 * v65); /*0x7992c2*/
                    v74 = *(_DWORD *)(v7 + 0x2C); /*0x7992c5*/
                    v75 = v73[0xD]; /*0x7992c8*/
                    v73 += 0xD; /*0x7992cb*/
                    *(float *)(v74 + v66) = v75; /*0x7992ce*/
                    v76 = v66 + v74; /*0x7992d4*/
                    *(float *)(v76 + 4) = v73[1]; /*0x7992d6*/
                    ++v65; /*0x7992d9*/
                    v66 += 0xC; /*0x7992df*/
                    *(float *)(v76 + 8) = v73[2]; /*0x7992e2*/
                  }
                  while ( v65 < *(unsigned __int16 *)(v7 + 0xC) ); /*0x7992eb*/
                }
              }
            }
          }
        }
      }
    }
  }
}
