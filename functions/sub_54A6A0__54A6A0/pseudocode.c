void __thiscall sub_54A6A0(float *this, int a2, float a3)
{
  bool v4; // zf
  double v5; // st7
  double v6; // st5
  int v7; // ecx
  double v8; // rt0
  double v9; // st5
  double v10; // st7
  double v11; // rt1
  int v12; // edi
  unsigned int v13; // edx
  int v14; // ebp
  float *v15; // ecx
  int v16; // ebx
  double v17; // st7
  float v19[3]; // [esp+1Ch] [ebp-20h] BYREF
  int v20; // [esp+28h] [ebp-14h]
  unsigned int v21; // [esp+2Ch] [ebp-10h]
  unsigned int v22; // [esp+38h] [ebp-4h]
  float v23; // [esp+40h] [ebp+4h]
  float v24; // [esp+40h] [ebp+4h]
  float v25; // [esp+40h] [ebp+4h]
  float v26; // [esp+40h] [ebp+4h]
  int v27; // [esp+44h] [ebp+8h]

  sub_54EA00((int)v19, 0, 0x10u);
  v4 = *((_BYTE *)this + 0x1DA) == 0;
  v22 = 0;
  if ( v4 )
  {
    if ( a2 )
    {
      v5 = 0.0;
      if ( a3 >= 0.0 )
      {
        v6 = 1.0;
        v7 = 0;
        while ( 1 )
        {
          v8 = v6;
          v9 = v5;
          v10 = v8;
          if ( v9 > *(float *)(a2 + 4 * v7) )
            break;
          v11 = v9;
          v6 = v10;
          v5 = v11;
          if ( v6 < *(float *)(a2 + 4 * v7) )
            break;
          if ( (unsigned int)++v7 >= 0x10 )
          {
            sub_54E580(v19, a3);
            v12 = v20;
            v13 = 2;
            v14 = 8;
            v15 = (float *)(a2 + 8);
            v27 = 4 - a2;
            v16 = 0xFFFFFFF8 - a2;
            do
            {
              v23 = v15[0xFFFFFFFE];
              if ( v13 - 2 < v21 && v23 != *(float *)((char *)v15 + v16 + v12) )
              {
                *(float *)((char *)v15 + v16 + v12) = v23;
                v12 = v20;
              }
              v24 = v15[0xFFFFFFFF];
              if ( v13 - 1 < v21 && v24 != *(float *)((char *)v15 + v16 + v12 + 4) )
              {
                *(float *)((char *)v15 + v16 + v12 + 4) = v24;
                v12 = v20;
              }
              v25 = *v15;
              if ( v13 < v21 && v25 != *(float *)(v12 + v14) )
              {
                *(float *)(v12 + v14) = v25;
                v12 = v20;
              }
              v17 = v15[1];
              v26 = v15[1];
              if ( v13 + 1 < v21 )
              {
                v17 = v26;
                if ( v26 != *(float *)((char *)v15 + v27 + v12) )
                {
                  *(float *)((char *)v15 + v27 + v12) = v26;
                  v12 = v20;
                }
              }
              v13 += 4;
              v14 += 0x10;
              v15 += 4;
            }
            while ( v13 - 2 < 0x10 );
            sub_54F350((int)v19, v17, this + 0x2E);
            break;
          }
        }
      }
    }
  }
  v22 = 0xFFFFFFFF;
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v19);
}
