signed int __thiscall sub_8E3A90(_DWORD *this, int a2, _OWORD *a3, const void **a4)
{
  int v4; // eax
  float *v5; // edx
  int i; // eax
  double v7; // st7
  signed int result; // eax
  _DWORD *v9; // edx
  int v10; // edi
  unsigned __int16 *v11; // ebx
  unsigned int v12; // eax
  int v13; // edi
  _DWORD *v14; // [esp+Ch] [ebp-34h]
  _DWORD *v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  float v17; // [esp+18h] [ebp-28h]
  signed int v18; // [esp+18h] [ebp-28h]
  signed int v19; // [esp+18h] [ebp-28h]
  int v20; // [esp+1Ch] [ebp-24h]
  _DWORD *v21; // [esp+20h] [ebp-20h]
  _DWORD *v22; // [esp+20h] [ebp-20h]
  int v23[2]; // [esp+24h] [ebp-1Ch]
  float v24; // [esp+2Ch] [ebp-14h]
  __int128 v25; // [esp+30h] [ebp-10h]

  *(_QWORD *)&v25 = *(_QWORD *)a2; /*0x8e3a9e*/
  v4 = *(_DWORD *)(a2 + 0xC); /*0x8e3aac*/
  DWORD2(v25) = *(_DWORD *)(a2 + 8); /*0x8e3ab1*/
  HIDWORD(v25) = v4; /*0x8e3ab5*/
  v15 = this; /*0x8e3aba*/
  v5 = (float *)(this + 0xC); /*0x8e3abe*/
  for ( i = 0; i < 3; *(float *)((char *)&v24 + i * 4) = v7 ) /*0x8e3ac1*/
  {
    v17 = *v5 * *(float *)((char *)&v25 + i * 4); /*0x8e3ac9*/
    v18 = (int)v17 & 0xFFFFFFFE; /*0x8e3adc*/
    v23[i++] = v18; /*0x8e3ae4*/
    v7 = (double)v18 / *v5++; /*0x8e3aeb*/
  }
  *a3 = v25; /*0x8e3b04*/
  result = 0; /*0x8e3b07*/
  v9 = this + 0x14; /*0x8e3b09*/
  v19 = 0; /*0x8e3b0c*/
  v14 = this + 0x14; /*0x8e3b10*/
  do /*0x8e3c1c*/
  {
    v20 = v23[result]; /*0x8e3b1a*/
    v10 = 1; /*0x8e3b1e*/
    v16 = 1; /*0x8e3b26*/
    if ( *v9 - 1 <= 1 ) /*0x8e3b2a*/
      goto LABEL_19; /*0x8e3b2a*/
    do /*0x8e3c03*/
    {
      v11 = (unsigned __int16 *)(v9[0xFFFFFFFF] + 4 * v10); /*0x8e3b33*/
      v12 = *v11; /*0x8e3b36*/
      if ( v12 > 1 && *v11 < 0xFFFCu ) /*0x8e3b47*/
      {
        v13 = v12 + v20; /*0x8e3b51*/
        if ( (int)(v12 + v20) >= 0 ) /*0x8e3b53*/
        {
          if ( v13 < 0xFFFC ) /*0x8e3b9d*/
          {
LABEL_16:
            *v11 = v13; /*0x8e3bf2*/
            v10 = v16; /*0x8e3bf5*/
            goto LABEL_17; /*0x8e3bf5*/
          }
          LOWORD(v13) = v12 & 1 | 0xFFFC; /*0x8e3baa*/
          v22 = (_DWORD *)(0x10 * v11[1] + *(this + 0x10) + 0xC); /*0x8e3bc4*/
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x8e3bc8*/
            sub_8A6EE0(a4, 4); /*0x8e3bcd*/
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = *v22; /*0x8e3be0*/
        }
        else
        {
          LOWORD(v13) = v12 & 1; /*0x8e3b5f*/
          v21 = (_DWORD *)(0x10 * v11[1] + *(this + 0x10) + 0xC); /*0x8e3b76*/
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x8e3b7a*/
            sub_8A6EE0(a4, 4); /*0x8e3b7f*/
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = *v21; /*0x8e3b92*/
        }
        this = v15; /*0x8e3be6*/
        v9 = v14; /*0x8e3bea*/
        a4[1] = (char *)a4[1] + 1; /*0x8e3bef*/
        goto LABEL_16; /*0x8e3bef*/
      }
LABEL_17:
      v16 = ++v10; /*0x8e3bff*/
    }
    while ( v10 < *v9 - 1 ); /*0x8e3c03*/
    result = v19; /*0x8e3c09*/
LABEL_19:
    ++result; /*0x8e3c0d*/
    v9 += 3; /*0x8e3c0e*/
    v19 = result; /*0x8e3c14*/
    v14 = v9; /*0x8e3c18*/
  }
  while ( result < 3 ); /*0x8e3c1c*/
  return result; /*0x8e3c22*/
}
