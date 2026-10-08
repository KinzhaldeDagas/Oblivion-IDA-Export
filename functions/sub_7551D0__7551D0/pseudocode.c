void __thiscall sub_7551D0(int this, float a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  float *v6; // edi
  double v7; // st7
  float *v8; // eax
  long double v9; // st3
  float v10; // [esp+18h] [ebp-120h]
  float v11; // [esp+18h] [ebp-120h]
  float v12; // [esp+18h] [ebp-120h]
  float v13; // [esp+18h] [ebp-120h]
  float v14; // [esp+18h] [ebp-120h]
  float v15; // [esp+18h] [ebp-120h]
  float v16; // [esp+1Ch] [ebp-11Ch]
  float v17; // [esp+20h] [ebp-118h]
  float v18; // [esp+24h] [ebp-114h]
  int v19; // [esp+28h] [ebp-110h]
  float v20; // [esp+2Ch] [ebp-10Ch]
  float v21; // [esp+30h] [ebp-108h]
  float v22; // [esp+34h] [ebp-104h]
  float v23; // [esp+44h] [ebp-F4h]
  float v24; // [esp+48h] [ebp-F0h]
  float v25; // [esp+4Ch] [ebp-ECh]
  float v26; // [esp+50h] [ebp-E8h]
  float v27; // [esp+54h] [ebp-E4h]
  float v28; // [esp+58h] [ebp-E0h]
  float i; // [esp+5Ch] [ebp-DCh]
  double v30; // [esp+60h] [ebp-D8h]
  NiTransform out; // [esp+68h] [ebp-D0h] BYREF
  NiTransform local; // [esp+9Ch] [ebp-9Ch] BYREF
  float v33[13]; // [esp+D0h] [ebp-68h] BYREF
  NiTransform parent; // [esp+104h] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) ) /*0x7551eb*/
  {
    if ( *(_WORD *)(a3 + 0x48) ) /*0x7551f4*/
    {
      v4 = *(_DWORD *)(this + 0x18); /*0x7551ff*/
      if ( v4 ) /*0x755204*/
      {
        if ( !*(_BYTE *)(this + 0x24) && (0.0 == *(float *)(this + 0x20) || 0.0 == *(float *)(this + 0x30)) ) /*0x755222*/
        {
          sub_755030((float *)this, a2, a3); /*0x75522e*/
        }
        else
        {
          qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x755267*/
          qmemcpy(v33, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v33)); /*0x755282*/
          sub_718A80(v33, &parent); /*0x75528c*/
          NiTransform_Compose(&parent, &out, &local); /*0x7552a5*/
          v5 = 0; /*0x7552b6*/
          v19 = 0; /*0x7552bc*/
          for ( i = *(float *)(this + 0x20) * dbl_A2FAA0; (unsigned __int16)v5 < *(_WORD *)(a3 + 0x48); v19 = v5 ) /*0x7552b8*/
          {
            v6 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v5); /*0x7552e2*/
            v10 = a2 - v6[5]; /*0x7552e8*/
            v7 = v10; /*0x7552f6*/
            if ( v10 != 0.0 ) /*0x7552fb*/
            {
              v8 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * (unsigned __int16)v5); /*0x75530b*/
              v16 = *v8 - out.pos.x; /*0x755329*/
              v17 = v8[1] - out.pos.y; /*0x75533c*/
              v18 = v8[2] - out.pos.z; /*0x75534b*/
              v11 = v18 * v18 + v17 * v17 + v16 * v16; /*0x755375*/
              v9 = v11; /*0x755379*/
              if ( !*(_BYTE *)(this + 0x24) || *(float *)(this + 0x2C) >= v9 ) /*0x755389*/
              {
                if ( 0.0 == *(float *)(this + 0x20) || 0.0 == v9 ) /*0x7553a6*/
                {
                  v15 = v7 * *(float *)(this + 0x1C); /*0x75543e*/
                  v23 = v16 * v15; /*0x75544c*/
                  v20 = v23; /*0x755456*/
                  v24 = v17 * v15; /*0x75545e*/
                  v21 = v24; /*0x755466*/
                  v25 = v15 * v18; /*0x75546c*/
                  v22 = v25; /*0x755474*/
                }
                else
                {
                  v30 = v7 * *(float *)(this + 0x1C); /*0x7553b9*/
                  v12 = pow(v9, i); /*0x7553c6*/
                  v13 = v12 * *(float *)(this + 0x30); /*0x7553d4*/
                  v14 = v30 / Min_Float(1.0, v13); /*0x7553f1*/
                  v26 = v14 * v16; /*0x7553ff*/
                  v20 = v26; /*0x75540b*/
                  v27 = v17 * v14; /*0x755411*/
                  v21 = v27; /*0x755419*/
                  v5 = v19; /*0x755421*/
                  v28 = v14 * v18; /*0x755425*/
                  v22 = v28; /*0x75542d*/
                }
                *v6 = *v6 + v20; /*0x75547e*/
                v6[1] = v6[1] + v21; /*0x755487*/
                v6[2] = v22 + v6[2]; /*0x755491*/
              }
            }
            ++v5; /*0x7554a0*/
          }
        }
      }
    }
  }
}
