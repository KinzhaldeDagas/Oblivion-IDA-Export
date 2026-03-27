void __thiscall sub_54A8A0(float *this, int a2, float a3)
{
  unsigned int v4; // ebp
  bool v5; // zf
  int v7; // edx
  int v8; // eax
  unsigned int v9; // edi
  float *v10; // ecx
  char *v11; // eax
  double v12; // st7
  int v13; // [esp+18h] [ebp-3Ch]
  int v14; // [esp+1Ch] [ebp-38h]
  int v15; // [esp+20h] [ebp-34h]
  int v16; // [esp+24h] [ebp-30h]
  int v17; // [esp+28h] [ebp-2Ch]
  int v18; // [esp+2Ch] [ebp-28h]
  float v20[3]; // [esp+34h] [ebp-20h] BYREF
  int v21; // [esp+40h] [ebp-14h]
  unsigned int v22; // [esp+44h] [ebp-10h]
  unsigned int v23; // [esp+50h] [ebp-4h]
  float v24; // [esp+58h] [ebp+4h]
  float v25; // [esp+58h] [ebp+4h]
  float v26; // [esp+58h] [ebp+4h]
  float v27; // [esp+58h] [ebp+4h]
  float v28; // [esp+58h] [ebp+4h]
  float v29; // [esp+58h] [ebp+4h]
  float v30; // [esp+58h] [ebp+4h]
  float v31; // [esp+58h] [ebp+4h]
  float v32; // [esp+58h] [ebp+4h]
  unsigned int v33; // [esp+5Ch] [ebp+8h]

  sub_54EA00((int)v20, 2, 0x11u);
  v4 = 0;
  v5 = *((_BYTE *)this + 0x1DA) == 0;
  v23 = 0;
  if ( v5 )
  {
    if ( a2 )
    {
      if ( a3 >= 0.0 )
      {
        sub_54E580(v20, a3);
        v7 = v21;
        v14 = 4 - a2;
        v15 = 8 - a2;
        v16 = 0xC - a2;
        v17 = 0x10 - a2;
        v18 = 0x14 - a2;
        v8 = 0xFFFFFFF8 - a2;
        v9 = 2;
        v33 = 8;
        v10 = (float *)(a2 + 8);
        v13 = 0xFFFFFFF8 - a2;
        while ( 1 )
        {
          v24 = v10[0xFFFFFFFE];
          if ( v4 < v22 )
          {
            v11 = (char *)v10 + v8;
            if ( v24 != *(float *)&v11[v7] )
            {
              *(float *)&v11[v7] = v24;
              v7 = v21;
            }
          }
          v25 = v10[0xFFFFFFFF];
          if ( v9 - 1 < v22 && v25 != *(float *)((char *)v10 + v13 + v7 + 4) )
          {
            *(float *)((char *)v10 + v13 + v7 + 4) = v25;
            v7 = v21;
          }
          v26 = *v10;
          if ( v9 < v22 && v26 != *(float *)(v33 + v7) )
          {
            *(float *)(v33 + v7) = v26;
            v7 = v21;
          }
          v27 = v10[1];
          if ( v9 + 1 < v22 && v27 != *(float *)((char *)v10 + v14 + v7) )
          {
            *(float *)((char *)v10 + v14 + v7) = v27;
            v7 = v21;
          }
          v28 = v10[2];
          if ( v9 + 2 < v22 && v28 != *(float *)((char *)v10 + v15 + v7) )
          {
            *(float *)((char *)v10 + v15 + v7) = v28;
            v7 = v21;
          }
          v29 = v10[3];
          if ( v9 + 3 < v22 && v29 != *(float *)((char *)v10 + v16 + v7) )
          {
            *(float *)((char *)v10 + v16 + v7) = v29;
            v7 = v21;
          }
          v30 = v10[4];
          if ( v9 + 4 < v22 && v30 != *(float *)((char *)v10 + v17 + v7) )
          {
            *(float *)((char *)v10 + v17 + v7) = v30;
            v7 = v21;
          }
          v12 = v10[5];
          v31 = v10[5];
          if ( v9 + 5 < v22 )
          {
            v12 = v31;
            if ( v31 != *(float *)((char *)v10 + v18 + v7) )
            {
              *(float *)((char *)v10 + v18 + v7) = v31;
              v7 = v21;
            }
          }
          v4 += 8;
          v10 += 8;
          v9 += 8;
          v33 += 0x20;
          if ( v33 >= 0x30 )
            break;
          v8 = 0xFFFFFFF8 - a2;
        }
        for ( ; v4 < 0x11; ++v4 )
        {
          v12 = *(float *)(a2 + 4 * v4);
          v32 = *(float *)(a2 + 4 * v4);
          if ( v4 < v22 )
          {
            v12 = v32;
            if ( v32 != *(float *)(v7 + 4 * v4) )
            {
              *(float *)(v7 + 4 * v4) = v32;
              v7 = v21;
            }
          }
        }
        sub_54F350((int)v20, v12, this + 0x17);
      }
    }
  }
  v23 = 0xFFFFFFFF;
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v20);
}
