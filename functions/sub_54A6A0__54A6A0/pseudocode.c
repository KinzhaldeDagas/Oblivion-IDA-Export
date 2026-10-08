void __thiscall sub_54A6A0(float *this, int a2, float a3)
{
  bool v4; // zf
  double v5; // st7
  double v6; // st6
  double v7; // st5
  int v8; // ecx
  double v9; // rt0
  double v10; // st5
  double v11; // st7
  double v12; // rt1
  int v13; // edi
  unsigned int v14; // edx
  int v15; // ebp
  float *v16; // ecx
  int v17; // ebx
  double v18; // st7
  float v20[3]; // [esp+1Ch] [ebp-20h] BYREF
  int v21; // [esp+28h] [ebp-14h]
  unsigned int v22; // [esp+2Ch] [ebp-10h]
  unsigned int v23; // [esp+38h] [ebp-4h]
  float v24; // [esp+40h] [ebp+4h]
  float v25; // [esp+40h] [ebp+4h]
  float v26; // [esp+40h] [ebp+4h]
  float v27; // [esp+40h] [ebp+4h]
  int v28; // [esp+44h] [ebp+8h]

  sub_54EA00((int)v20, 0, 0x10u); /*0x54a6d5*/
  v4 = *((_BYTE *)this + 0x1DA) == 0; /*0x54a6da*/
  v23 = 0; /*0x54a6e1*/
  if ( v4 ) /*0x54a6e9*/
  {
    if ( a2 ) /*0x54a6f5*/
    {
      v5 = 0.0; /*0x54a6fb*/
      v6 = a3; /*0x54a6fd*/
      if ( a3 >= 0.0 ) /*0x54a708*/
      {
        v7 = 1.0; /*0x54a70e*/
        v8 = 0; /*0x54a710*/
        while ( 1 ) /*0x54a712*/
        {
          v9 = v7; /*0x54a712*/
          v10 = v5; /*0x54a712*/
          v11 = v9; /*0x54a712*/
          if ( v10 > *(float *)(a2 + 4 * v8) ) /*0x54a71c*/
            break; /*0x54a71c*/
          v12 = v10; /*0x54a722*/
          v7 = v11; /*0x54a722*/
          v5 = v12; /*0x54a722*/
          if ( v7 < *(float *)(a2 + 4 * v8) ) /*0x54a72c*/
            break; /*0x54a72c*/
          if ( (unsigned int)++v8 >= 0x10 ) /*0x54a738*/
          {
            sub_54E580(v20, a3); /*0x54a746*/
            v13 = v21; /*0x54a74b*/
            v14 = 2; /*0x54a75b*/
            v15 = 8; /*0x54a760*/
            v16 = (float *)(a2 + 8); /*0x54a765*/
            v28 = 4 - a2; /*0x54a768*/
            v17 = 0xFFFFFFF8 - a2; /*0x54a76c*/
            do /*0x54a87c*/
            {
              v24 = v16[0xFFFFFFFE]; /*0x54a77a*/
              if ( v14 - 2 < v22 ) /*0x54a77e*/
              {
                v6 = v24; /*0x54a789*/
                v7 = v24; /*0x54a78d*/
                if ( v24 != *(float *)((char *)v16 + v17 + v13) ) /*0x54a798*/
                {
                  *(float *)((char *)v16 + v17 + v13) = v24; /*0x54a79a*/
                  v13 = v21; /*0x54a79c*/
                }
              }
              v25 = v16[0xFFFFFFFF]; /*0x54a7df*/
              if ( v14 - 1 < v22 ) /*0x54a7e3*/
              {
                v6 = v25; /*0x54a7f0*/
                v7 = v25; /*0x54a7f4*/
                if ( v25 != *(float *)((char *)v16 + v17 + v13 + 4) ) /*0x54a7ff*/
                {
                  *(float *)((char *)v16 + v17 + v13 + 4) = v25; /*0x54a801*/
                  v13 = v21; /*0x54a803*/
                }
              }
              v26 = *v16; /*0x54a811*/
              if ( v14 < v22 ) /*0x54a815*/
              {
                v6 = v26; /*0x54a81a*/
                v7 = v26; /*0x54a81e*/
                if ( v26 != *(float *)(v13 + v15) ) /*0x54a829*/
                {
                  *(float *)(v13 + v15) = v26; /*0x54a82b*/
                  v13 = v21; /*0x54a82e*/
                }
              }
              v18 = v16[1]; /*0x54a836*/
              v27 = v16[1]; /*0x54a840*/
              if ( v14 + 1 < v22 ) /*0x54a844*/
              {
                v6 = v27; /*0x54a852*/
                v7 = v27; /*0x54a856*/
                v18 = v27; /*0x54a85c*/
                if ( v27 != *(float *)((char *)v16 + v28 + v13) ) /*0x54a861*/
                {
                  *(float *)((char *)v16 + v28 + v13) = v27; /*0x54a863*/
                  v13 = v21; /*0x54a865*/
                }
              }
              v14 += 4; /*0x54a86d*/
              v15 += 0x10; /*0x54a873*/
              v16 += 4; /*0x54a876*/
            }
            while ( v14 - 2 < 0x10 ); /*0x54a87c*/
            sub_54F350((int)v20, v18, v6, v7, this + 0x2E); /*0x54a891*/
            break; /*0x54a896*/
          }
        }
      }
    }
  }
  v23 = 0xFFFFFFFF; /*0x54a7a8*/
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v20); /*0x54a7b4*/
}
