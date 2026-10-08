char *__stdcall sub_954DB0(char *a1, char *a2, int a3)
{
  char *result; // eax
  int v4; // esi
  char *v5; // ecx
  int v6; // edx
  char *v7; // esi
  char *v8; // edx
  int *v9; // ebx
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]

  result = a2; /*0x954db0*/
  v4 = *((_DWORD *)a2 + 2) - 8; /*0x954dbb*/
  if ( v4 <= 0 ) /*0x954dc1*/
    v4 = 0; /*0x954dc3*/
  v5 = a1; /*0x954dc5*/
  v6 = *((_DWORD *)a1 + 9) - v4; /*0x954dce*/
  if ( v6 > *((_DWORD *)a1 + 9) ) /*0x954dd2*/
    v6 = *((_DWORD *)a1 + 9); /*0x954dd4*/
  v13 = v6; /*0x954ddc*/
  *(_BYTE *)a3 = 0; /*0x954de0*/
  if ( v6 <= 0 ) /*0x954de3*/
  {
    *((_DWORD *)a2 + 9) = *((_DWORD *)a1 + 9); /*0x954e97*/
    *((_DWORD *)a2 + 0xA) = *((_DWORD *)a1 + 0xA); /*0x954e9d*/
    *((_DWORD *)a2 + 0xB) = *((_DWORD *)a1 + 0xB); /*0x954ea3*/
    *((_DWORD *)a2 + 0xC) = *((_DWORD *)a1 + 0xC); /*0x954eaa*/
  }
  else
  {
    if ( v6 >= 4 ) /*0x954dec*/
      v13 = 4; /*0x954dee*/
LABEL_8:
    *((_DWORD *)result + 9) = *((_DWORD *)v5 + 9) - v13; /*0x954e00*/
    v14 = 0; /*0x954e10*/
    v7 = result + 0x10; /*0x954e18*/
    v8 = result + 0x28; /*0x954e1b*/
    v9 = (int *)(a3 + 8); /*0x954e1e*/
    while ( v14 < 3 ) /*0x954e26*/
    {
      v10 = *(_DWORD *)&v8[a1 - a2]; /*0x954e2c*/
      v11 = *((_DWORD *)v5 + 9); /*0x954e2f*/
      v12 = (*((_DWORD *)v7 + 0xFFFFFFFF) - v10) >> v11; /*0x954e37*/
      *(_DWORD *)v8 = v10 + (v12 << v11); /*0x954e3f*/
      *v9 = v12; /*0x954e41*/
      result = a2; /*0x954e49*/
      if ( (*(_DWORD *)v7 - *(_DWORD *)v8) >> *((_DWORD *)a2 + 9) >= 0xFF ) /*0x954e58*/
      {
        --v13; /*0x954e72*/
        v5 = a1; /*0x954e76*/
        goto LABEL_8; /*0x954e7a*/
      }
      v5 = a1; /*0x954e5e*/
      ++v9; /*0x954e63*/
      v8 += 4; /*0x954e66*/
      ++v14; /*0x954e69*/
      v7 += 8; /*0x954e6d*/
    }
    *(_DWORD *)(a3 + 4) = v13; /*0x954e87*/
    *(_BYTE *)a3 = 1; /*0x954e8a*/
    return (char *)a3; /*0x954e7c*/
  }
  return result; /*0x954e86*/
}
