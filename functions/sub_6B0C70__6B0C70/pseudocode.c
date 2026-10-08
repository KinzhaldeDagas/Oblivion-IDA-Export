int __cdecl sub_6B0C70(float arg0)
{
  float v3; // esi
  int result; // eax
  float *sound; // eax
  bool v6; // zf
  double v7; // st5
  _DWORD *v8; // ecx
  double v9; // st5
  _DWORD *v10; // ecx
  double v11; // st5
  char v12; // al
  char v13; // al
  int v14; // eax
  int v15; // ebp
  int v16; // ecx
  void *v17; // eax
  int v18; // eax
  int *v19; // ebx
  int *v20; // edi
  double v21; // st7
  double v22; // st7
  int v23; // eax
  int *v24; // ecx
  double v25; // st7
  double v26; // st7
  int v27; // eax
  int *v28; // ecx
  int v29; // edi
  unsigned int v30; // edi
  float v31; // eax
  int v32; // ebx
  unsigned int v33; // esi
  int v34; // eax
  MEF_U32PointerMapEntry32 **buckets; // edx
  float v36; // eax
  float v37; // [esp+10h] [ebp-44h]
  float v38; // [esp+10h] [ebp-44h]
  float v39; // [esp+14h] [ebp-40h]
  float v40; // [esp+14h] [ebp-40h]
  int v41; // [esp+2Ch] [ebp-28h]
  float a3a; // [esp+30h] [ebp-24h]
  int a3; // [esp+30h] [ebp-24h]
  unsigned int keyOut; // [esp+34h] [ebp-20h] BYREF
  void *valueOut; // [esp+38h] [ebp-1Ch] BYREF
  float v46; // [esp+3Ch] [ebp-18h]
  float v47; // [esp+40h] [ebp-14h]
  float v48; // [esp+44h] [ebp-10h]
  unsigned int v49; // [esp+50h] [ebp-4h]

  v3 = arg0; /*0x6b0c97*/
  result = *(_DWORD *)(LODWORD(arg0) + 0x1C); /*0x6b0c9b*/
  if ( result != *(_DWORD *)(LODWORD(arg0) + 0x20) || !result )
  {
    result = unk_B3C20C; /*0x6b0cab*/
    if ( unk_B3C20C < (unsigned int)dword_B16304 )
    {
      if ( (dword_B3C180[0] & 1) == 0 ) /*0x6b0cc3*/
      {
        dword_B3C180[0] |= 1u; /*0x6b0cc5*/
        NiInitalizeCriticalSection(&unk_B3C100); /*0x6b0cd9*/
        atexit(sub_A26270); /*0x6b0ce3*/
        v49 = 0xFFFFFFFF; /*0x6b0ceb*/
      }
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B3C100, (int)&aImpactmixerPla); /*0x6b0cfd*/
      sound = (float *)unk_B3C0F0; /*0x6b0d02*/
      if ( !unk_B3C0F0 ) /*0x6b0d02*/
      {
        sound = (float *)MEMORY[0xB33398]->sound; /*0x6b0d11*/
        unk_B3C0F0 = (int)sound; /*0x6b0d14*/
      }
      v6 = *(_BYTE *)(LODWORD(v3) + 0x14) == 0x1F; /*0x6b0d19*/
      *(float *)&keyOut = *(float *)(LODWORD(v3) + 0xC) * dbl_A77808; /*0x6b0d26*/
      *(float *)&v41 = *(float *)(LODWORD(v3) + 0xC) / fConst_200; /*0x6b0d33*/
      if ( v6 && *(_BYTE *)(LODWORD(v3) + 0x15) == 6 ) /*0x6b0d3d*/
        *(float *)&v41 = *(float *)&v41 * dbl_A3C800; /*0x6b0d49*/
      if ( !unk_B333B8 ) /*0x6b0d4d*/
        goto LABEL_67; /*0x6b0d4d*/
      v46 = sound[0x20]; /*0x6b0d60*/
      v47 = sound[0x21]; /*0x6b0d6a*/
      v48 = sound[0x22]; /*0x6b0d74*/
      v46 = v46 - *(float *)LODWORD(v3); /*0x6b0d7e*/
      v47 = v47 - *(float *)(LODWORD(v3) + 4); /*0x6b0d89*/
      v48 = v48 - *(float *)(LODWORD(v3) + 8); /*0x6b0d94*/
      arg0 = v48 * v48 + v46 * v46 + v47 * v47; /*0x6b0db6*/
      arg0 = sqrt(arg0); /*0x6b0dc3*/
      v7 = arg0; /*0x6b0dc7*/
      arg0 = flt_B162FC * dbl_A2FAA0; /*0x6b0dd7*/
      if ( arg0 >= v7 )
      {
LABEL_67:
        v8 = *(_DWORD **)(LODWORD(v3) + 0x1C); /*0x6b0dec*/
        v9 = v8 ? sub_535AC0(v8) : flt_A31E2C;
        v10 = *(_DWORD **)(LODWORD(v3) + 0x20); /*0x6b0e00*/
        arg0 = v9; /*0x6b0e03*/
        v11 = v10 ? sub_535AC0(v10) : flt_A31E2C;
        v12 = *(_BYTE *)(LODWORD(v3) + 0x14); /*0x6b0e18*/
        if ( v12 >= 0xF ) /*0x6b0e21*/
          *(_BYTE *)(LODWORD(v3) + 0x14) = v12 - 0xF; /*0x6b0e25*/
        v13 = *(_BYTE *)(LODWORD(v3) + 0x15); /*0x6b0e28*/
        if ( v13 >= 0xF ) /*0x6b0e2d*/
          *(_BYTE *)(LODWORD(v3) + 0x15) = v13 - 0xF; /*0x6b0e31*/
        sub_6B0350(*(char *)(LODWORD(v3) + 0x14), arg0); /*0x6b0e41*/
        v15 = v14; /*0x6b0e4a*/
        a3a = v11; /*0x6b0e1b*/
        sub_6B0350(*(char *)(LODWORD(v3) + 0x15), a3a); /*0x6b0e58*/
        v16 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6b0e5d*/
        valueOut = v17; /*0x6b0e6a*/
        v18 = *(_DWORD *)(LODWORD(v3) + 0x18); /*0x6b0e6e*/
        a3 = v16; /*0x6b0e72*/
        v19 = 0; /*0x6b0e76*/
        v20 = 0; /*0x6b0e7e*/
        arg0 = 0.0; /*0x6b0e80*/
        if ( !NiTMap_GetAt(&self, v18, &arg0) || a3 - LODWORD(arg0) >= (unsigned int)dword_B16244 ) /*0x6b0e9b*/
        {
          NiTMap_SetAt(&self, *(_DWORD *)(LODWORD(v3) + 0x18), a3); /*0x6b0eaf*/
          if ( v15 ) /*0x6b0eb6*/
          {
            if ( *(_BYTE *)(LODWORD(v3) + 0x14) != 7 || *(_BYTE *)(LODWORD(v3) + 0x15) != 7 ) /*0x6b0ec2*/
              v20 = OSGLobals_PlaySound((int *)unk_B3C0F0, *(void **)(v15 + 0xC), 0x4102, 0); /*0x6b0eda*/
          }
          if ( valueOut ) /*0x6b0ee2*/
          {
            if ( *(_BYTE *)(LODWORD(v3) + 0x14) != 7 || *(_BYTE *)(LODWORD(v3) + 0x15) != 7 ) /*0x6b0eee*/
              v19 = OSGLobals_PlaySound((int *)unk_B3C0F0, *((void **)valueOut + 3), 0x4102, 0); /*0x6b0f06*/
          }
          if ( v20 ) /*0x6b0f0a*/
          {
            sub_6B7360(v20, *(float *)LODWORD(v3), *(float *)(LODWORD(v3) + 4), *(float *)(LODWORD(v3) + 8)); /*0x6b0f28*/
            v21 = *(float *)&keyOut / dbl_A46E48; /*0x6b0f31*/
            if ( v21 > 1.0 ) /*0x6b0f40*/
              v21 = 1.0; /*0x6b0f42*/
            arg0 = v21 * dbl_A38538 + dbl_A6E700; /*0x6b0f57*/
            sub_6B7310(v20, arg0); /*0x6b0f62*/
            v22 = *(float *)&v41 * dbl_A2FAA0; /*0x6b0f6b*/
            if ( v22 < 1.0 && v22 <= 0.0 ) /*0x6b0f89*/
            {
              v22 = 0.0; /*0x6b0f9a*/
            }
            else if ( v22 >= 1.0 ) /*0x6b0f94*/
            {
              v22 = 1.0; /*0x6b0f96*/
            }
            arg0 = v22; /*0x6b0f9e*/
            sub_6B7280(v20, arg0); /*0x6b0fac*/
            v39 = flt_A379CC; /*0x6b0fc3*/
            valueOut = (void *)(LOWORD(arg0) | 0xC00); /*0x6b0fd0*/
            v23 = *v20; /*0x6b0fd8*/
            valueOut = (void *)(int)*(float *)&v41; /*0x6b0fda*/
            v24 = (int *)unk_B3C0F0; /*0x6b0fe5*/
            LODWORD(arg0) = (unsigned __int8)valueOut; /*0x6b0fef*/
            v37 = (float)(unsigned __int8)valueOut; /*0x6b0ff7*/
            sub_6ACC50(v24, v23, v37, v39); /*0x6b0ffb*/
            sub_6B7190(v20, 0); /*0x6b1004*/
            sub_6B73E0(v20); /*0x6b100b*/
            FormHeapFree((unsigned int)v20); /*0x6b1011*/
          }
          if ( v19 ) /*0x6b101b*/
          {
            sub_6B7360(v19, *(float *)LODWORD(v3), *(float *)(LODWORD(v3) + 4), *(float *)(LODWORD(v3) + 8)); /*0x6b1039*/
            v25 = *(float *)&keyOut / dbl_A46E48; /*0x6b1042*/
            if ( v25 > 1.0 ) /*0x6b1051*/
              v25 = 1.0; /*0x6b1053*/
            arg0 = v25 * dbl_A38538 + dbl_A6E700; /*0x6b1068*/
            sub_6B7310(v19, arg0); /*0x6b1073*/
            v26 = *(float *)&v41 * dbl_A2FAA0; /*0x6b107c*/
            if ( v26 < 1.0 && v26 <= 0.0 ) /*0x6b109a*/
            {
              v26 = 0.0; /*0x6b10ab*/
            }
            else if ( v26 >= 1.0 ) /*0x6b10a5*/
            {
              v26 = 1.0; /*0x6b10a7*/
            }
            arg0 = v26; /*0x6b10af*/
            sub_6B7280(v19, arg0); /*0x6b10bd*/
            v40 = flt_A379CC; /*0x6b10d4*/
            valueOut = (void *)(LOWORD(arg0) | 0xC00); /*0x6b10e1*/
            v27 = *v19; /*0x6b10e9*/
            valueOut = (void *)(int)*(float *)&v41; /*0x6b10eb*/
            v28 = (int *)unk_B3C0F0; /*0x6b10f6*/
            LODWORD(arg0) = (unsigned __int8)valueOut; /*0x6b1100*/
            v38 = (float)(unsigned __int8)valueOut; /*0x6b1108*/
            sub_6ACC50(v28, v27, v38, v40); /*0x6b110c*/
            sub_6B7190(v19, 0); /*0x6b1115*/
            sub_6B73E0(v19); /*0x6b111c*/
            FormHeapFree((unsigned int)v19); /*0x6b1122*/
          }
          v29 = dword_B16244; /*0x6b112c*/
          unk_B3C0F4 = *(_DWORD *)LODWORD(v3); /*0x6b1132*/
          unk_B3C0F8 = *(_DWORD *)(LODWORD(v3) + 4); /*0x6b113b*/
          unk_B3C0FC = *(_DWORD *)(LODWORD(v3) + 8); /*0x6b114b*/
          v30 = 4 * v29; /*0x6b1150*/
          v31 = COERCE_FLOAT(NiTMapBase_GetFirstNode((unsigned int *)&self)); /*0x6b1152*/
          v32 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6b1157*/
          v33 = 0; /*0x6b115d*/
          arg0 = v31; /*0x6b1161*/
          if ( v31 != 0.0 ) /*0x6b1165*/
          {
            while ( 1 ) /*0x6b117b*/
            {
              ++v33; /*0x6b117b*/
              NiTMap_U32Pointer_GetNextEntry(&self, (MEF_U32PointerMapEntry32 **)&arg0, &keyOut, &valueOut); /*0x6b117e*/
              if ( v32 - (int)valueOut > v30 ) /*0x6b118b*/
              {
                NiTMap_RemoveAt(&self, keyOut); /*0x6b1197*/
                v34 = 0; /*0x6b11a2*/
                if ( self.bucketCount ) /*0x6b119c*/
                {
                  buckets = self.buckets; /*0x6b11a8*/
                  while ( !buckets[v34] ) /*0x6b11b4*/
                  {
                    if ( ++v34 >= self.bucketCount ) /*0x6b11bb*/
                      goto LABEL_57; /*0x6b11bb*/
                  }
                  v36 = *(float *)&buckets[v34]; /*0x6b11d4*/
                }
                else
                {
LABEL_57:
                  v36 = 0.0; /*0x6b11bd*/
                }
                arg0 = v36; /*0x6b11bf*/
              }
              if ( v33 > 0x100 ) /*0x6b11c9*/
                break; /*0x6b11c9*/
              if ( arg0 == 0.0 ) /*0x6b11d0*/
                return NiLeaveCriticalSection_0(&unk_B3C100); /*0x6b11d0*/
            }
            NiTMap_Clear(&self); /*0x6b11de*/
          }
        }
      }
      return NiLeaveCriticalSection_0(&unk_B3C100); /*0x6b11e3*/
    }
  }
  return result; /*0x6b11ed*/
}
