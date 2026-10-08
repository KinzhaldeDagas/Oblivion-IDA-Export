float *__thiscall sub_75A870(int this, signed __int16 a2)
{
  signed __int16 v3; // ax
  int v4; // ebp
  float *result; // eax
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  float *v12; // eax
  int v13; // ecx
  int v14; // ebp
  float z; // edx
  unsigned int v16; // [esp-4h] [ebp-10h]
  int v17; // [esp+10h] [ebp+4h]

  v16 = *(_DWORD *)(this + 0x1C); /*0x75a87c*/
  *(_WORD *)(this + 0x18) = a2; /*0x75a87d*/
  FormHeapFree(v16); /*0x75a881*/
  v3 = a2; /*0x75a88f*/
  if ( a2 <= 1 ) /*0x75a892*/
    v3 = 1; /*0x75a894*/
  v4 = v3; /*0x75a899*/
  *(_DWORD *)(this + 0x1C) = FormHeapAlloc((unsigned __int64)(unsigned int)v3 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v3);
  result = 0; /*0x75a8bc*/
  if ( v4 >= 4 ) /*0x75a8c1*/
  {
    v6 = 0; /*0x75a8cd*/
    v7 = ((unsigned int)(v4 - 4) >> 2) + 1; /*0x75a8cf*/
    v17 = 4 * v7; /*0x75a8d9*/
    do /*0x75a97e*/
    {
      v8 = *(_DWORD *)(this + 0x1C); /*0x75a8de*/
      *(float *)(v8 + v6) = g_zeroNiPoint3.x; /*0x75a8e7*/
      *(float *)(v8 + v6 + 4) = g_zeroNiPoint3.y; /*0x75a8f0*/
      *(float *)(v8 + v6 + 8) = g_zeroNiPoint3.z; /*0x75a8fa*/
      *(float *)(v8 + v6 + 0xC) = 0.0; /*0x75a8fe*/
      v9 = *(_DWORD *)(this + 0x1C); /*0x75a90a*/
      *(float *)(v9 + v6 + 0x10) = g_zeroNiPoint3.x; /*0x75a90d*/
      *(float *)(v9 + v6 + 0x14) = g_zeroNiPoint3.y; /*0x75a917*/
      *(float *)(v9 + v6 + 0x18) = g_zeroNiPoint3.z; /*0x75a921*/
      *(float *)(v9 + v6 + 0x1C) = 0.0; /*0x75a925*/
      v10 = *(_DWORD *)(this + 0x1C); /*0x75a933*/
      *(float *)(v10 + v6 + 0x30 - 0x10) = g_zeroNiPoint3.x; /*0x75a939*/
      v11 = (float *)(v10 + v6 + 0x30 - 0x10); /*0x75a943*/
      v11[1] = g_zeroNiPoint3.y; /*0x75a947*/
      v11[2] = g_zeroNiPoint3.z; /*0x75a950*/
      v11[3] = 0.0; /*0x75a953*/
      v12 = (float *)(v6 + 0x30 + *(_DWORD *)(this + 0x1C)); /*0x75a959*/
      *v12 = g_zeroNiPoint3.x; /*0x75a961*/
      v12[1] = g_zeroNiPoint3.y; /*0x75a969*/
      v6 += 0x40; /*0x75a972*/
      --v7; /*0x75a975*/
      v12[2] = g_zeroNiPoint3.z; /*0x75a978*/
      v12[3] = 0.0; /*0x75a97b*/
    }
    while ( v7 ); /*0x75a97e*/
    result = (float *)v17; /*0x75a984*/
  }
  if ( (int)result < v4 ) /*0x75a98b*/
  {
    v13 = 0x10 * (_DWORD)result; /*0x75a98f*/
    v14 = v4 - (_DWORD)result; /*0x75a992*/
    do /*0x75a9bc*/
    {
      result = (float *)(v13 + *(_DWORD *)(this + 0x1C)); /*0x75a99d*/
      *result = g_zeroNiPoint3.x; /*0x75a99f*/
      result[1] = g_zeroNiPoint3.y; /*0x75a9a7*/
      z = g_zeroNiPoint3.z; /*0x75a9aa*/
      result[3] = 0.0; /*0x75a9b0*/
      v13 += 0x10; /*0x75a9b3*/
      --v14; /*0x75a9b6*/
      result[2] = z; /*0x75a9b9*/
    }
    while ( v14 ); /*0x75a9bc*/
  }
  return result; /*0x75a9c1*/
}
