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

  *(_QWORD *)&v25 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(a2 + 0xC);
  DWORD2(v25) = *(_DWORD *)(a2 + 8);
  HIDWORD(v25) = v4;
  v15 = this;
  v5 = (float *)(this + 0xC);
  for ( i = 0; i < 3; *(float *)((char *)&v24 + i * 4) = v7 )
  {
    v17 = *v5 * *(float *)((char *)&v25 + i * 4);
    v18 = (int)v17 & 0xFFFFFFFE;
    v23[i++] = v18;
    v7 = (double)v18 / *v5++;
  }
  *a3 = v25;
  result = 0;
  v9 = this + 0x14;
  v19 = 0;
  v14 = this + 0x14;
  do
  {
    v20 = v23[result];
    v10 = 1;
    v16 = 1;
    if ( *v9 - 1 <= 1 )
      goto LABEL_19;
    do
    {
      v11 = (unsigned __int16 *)(v9[0xFFFFFFFF] + 4 * v10);
      v12 = *v11;
      if ( v12 > 1 && *v11 < 0xFFFCu )
      {
        v13 = v12 + v20;
        if ( (int)(v12 + v20) >= 0 )
        {
          if ( v13 < 0xFFFC )
          {
LABEL_16:
            *v11 = v13;
            v10 = v16;
            goto LABEL_17;
          }
          LOWORD(v13) = v12 & 1 | 0xFFFC;
          v22 = (_DWORD *)(0x10 * v11[1] + *(this + 0x10) + 0xC);
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
            sub_8A6EE0(a4, 4);
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = *v22;
        }
        else
        {
          LOWORD(v13) = v12 & 1;
          v21 = (_DWORD *)(0x10 * v11[1] + *(this + 0x10) + 0xC);
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
            sub_8A6EE0(a4, 4);
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = *v21;
        }
        this = v15;
        v9 = v14;
        a4[1] = (char *)a4[1] + 1;
        goto LABEL_16;
      }
LABEL_17:
      v16 = ++v10;
    }
    while ( v10 < *v9 - 1 );
    result = v19;
LABEL_19:
    ++result;
    v9 += 3;
    v19 = result;
    v14 = v9;
  }
  while ( result < 3 );
  return result;
}
