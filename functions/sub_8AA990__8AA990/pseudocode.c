char __thiscall sub_8AA990(float **this, float a2, float *a3, float *a4)
{
  int v5; // eax
  float *v7; // edx
  unsigned int v8; // ebp
  double v9; // st7
  unsigned int v10; // ecx
  float *v11; // edx
  double v12; // st6
  int v13; // edi
  int v14; // edi
  float *v15; // edx
  int v16; // edx
  double v17; // st5
  double v18; // st6
  int v19; // eax
  int v20; // edi
  float v21; // [esp+1Ch] [ebp-Ch]
  float v22; // [esp+1Ch] [ebp-Ch]
  float v23; // [esp+20h] [ebp-8h]
  float v24; // [esp+2Ch] [ebp+4h]
  float v25; // [esp+2Ch] [ebp+4h]
  float v26; // [esp+2Ch] [ebp+4h]
  float v27; // [esp+2Ch] [ebp+4h]
  float v28; // [esp+2Ch] [ebp+4h]

  v5 = (int)*(this + 0x14);
  if ( !v5 )
    return 0;
  if ( v5 == 1 )
  {
    *a3 = (*(this + 0x11))[1];
    *a4 = (*(this + 0x11))[2];
    return 1;
  }
  else
  {
    v7 = *(this + 0x11);
    v8 = v5 - 1;
    v21 = v7[3 * (_DWORD)*(this + 0xF)];
    v9 = a2;
    if ( v21 > (double)a2 )
    {
      *(this + 0xF) = 0;
      v21 = *v7;
    }
    v10 = (unsigned int)*(this + 0xF) + 1;
    if ( (int)(v8 - (_DWORD)*(this + 0xF)) < 4 )
    {
      v12 = v21;
LABEL_15:
      if ( v10 <= v8 )
      {
        v15 = &(*(this + 0x11))[3 * v10];
        do
        {
          v12 = *v15;
          if ( v12 >= v9 )
            break;
          *(this + 0xF) = (float *)((char *)*(this + 0xF) + 1);
          v21 = v12;
          ++v10;
          v15 += 3;
        }
        while ( v10 <= v8 );
      }
    }
    else
    {
      v11 = &v7[3 * v10 + 6];
      while ( 1 )
      {
        v12 = v11[0xFFFFFFFA];
        if ( v12 >= v9 )
          break;
        *(this + 0xF) = (float *)((char *)*(this + 0xF) + 1);
        v21 = v12;
        v24 = v11[0xFFFFFFFD];
        v12 = v24;
        if ( v24 >= v9 )
        {
          ++v10;
          break;
        }
        v13 = (int)*(this + 0xF) + 1;
        v21 = v24;
        *(this + 0xF) = (float *)v13;
        v25 = *v11;
        v12 = v25;
        if ( v25 >= v9 )
        {
          v10 += 2;
          break;
        }
        v14 = v13 + 1;
        v21 = v25;
        *(this + 0xF) = (float *)v14;
        v26 = v11[3];
        v12 = v26;
        if ( v26 >= v9 )
        {
          v10 += 3;
          break;
        }
        v21 = v26;
        v10 += 4;
        v11 += 0xC;
        *(this + 0xF) = (float *)(v14 + 1);
        if ( v10 > v5 - 4 )
          goto LABEL_15;
      }
    }
    v16 = (int)*(this + 0x11);
    v17 = v12 - v21;
    v18 = v21;
    v19 = v16 + 0xC * (_DWORD)*(this + 0xF);
    v27 = v17;
    v22 = *(float *)(v19 + 4);
    v23 = *(float *)(v19 + 8);
    if ( v27 == 0.0 )
    {
      *a3 = v22;
      *a4 = v23;
    }
    else
    {
      v20 = 3 * v10;
      v28 = (v9 - v18) / v27;
      *a3 = sub_6D3690(v28, v22, *(float *)(0xC * v10 + v16 + 4));
      *a4 = sub_6D3690(v28, v23, (*(this + 0x11))[v20 + 2]);
    }
    return 1;
  }
}
