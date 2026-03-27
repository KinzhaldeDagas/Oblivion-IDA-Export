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
  int v16; // eax
  unsigned int v17; // edi
  int v18; // ecx
  unsigned __int8 *v19; // edx
  int v20; // eax
  size_t v21; // [esp-4h] [ebp-18h]
  unsigned int v22; // [esp+Ch] [ebp-8h]
  void *v23; // [esp+10h] [ebp-4h]

  v1 = a1[9];
  do
  {
    result = (void *)a1[0x19];
    v3 = a1[0xD] - a1[0x1B] - (_DWORD)result;
    v22 = v3;
    if ( (unsigned int)result >= a1[9] + v1 - 0x106 )
    {
      LODWORD(v21) = v1;
      memcpy((void *)a1[0xC], (const void *)(a1[0xC] + v1), v21);
      v4 = a1[0x11];
      v5 = a1[0xF];
      a1[0x1A] -= v1;
      a1[0x19] -= v1;
      a1[0x15] -= v1;
      v6 = (_WORD *)(v5 + 2 * v4);
      do
      {
        v7 = (unsigned __int16)v6[0xFFFFFFFF];
        v6 += 0xFFFFFFFF;
        if ( v7 < v1 )
          v8 = 0;
        else
          v8 = v7 - v1;
        --v4;
        *v6 = v8;
      }
      while ( v4 );
      v9 = v1;
      v10 = (_WORD *)(a1[0xE] + 2 * v1);
      do
      {
        v11 = (unsigned __int16)v10[0xFFFFFFFF];
        v10 += 0xFFFFFFFF;
        if ( v11 < v1 )
          result = 0;
        else
          result = (void *)(v11 - v1);
        --v9;
        *v10 = (_WORD)result;
      }
      while ( v9 );
      v22 = v1 + v3;
    }
    v12 = *a1;
    if ( !*(_DWORD *)(*a1 + 4) )
      break;
    result = (void *)(a1[0xC] + a1[0x19] + a1[0x1B]);
    v13 = *(_DWORD *)(v12 + 4);
    v23 = result;
    if ( v13 > v22 )
      v13 = v22;
    if ( !v13 )
      goto LABEL_24;
    v14 = *(_DWORD *)(v12 + 0x1C);
    *(_DWORD *)(v12 + 4) -= v13;
    v15 = *(_DWORD *)(v14 + 0x18);
    if ( v15 == 1 )
    {
      v16 = sub_7459B0(*(_DWORD *)(v12 + 0x30), *(unsigned __int8 **)v12, v13);
LABEL_22:
      *(_DWORD *)(v12 + 0x30) = v16;
      result = v23;
      goto LABEL_23;
    }
    if ( v15 == 2 )
    {
      v16 = sub_745D90(*(_DWORD *)(v12 + 0x30), *(_DWORD *)v12, v13);
      goto LABEL_22;
    }
LABEL_23:
    LODWORD(v21) = v13;
    result = memcpy(result, *(const void **)v12, v21);
    *(_DWORD *)v12 += v13;
    *(_DWORD *)(v12 + 8) += v13;
LABEL_24:
    a1[0x1B] += v13;
    v17 = a1[0x1B];
    if ( v17 >= 3 )
    {
      v18 = a1[0x14];
      v19 = (unsigned __int8 *)(a1[0xC] + a1[0x19]);
      v20 = *v19;
      a1[0x10] = v20;
      result = (void *)(a1[0x13] & (v19[1] ^ (v20 << v18)));
      a1[0x10] = (int)result;
    }
  }
  while ( v17 < 0x106 && *(_DWORD *)(*a1 + 4) );
  return result;
}
