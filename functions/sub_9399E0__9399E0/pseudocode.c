char __fastcall sub_9399E0(unsigned __int8 *a1)
{
  int v1; // esi
  int v2; // edi
  unsigned __int8 *v3; // eax
  int v4; // edx
  unsigned __int8 *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int i; // ebp
  char v10; // bl
  unsigned __int8 v11; // dl
  unsigned __int8 *v12; // eax
  int v13; // esi
  int v15[20]; // [esp+10h] [ebp-50h] BYREF

  v1 = a1[2]; /*0x9399e6*/
  memset(v15, 0, 0x10); /*0x9399ef*/
  if ( v1 ) /*0x9399ff*/
  {
    v2 = a1[2]; /*0x939a01*/
    v3 = a1 + 8; /*0x939a05*/
    do /*0x939a53*/
    {
      v4 = v3[0xFFFFFFFD] + v3[0xFFFFFFFC]; /*0x939a18*/
      *((_BYTE *)v15 + (*v3 >> 4)) = 1; /*0x939a20*/
      *((_BYTE *)v15 + (v3[1] >> 4)) = 1; /*0x939a2e*/
      if ( v4 >= 3 ) /*0x939a32*/
        *((_BYTE *)v15 + (v3[2] >> 4)) = 1; /*0x939a3b*/
      if ( v4 == 4 ) /*0x939a42*/
        *((_BYTE *)v15 + (v3[3] >> 4)) = 1; /*0x939a4b*/
      v3 += 8; /*0x939a4f*/
      --v2; /*0x939a52*/
    }
    while ( v2 ); /*0x939a53*/
  }
  v5 = &a1[8 * v1 + 4]; /*0x939a58*/
  v6 = *a1 + a1[1]; /*0x939a60*/
  v7 = 0; /*0x939a62*/
  v8 = 0; /*0x939a64*/
  for ( i = 0; v7 < v6; ++v7 ) /*0x939a6a*/
  {
    v10 = *((_BYTE *)v15 + v7); /*0x939a70*/
    v15[v7 + 4] = i; /*0x939a76*/
    if ( v10 ) /*0x939a7a*/
    {
      *(_WORD *)&v5[2 * v8++] = *(_WORD *)&v5[2 * v7]; /*0x939a80*/
      i += 0x10; /*0x939a85*/
    }
  }
  v12 = (unsigned __int8 *)((unsigned int)v15[*a1 + 4] >> 4); /*0x939a94*/
  v11 = v8 - (_BYTE)v12; /*0x939a97*/
  *a1 = (unsigned __int8)v12; /*0x939a99*/
  LOBYTE(v12) = a1[2]; /*0x939a9b*/
  v13 = 0; /*0x939a9e*/
  a1[1] = v11; /*0x939aa2*/
  if ( (_BYTE)v12 ) /*0x939aa5*/
  {
    v12 = a1 + 9; /*0x939aa7*/
    do /*0x939af0*/
    {
      v12[0xFFFFFFFF] = v15[(v12[0xFFFFFFFF] >> 4) + 4]; /*0x939abb*/
      *v12 = v15[(*v12 >> 4) + 4]; /*0x939ac8*/
      v12[1] = v15[(v12[1] >> 4) + 4]; /*0x939ad5*/
      v12[2] = v15[(v12[2] >> 4) + 4]; /*0x939ae3*/
      ++v13; /*0x939aea*/
      v12 += 8; /*0x939aeb*/
    }
    while ( v13 < a1[2] ); /*0x939af0*/
  }
  return (char)v12; /*0x939af2*/
}
