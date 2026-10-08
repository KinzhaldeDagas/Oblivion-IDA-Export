int __cdecl sub_8D3200(int *a1, _DWORD *a2, _DWORD *a3)
{
  int *v3; // edx
  int result; // eax
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  int *v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // [esp+8h] [ebp-10h]
  int v18; // [esp+14h] [ebp-4h]

  v3 = a1; /*0x8d3203*/
  result = a1[1]; /*0x8d3207*/
  v5 = a2; /*0x8d320c*/
  v6 = *a2; /*0x8d3210*/
  v17 = *a2; /*0x8d3214*/
  if ( *a2 < result ) /*0x8d3218*/
  {
    v7 = 0xC * v6; /*0x8d3223*/
    do /*0x8d32ae*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(*v3 + v7) + 0x24); /*0x8d322b*/
      v9 = *(unsigned __int16 *)(*(_DWORD *)(v8 + 4) + 0x8C); /*0x8d3235*/
      v10 = v8 + 4; /*0x8d323e*/
      if ( *(_BYTE *)(*a3 + v9) == 8 && *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v10 + 4) + 0x8C) + *a3) == 8 ) /*0x8d3255*/
      {
        v11 = (*v5)++; /*0x8d3257*/
        v12 = *v3; /*0x8d325e*/
        v13 = (int *)(v7 + v12); /*0x8d3260*/
        v14 = (int *)(v12 + 0xC * v11); /*0x8d3266*/
        v15 = *v14; /*0x8d326b*/
        v16 = v14[1]; /*0x8d326d*/
        v18 = v14[2]; /*0x8d3273*/
        *v14 = *v13; /*0x8d327b*/
        v14[1] = v13[1]; /*0x8d3280*/
        v14[2] = v13[2]; /*0x8d3286*/
        v6 = v17; /*0x8d3289*/
        *v13 = v15; /*0x8d328d*/
        v13[1] = v16; /*0x8d3293*/
        v5 = a2; /*0x8d3296*/
        v13[2] = v18; /*0x8d329a*/
        v3 = a1; /*0x8d329d*/
      }
      result = v3[1]; /*0x8d32a1*/
      ++v6; /*0x8d32a4*/
      v7 += 0xC; /*0x8d32a5*/
      v17 = v6; /*0x8d32aa*/
    }
    while ( v6 < result ); /*0x8d32ae*/
  }
  return result; /*0x8d32b6*/
}
