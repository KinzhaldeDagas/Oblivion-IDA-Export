void __thiscall sub_54A8A0(float *this, int a2, float a3)
{
  unsigned int v4; // ebp
  bool v5; // zf
  double v7; // st6
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edi
  float *v11; // ecx
  char *v12; // eax
  double v13; // st7
  int v14; // [esp+18h] [ebp-3Ch]
  int v15; // [esp+1Ch] [ebp-38h]
  int v16; // [esp+20h] [ebp-34h]
  int v17; // [esp+24h] [ebp-30h]
  int v18; // [esp+28h] [ebp-2Ch]
  int v19; // [esp+2Ch] [ebp-28h]
  float v21[3]; // [esp+34h] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-14h]
  unsigned int v23; // [esp+44h] [ebp-10h]
  unsigned int v24; // [esp+50h] [ebp-4h]
  float v25; // [esp+58h] [ebp+4h]
  float v26; // [esp+58h] [ebp+4h]
  float v27; // [esp+58h] [ebp+4h]
  float v28; // [esp+58h] [ebp+4h]
  float v29; // [esp+58h] [ebp+4h]
  float v30; // [esp+58h] [ebp+4h]
  float v31; // [esp+58h] [ebp+4h]
  float v32; // [esp+58h] [ebp+4h]
  float v33; // [esp+58h] [ebp+4h]
  unsigned int v34; // [esp+5Ch] [ebp+8h]

  sub_54EA00((int)v21, 2, 0x11u); /*0x54a8d5*/
  v4 = 0; /*0x54a8da*/
  v5 = *((_BYTE *)this + 0x1DA) == 0; /*0x54a8dc*/
  v24 = 0; /*0x54a8e3*/
  if ( v5 ) /*0x54a8e7*/
  {
    if ( a2 ) /*0x54a8f3*/
    {
      v7 = a3; /*0x54a8fb*/
      if ( a3 >= 0.0 ) /*0x54a908*/
      {
        sub_54E580(v21, a3); /*0x54a916*/
        v8 = v22; /*0x54a91b*/
        v15 = 4 - a2; /*0x54a926*/
        v16 = 8 - a2; /*0x54a931*/
        v17 = 0xC - a2; /*0x54a93c*/
        v18 = 0x10 - a2; /*0x54a947*/
        v19 = 0x14 - a2; /*0x54a952*/
        v9 = 0xFFFFFFF8 - a2; /*0x54a95b*/
        v10 = 2; /*0x54a95d*/
        v34 = 8; /*0x54a962*/
        v11 = (float *)(a2 + 8); /*0x54a96a*/
        v14 = 0xFFFFFFF8 - a2; /*0x54a96d*/
        while ( 1 ) /*0x54a97e*/
        {
          v25 = v11[0xFFFFFFFE]; /*0x54a97e*/
          if ( v4 < v23 ) /*0x54a982*/
          {
            v12 = (char *)v11 + v9; /*0x54a984*/
            v7 = v25; /*0x54a98c*/
            if ( v25 != *(float *)&v12[v8] ) /*0x54a99b*/
            {
              *(float *)&v12[v8] = v25; /*0x54a99d*/
              v8 = v22; /*0x54a99f*/
            }
          }
          v26 = v11[0xFFFFFFFF]; /*0x54a9b1*/
          if ( v10 - 1 < v23 ) /*0x54a9b5*/
          {
            v7 = v26; /*0x54a9c5*/
            if ( v26 != *(float *)((char *)v11 + v14 + v8 + 4) ) /*0x54a9d4*/
            {
              *(float *)((char *)v11 + v14 + v8 + 4) = v26; /*0x54a9d6*/
              v8 = v22; /*0x54a9d8*/
            }
          }
          v27 = *v11; /*0x54a9e6*/
          if ( v10 < v23 ) /*0x54a9ea*/
          {
            v7 = v27; /*0x54a9f3*/
            if ( v27 != *(float *)(v34 + v8) ) /*0x54aa02*/
            {
              *(float *)(v34 + v8) = v27; /*0x54aa04*/
              v8 = v22; /*0x54aa07*/
            }
          }
          v28 = v11[1]; /*0x54aa19*/
          if ( v10 + 1 < v23 ) /*0x54aa1d*/
          {
            v7 = v28; /*0x54aa2b*/
            if ( v28 != *(float *)((char *)v11 + v15 + v8) ) /*0x54aa3a*/
            {
              *(float *)((char *)v11 + v15 + v8) = v28; /*0x54aa3c*/
              v8 = v22; /*0x54aa3e*/
            }
          }
          v29 = v11[2]; /*0x54aa50*/
          if ( v10 + 2 < v23 ) /*0x54aa54*/
          {
            v7 = v29; /*0x54aa62*/
            if ( v29 != *(float *)((char *)v11 + v16 + v8) ) /*0x54aa71*/
            {
              *(float *)((char *)v11 + v16 + v8) = v29; /*0x54aa73*/
              v8 = v22; /*0x54aa75*/
            }
          }
          v30 = v11[3]; /*0x54aa87*/
          if ( v10 + 3 < v23 ) /*0x54aa8b*/
          {
            v7 = v30; /*0x54aa99*/
            if ( v30 != *(float *)((char *)v11 + v17 + v8) ) /*0x54aaa8*/
            {
              *(float *)((char *)v11 + v17 + v8) = v30; /*0x54aaaa*/
              v8 = v22; /*0x54aaac*/
            }
          }
          v31 = v11[4]; /*0x54aabe*/
          if ( v10 + 4 < v23 ) /*0x54aac2*/
          {
            v7 = v31; /*0x54aad0*/
            if ( v31 != *(float *)((char *)v11 + v18 + v8) ) /*0x54aadf*/
            {
              *(float *)((char *)v11 + v18 + v8) = v31; /*0x54aae1*/
              v8 = v22; /*0x54aae3*/
            }
          }
          v13 = v11[5]; /*0x54aaeb*/
          v32 = v11[5]; /*0x54aaf5*/
          if ( v10 + 5 < v23 ) /*0x54aaf9*/
          {
            v7 = v32; /*0x54ab07*/
            v13 = v32; /*0x54ab11*/
            if ( v32 != *(float *)((char *)v11 + v19 + v8) ) /*0x54ab16*/
            {
              *(float *)((char *)v11 + v19 + v8) = v32; /*0x54ab18*/
              v8 = v22; /*0x54ab1a*/
            }
          }
          v4 += 8; /*0x54ab29*/
          v11 += 8; /*0x54ab2c*/
          v10 += 8; /*0x54ab2f*/
          v34 += 0x20; /*0x54ab35*/
          if ( v34 >= 0x30 ) /*0x54ab39*/
            break; /*0x54ab39*/
          v9 = 0xFFFFFFF8 - a2; /*0x54a973*/
        }
        for ( ; v4 < 0x11; ++v4 ) /*0x54ab42*/
        {
          v13 = *(float *)(a2 + 4 * v4); /*0x54ab48*/
          v33 = *(float *)(a2 + 4 * v4); /*0x54ab4b*/
          if ( v4 < v23 ) /*0x54ab4f*/
          {
            v7 = v33; /*0x54ab54*/
            v13 = v33; /*0x54ab5e*/
            if ( v33 != *(float *)(v8 + 4 * v4) ) /*0x54ab63*/
            {
              *(float *)(v8 + 4 * v4) = v33; /*0x54ab65*/
              v8 = v22; /*0x54ab68*/
            }
          }
        }
        sub_54F350((int)v21, v13, v7, this + 0x17); /*0x54ab84*/
      }
    }
  }
  v24 = 0xFFFFFFFF; /*0x54ab91*/
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v21); /*0x54ab99*/
}
