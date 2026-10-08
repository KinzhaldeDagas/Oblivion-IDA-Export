void *__usercall sub_7441E0@<eax>(int *a1@<esi>)
{
  unsigned int v1; // ebp
  void *result; // eax
  int v3; // edi
  int v4; // edx
  int v5; // eax
  _WORD *v6; // ecx
  unsigned int v7; // eax
  __int16 v8; // ax
  unsigned int v9; // edx
  _WORD *v10; // ecx
  unsigned int v11; // eax
  int v12; // edi
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edi
  int v18; // ecx
  unsigned __int8 *v19; // edx
  int v20; // eax
  unsigned int v21; // [esp+Ch] [ebp-8h]
  void *v22; // [esp+10h] [ebp-4h]

  v1 = a1[9]; /*0x7441e5*/
  do /*0x7441f6*/
  {
    result = (void *)a1[0x19]; /*0x7441f6*/
    v3 = a1[0xD] - a1[0x1B] - (_DWORD)result; /*0x7441fc*/
    v21 = v3; /*0x744207*/
    if ( (unsigned int)result >= a1[9] + v1 - 0x106 ) /*0x74420b*/
    {
      memcpy((void *)a1[0xC], (const void *)(a1[0xC] + v1), v1); /*0x744216*/
      v4 = a1[0x11]; /*0x74421b*/
      v5 = a1[0xF]; /*0x74421e*/
      a1[0x1A] -= v1; /*0x744221*/
      a1[0x19] -= v1; /*0x744224*/
      a1[0x15] -= v1; /*0x74422a*/
      v6 = (_WORD *)(v5 + 2 * v4); /*0x74422d*/
      do /*0x744247*/
      {
        v7 = (unsigned __int16)v6[0xFFFFFFFF]; /*0x744230*/
        v6 += 0xFFFFFFFF; /*0x744234*/
        if ( v7 < v1 ) /*0x744239*/
          v8 = 0; /*0x74423f*/
        else
          v8 = v7 - v1; /*0x74423b*/
        --v4; /*0x744241*/
        *v6 = v8; /*0x744244*/
      }
      while ( v4 ); /*0x744247*/
      v9 = v1; /*0x74424c*/
      v10 = (_WORD *)(a1[0xE] + 2 * v1); /*0x74424e*/
      do /*0x744268*/
      {
        v11 = (unsigned __int16)v10[0xFFFFFFFF]; /*0x744251*/
        v10 += 0xFFFFFFFF; /*0x744255*/
        if ( v11 < v1 ) /*0x74425a*/
          result = 0; /*0x744260*/
        else
          result = (void *)(v11 - v1); /*0x74425c*/
        --v9; /*0x744262*/
        *v10 = (_WORD)result; /*0x744265*/
      }
      while ( v9 ); /*0x744268*/
      v21 = v1 + v3; /*0x74426c*/
    }
    v12 = *a1; /*0x744270*/
    if ( !*(_DWORD *)(*a1 + 4) ) /*0x744272*/
      break; /*0x744272*/
    result = (void *)(a1[0xC] + a1[0x19] + a1[0x1B]); /*0x744285*/
    v13 = *(_DWORD *)(v12 + 4); /*0x74428c*/
    v22 = result; /*0x744290*/
    if ( v13 > v21 ) /*0x744294*/
      v13 = v21; /*0x744296*/
    if ( !v13 ) /*0x74429a*/
      goto LABEL_24; /*0x74429a*/
    v14 = *(_DWORD *)(v12 + 0x1C); /*0x74429c*/
    *(_DWORD *)(v12 + 4) -= v13; /*0x7442a1*/
    v15 = *(_DWORD *)(v14 + 0x18); /*0x7442a4*/
    if ( v15 == 1 ) /*0x7442aa*/
    {
      v16 = sub_7459B0(*(_DWORD *)(v12 + 0x30), *(unsigned __int8 **)v12, v13); /*0x7442b4*/
LABEL_22:
      *(_DWORD *)(v12 + 0x30) = v16; /*0x7442cd*/
      result = v22; /*0x7442d0*/
      goto LABEL_23; /*0x7442d0*/
    }
    if ( v15 == 2 ) /*0x7442be*/
    {
      v16 = sub_745D90(*(_DWORD *)(v12 + 0x30), *(_DWORD *)v12, v13); /*0x7442c8*/
      goto LABEL_22; /*0x7442c8*/
    }
LABEL_23:
    result = memcpy(result, *(const void **)v12, v13); /*0x7442d7*/
    *(_DWORD *)v12 += v13; /*0x7442e1*/
    *(_DWORD *)(v12 + 8) += v13; /*0x7442e6*/
LABEL_24:
    a1[0x1B] += v13; /*0x7442e9*/
    v17 = a1[0x1B]; /*0x7442ec*/
    if ( v17 >= 3 ) /*0x7442f2*/
    {
      v18 = a1[0x14]; /*0x7442fa*/
      v19 = (unsigned __int8 *)(a1[0xC] + a1[0x19]); /*0x7442fd*/
      v20 = *v19; /*0x7442ff*/
      a1[0x10] = v20; /*0x744302*/
      result = (void *)(a1[0x13] & (v19[1] ^ (v20 << v18))); /*0x74430d*/
      a1[0x10] = (int)result; /*0x744310*/
    }
  }
  while ( v17 < 0x106 && *(_DWORD *)(*a1 + 4) ); /*0x7441f6*/
  return result; /*0x744327*/
}
