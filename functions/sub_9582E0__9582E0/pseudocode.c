int __usercall sub_9582E0@<eax>(int a1@<ebx>, int a2, int a3, char a4, int a5, int a6, char *a7, const void **a8)
{
  char *v8; // eax
  signed int v9; // ecx
  int v10; // ecx
  int v11; // ebp
  int v12; // ebx
  const void *v13; // ecx
  char *v14; // eax
  char *v15; // eax
  int v16; // esi
  int v17; // ecx
  _DWORD *v19; // [esp+10h] [ebp-64h] BYREF
  int v20; // [esp+14h] [ebp-60h]
  unsigned int v21; // [esp+18h] [ebp-5Ch]
  char **v22[4]; // [esp+1Ch] [ebp-58h] BYREF
  _DWORD v23[5]; // [esp+2Ch] [ebp-48h] BYREF
  _DWORD v24[3]; // [esp+40h] [ebp-34h] BYREF
  int v25; // [esp+4Ch] [ebp-28h]
  int v26; // [esp+50h] [ebp-24h]
  unsigned int v27; // [esp+54h] [ebp-20h]
  int v28; // [esp+58h] [ebp-1Ch]
  int v29; // [esp+5Ch] [ebp-18h]
  unsigned int v30; // [esp+60h] [ebp-14h]
  int v31; // [esp+64h] [ebp-10h]
  int v32; // [esp+68h] [ebp-Ch]
  unsigned int v33; // [esp+6Ch] [ebp-8h]
  int v34; // [esp+70h] [ebp-4h]

  sub_942D70((int)v22, a1, (_DWORD *)a3); /*0x9582f0*/
  v19 = 0; /*0x958307*/
  v20 = 0; /*0x95830b*/
  v21 = 0x80000000; /*0x95830f*/
  sub_8BC030(v23, (int)&v19, 1); /*0x958313*/
  v24[0] = 0; /*0x958336*/
  v24[1] = 0; /*0x95833a*/
  v24[2] = 0x80000000; /*0x95833e*/
  v25 = 0; /*0x958342*/
  v26 = 0; /*0x958346*/
  v27 = 0x80000000; /*0x95834a*/
  v28 = 0; /*0x95834e*/
  v29 = 0; /*0x958352*/
  v30 = 0x80000000; /*0x958356*/
  v31 = 0; /*0x95835a*/
  v32 = 0; /*0x95835e*/
  v33 = 0x80000000; /*0x958362*/
  v34 = 0; /*0x958366*/
  sub_942D10(v22, (int)v23, a6, a7, (int)v24); /*0x95836d*/
  v8 = (char *)a8[1] + v26; /*0x958380*/
  v9 = (unsigned int)a8[2] & 0x3FFFFFFF; /*0x958385*/
  if ( v9 < (int)v8 ) /*0x95838d*/
  {
    v10 = 2 * v9; /*0x95838f*/
    if ( (int)v8 < v10 ) /*0x958393*/
      v8 = (char *)v10; /*0x958395*/
    sub_8A6E40(a8, (int)v8, 0x18); /*0x95839b*/
  }
  v11 = 0; /*0x9583a7*/
  if ( v26 > 0 ) /*0x9583ab*/
  {
    v12 = 0; /*0x9583ad*/
    do /*0x958408*/
    {
      if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) ) /*0x9583bd*/
        sub_8A6EE0(a8, 0x18); /*0x9583c2*/
      v13 = a8[1]; /*0x9583ca*/
      v14 = (char *)*a8; /*0x9583cd*/
      a8[1] = (char *)v13 + 1; /*0x9583d3*/
      v15 = &v14[0x18 * (_DWORD)v13]; /*0x9583da*/
      *(_DWORD *)v15 = *(_DWORD *)(v12 + v25); /*0x9583e0*/
      *((_DWORD *)v15 + 2) = *(_DWORD *)(v12 + v25 + 4); /*0x9583ea*/
      *((_DWORD *)v15 + 3) = 0; /*0x9583ed*/
      *((_DWORD *)v15 + 4) = *(_DWORD *)(v12 + v25 + 8); /*0x9583f8*/
      *((_DWORD *)v15 + 5) = 0; /*0x9583fb*/
      ++v11; /*0x958402*/
      v12 += 0xC; /*0x958403*/
    }
    while ( v11 < v26 ); /*0x958408*/
  }
  v16 = sub_958130(v24, a2, a4, a5, (char)a7, 0, (int)v19, v20, *(_BYTE *)(a3 + 1) != BYTE1(dword_B2FDE4)); /*0x958460*/
  sub_941400(v24); /*0x958462*/
  sub_8BC2E0(v23); /*0x95846b*/
  if ( (v21 & 0x80000000) == 0 ) /*0x958476*/
  {
    v17 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x958488*/
    if ( !v17 ) /*0x958490*/
      v17 = unk_BA7D9C; /*0x958492*/
    sub_8A75D0(v17, v19, v21 & 0x3FFFFFFF, 0x14); /*0x9584a5*/
  }
  sub_942E10(v22); /*0x9584ae*/
  return v16; /*0x9584b3*/
}
