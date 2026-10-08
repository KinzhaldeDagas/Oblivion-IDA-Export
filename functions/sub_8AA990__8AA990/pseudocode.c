char __thiscall sub_8AA990(float **this, float a2, float *a3, float *a4)
{
  int v5; // eax
  float *v7; // edx
  unsigned int v8; // ebp
  double v9; // st7
  unsigned int v10; // ecx
  float *v11; // edx
  double v12; // st6
  float *v13; // edi
  float *v14; // edi
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

  v5 = (int)*(this + 0x14); /*0x8aa996*/
  if ( !v5 ) /*0x8aa99b*/
    return 0; /*0x8aabd2*/
  if ( v5 == 1 ) /*0x8aa9a9*/
  {
    *a3 = (*(this + 0x11))[1]; /*0x8aa9b9*/
    *a4 = (*(this + 0x11))[2]; /*0x8aa9c1*/
    return 1; /*0x8aa9c3*/
  }
  else
  {
    v7 = *(this + 0x11); /*0x8aa9cd*/
    v8 = v5 - 1; /*0x8aa9d1*/
    v21 = v7[3 * (_DWORD)*(this + 0xF)]; /*0x8aa9de*/
    v9 = a2; /*0x8aa9e2*/
    if ( v21 > (double)a2 ) /*0x8aa9f1*/
    {
      *(this + 0xF) = 0; /*0x8aa9f3*/
      v21 = *v7; /*0x8aa9fc*/
    }
    v10 = (unsigned int)*(this + 0xF) + 1; /*0x8aaa07*/
    if ( (int)(v8 - (_DWORD)*(this + 0xF)) < 4 ) /*0x8aaa17*/
    {
      v12 = v21; /*0x8aaab7*/
LABEL_15:
      if ( v10 <= v8 ) /*0x8aaabd*/
      {
        v15 = &(*(this + 0x11))[3 * v10]; /*0x8aaac5*/
        do /*0x8aaaeb*/
        {
          v12 = *v15; /*0x8aaad0*/
          if ( v12 >= v9 ) /*0x8aaadb*/
            break; /*0x8aaadb*/
          *(this + 0xF) = (float *)((char *)*(this + 0xF) + 1); /*0x8aaadd*/
          v21 = v12; /*0x8aaae0*/
          ++v10; /*0x8aaae4*/
          v15 += 3; /*0x8aaae6*/
        }
        while ( v10 <= v8 ); /*0x8aaaeb*/
      }
    }
    else
    {
      v11 = &v7[3 * v10 + 6]; /*0x8aaa21*/
      while ( 1 ) /*0x8aaa2f*/
      {
        v12 = v11[0xFFFFFFFA]; /*0x8aaa2f*/
        if ( v12 >= v9 ) /*0x8aaa3a*/
          break; /*0x8aaa3a*/
        *(this + 0xF) = (float *)((char *)*(this + 0xF) + 1); /*0x8aaa40*/
        v21 = v12; /*0x8aaa43*/
        v24 = v11[0xFFFFFFFD]; /*0x8aaa4d*/
        v12 = v24; /*0x8aaa51*/
        if ( v24 >= v9 ) /*0x8aaa5c*/
        {
          ++v10; /*0x8aaaef*/
          break; /*0x8aaaf1*/
        }
        v13 = (float *)((char *)*(this + 0xF) + 1); /*0x8aaa62*/
        v21 = v24; /*0x8aaa64*/
        *(this + 0xF) = v13; /*0x8aaa68*/
        v25 = *v11; /*0x8aaa6d*/
        v12 = v25; /*0x8aaa71*/
        if ( v25 >= v9 ) /*0x8aaa7c*/
        {
          v10 += 2; /*0x8aaaf3*/
          break; /*0x8aaaf6*/
        }
        v14 = (float *)((char *)v13 + 1); /*0x8aaa7e*/
        v21 = v25; /*0x8aaa80*/
        *(this + 0xF) = v14; /*0x8aaa84*/
        v26 = v11[3]; /*0x8aaa8a*/
        v12 = v26; /*0x8aaa8e*/
        if ( v26 >= v9 ) /*0x8aaa99*/
        {
          v10 += 3; /*0x8aaaf8*/
          break; /*0x8aaaf8*/
        }
        v21 = v26; /*0x8aaa9d*/
        v10 += 4; /*0x8aaaa1*/
        v11 += 0xC; /*0x8aaaa7*/
        *(this + 0xF) = (float *)((char *)v14 + 1); /*0x8aaaac*/
        if ( v10 > v5 - 4 ) /*0x8aaaaf*/
          goto LABEL_15; /*0x8aaaaf*/
      }
    }
    v16 = (int)*(this + 0x11); /*0x8aaafb*/
    v17 = v12 - v21; /*0x8aab0a*/
    v18 = v21; /*0x8aab0a*/
    v19 = v16 + 0xC * (_DWORD)*(this + 0xF); /*0x8aab0c*/
    v27 = v17; /*0x8aab0f*/
    v22 = *(float *)(v19 + 4); /*0x8aab16*/
    v23 = *(float *)(v19 + 8); /*0x8aab1d*/
    if ( v27 == 0.0 ) /*0x8aab30*/
    {
      *a3 = v22; /*0x8aabc0*/
      *a4 = v23; /*0x8aabc9*/
    }
    else
    {
      v20 = 3 * v10; /*0x8aab3b*/
      v28 = (v9 - v18) / v27; /*0x8aab42*/
      *a3 = sub_6D3690(v28, v22, *(float *)(0xC * v10 + v16 + 4)); /*0x8aab6e*/
      *a4 = sub_6D3690(v28, v23, (*(this + 0x11))[v20 + 2]); /*0x8aab9e*/
    }
    return 1; /*0x8aaba2*/
  }
}
