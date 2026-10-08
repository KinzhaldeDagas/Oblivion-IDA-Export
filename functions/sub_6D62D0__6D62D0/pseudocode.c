// Oblivion NiTransformInterpolator constant-track collapse. Moves constant translation/rotation/scale into cached transform +0x0C, clears their NiTransformData tracks, and releases data +0x2C if all counts become zero. Multi-key equality collapse is restricted to numeric types 1 and 5; one-key tracks always collapse, while rotation type 4 is not treated as the ordinary one-key quaternion case.
void __thiscall NiTransformInterpolator_CollapseConstantTracks(float *this)
{
  float *v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  float *v6; // ebp
  int v7; // eax
  float v8; // ecx
  float v9; // edx
  int v10; // ecx
  char v11; // bl
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int v14; // ebp
  int v15; // eax
  float *v16; // edi
  char v17; // bl
  unsigned int v18; // esi
  int v19; // ecx
  unsigned int v20; // esi
  int v21; // eax
  int v22; // edi
  char v23; // bl
  unsigned int v24; // edx
  int v25; // eax
  void (__thiscall ***v26)(_DWORD, int); // esi
  bool v27; // zf
  float v29; // [esp+54h] [ebp-34h]
  float v30; // [esp+58h] [ebp-30h] BYREF
  float v31; // [esp+5Ch] [ebp-2Ch]
  float v32; // [esp+60h] [ebp-28h]
  float v33; // [esp+64h] [ebp-24h]
  _DWORD v34[8]; // [esp+68h] [ebp-20h] BYREF

  v1 = this; /*0x6d62db*/
  v2 = *((_DWORD *)this + 0xB); /*0x6d62de*/
  if ( v2 ) /*0x6d62e8*/
  {
    v3 = dword_B24260; /*0x6d62ee*/
    v4 = dword_B24264; /*0x6d62f9*/
    *(float *)&v34[7] = flt_A79E10; /*0x6d62ff*/
    v5 = dword_B24268; /*0x6d6303*/
    v6 = *(float **)(v2 + 0x24); /*0x6d6309*/
    v34[0] = v3; /*0x6d630c*/
    *(float *)&v34[3] = flt_B3CBA4; /*0x6d6315*/
    *(float *)&v34[6] = flt_B3CBB0; /*0x6d631e*/
    v7 = *(unsigned __int16 *)(v2 + 0xA); /*0x6d6322*/
    v34[1] = v4; /*0x6d6328*/
    v8 = flt_B3CBA8; /*0x6d632c*/
    v34[2] = v5; /*0x6d6332*/
    v9 = flt_B3CBAC; /*0x6d6336*/
    *(float *)&v34[4] = v8; /*0x6d633c*/
    v10 = *(_DWORD *)(v2 + 0x14); /*0x6d6340*/
    *(float *)&v34[5] = v9; /*0x6d6343*/
    if ( !v7 ) /*0x6d6347*/
    {
      NiTransformData_SetTranslationKeys((_DWORD *)v2, 0, 0, 0); /*0x6d634e*/
LABEL_13:
      if ( -flt_A7DEB4 != v1[3] ) /*0x6d63cb*/
        sub_471390(v34, v1 + 3); /*0x6d63d2*/
LABEL_15:
      v13 = *((_DWORD *)v1 + 0xB); /*0x6d63d7*/
      v14 = *(unsigned __int16 *)(v13 + 8); /*0x6d63da*/
      v15 = *(_DWORD *)(v13 + 0x10); /*0x6d63e0*/
      v16 = *(float **)(v13 + 0x20); /*0x6d63e3*/
      if ( !*(_WORD *)(v13 + 8) ) /*0x6d63da*/
      {
        NiTransformData_SetRotationKeys(v13, v14, v14, *(unsigned __int16 *)(v13 + 8)); /*0x6d63eb*/
        if ( -flt_A7DEB4 == v1[7] ) /*0x6d6402*/
          goto LABEL_35; /*0x6d6402*/
LABEL_34:
        sub_471430(v34, v1 + 6); /*0x6d64ed*/
        goto LABEL_35; /*0x6d64f5*/
      }
      v30 = v16[1]; /*0x6d6433*/
      v31 = v16[2]; /*0x6d643a*/
      v32 = v16[3]; /*0x6d6441*/
      v33 = v16[4]; /*0x6d6448*/
      if ( v14 != 1 || v15 == 4 ) /*0x6d6451*/
      {
        if ( v15 != 1 && v15 != 5 ) /*0x6d645f*/
        {
LABEL_33:
          if ( -flt_A7DEB4 == v1[7] ) /*0x6d64eb*/
            goto LABEL_35; /*0x6d64eb*/
          goto LABEL_34; /*0x6d64eb*/
        }
        v17 = 1; /*0x6d6465*/
        v18 = 1; /*0x6d646b*/
        while ( v18 < v14 ) /*0x6d647a*/
        {
          if ( v30 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 4) /*0x6d64c2*/
            || v31 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 8)
            || v32 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 0xC)
            || v33 != *(float *)((char *)v16 + v18 * *(unsigned __int8 *)(v13 + 0x1C) + 0x10) )
          {
            v17 = 0; /*0x6d64c4*/
          }
          ++v18; /*0x6d64c6*/
          if ( !v17 ) /*0x6d64cb*/
          {
            v1 = this; /*0x6d64d5*/
            goto LABEL_33; /*0x6d64d5*/
          }
        }
        v1 = this; /*0x6d6521*/
      }
      NiTransformData_SetRotationKeys(v13, 0, 0, 0); /*0x6d652b*/
      sub_471430(v34, &v30); /*0x6d6535*/
LABEL_35:
      v19 = *((_DWORD *)v1 + 0xB); /*0x6d64fa*/
      v20 = *(unsigned __int16 *)(v19 + 0xC); /*0x6d64fd*/
      v21 = *(_DWORD *)(v19 + 0x18); /*0x6d6503*/
      v22 = *(_DWORD *)(v19 + 0x28); /*0x6d6506*/
      if ( *(_WORD *)(v19 + 0xC) ) /*0x6d64fd*/
      {
        v29 = *(float *)(v22 + 4); /*0x6d653d*/
        if ( v20 == 1 ) /*0x6d6545*/
          goto LABEL_64; /*0x6d6545*/
        if ( v21 == 1 || v21 == 5 ) /*0x6d6553*/
        {
          v23 = 1; /*0x6d6555*/
          v24 = 1; /*0x6d6557*/
          while ( v24 < v20 ) /*0x6d655e*/
          {
            if ( v29 != *(float *)(v24 * *(unsigned __int8 *)(v19 + 0x1E) + v22 + 4) ) /*0x6d6578*/
              v23 = 0; /*0x6d657a*/
            ++v24; /*0x6d657c*/
            if ( !v23 ) /*0x6d6581*/
            {
              v1 = this; /*0x6d6583*/
              goto LABEL_48; /*0x6d6583*/
            }
          }
          v27 = v23 == 0; /*0x6d662f*/
          v1 = this; /*0x6d6633*/
          if ( !v27 ) /*0x6d6637*/
          {
LABEL_64:
            NiTransformData_SetScaleKeys((_DWORD *)v19, 0, 0, 0); /*0x6d6643*/
            goto LABEL_50; /*0x6d6648*/
          }
        }
      }
      else
      {
        NiTransformData_SetScaleKeys((_DWORD *)v19, v20, v20, *(unsigned __int16 *)(v19 + 0xC)); /*0x6d650e*/
      }
LABEL_48:
      if ( -flt_A7DEB4 == v1[0xA] ) /*0x6d659b*/
      {
LABEL_53:
        v25 = *((_DWORD *)v1 + 0xB); /*0x6d65d8*/
        if ( !*(_WORD *)(v25 + 0xA) && !*(_WORD *)(v25 + 8) && !*(_WORD *)(v25 + 0xC) ) /*0x6d65e9*/
        {
          v26 = *((void (__thiscall ****)(_DWORD, int))v1 + 0xB); /*0x6d65f0*/
          if ( v25 ) /*0x6d65f4*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x6d65fa*/
            {
              if ( v26 ) /*0x6d6606*/
                (**v26)(v26, 1); /*0x6d6610*/
            }
            v1[0xB] = 0.0; /*0x6d6612*/
          }
        }
        qmemcpy(v1 + 3, v34, 0x20u); /*0x6d6625*/
        return; /*0x6d6625*/
      }
      v29 = v1[0xA]; /*0x6d65a0*/
LABEL_50:
      if ( !_isnan(v29) ) /*0x6d65ae*/
      {
        if ( _finite(v29) ) /*0x6d65c4*/
          *(float *)&v34[7] = v29; /*0x6d65d4*/
      }
      goto LABEL_53; /*0x6d65d4*/
    }
    v30 = v6[1]; /*0x6d635b*/
    v31 = v6[2]; /*0x6d6362*/
    v32 = v6[3]; /*0x6d6369*/
    if ( v7 != 1 ) /*0x6d636d*/
    {
      if ( v10 != 1 && v10 != 5 ) /*0x6d637b*/
        goto LABEL_13; /*0x6d637b*/
      v11 = 1; /*0x6d637d*/
      v12 = 1; /*0x6d637f*/
      while ( v12 < *(unsigned __int16 *)(v2 + 0xA) ) /*0x6d638a*/
      {
        if ( NiPoint3__NotEqual((float *)((char *)v6 + v12 * *(unsigned __int8 *)(v2 + 0x1D) + 4), &v30) ) /*0x6d63a0*/
          v11 = 0; /*0x6d63a9*/
        ++v12; /*0x6d63ab*/
        if ( !v11 ) /*0x6d63b0*/
        {
          v1 = this; /*0x6d63b2*/
          goto LABEL_13; /*0x6d63b2*/
        }
      }
      v1 = this; /*0x6d6415*/
    }
    NiTransformData_SetTranslationKeys((_DWORD *)v2, 0, 0, 0); /*0x6d6421*/
    sub_471390(v34, &v30); /*0x6d642b*/
    goto LABEL_15; /*0x6d642b*/
  }
}
