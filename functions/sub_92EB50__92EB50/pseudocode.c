int __cdecl sub_92EB50(int a1)
{
  float *v1; // ecx
  int v2; // esi
  int v3; // eax
  float *v4; // edx
  unsigned int v5; // ebx
  float *v6; // eax
  float *v7; // ecx
  float *v8; // eax
  char *v9; // ecx
  float *v10; // eax
  char *v11; // ecx
  float *v12; // eax
  int v13; // esi
  float *v14; // eax
  int v15; // edx
  int v16; // esi
  int result; // eax
  int v18; // eax

  v1 = *(float **)a1; /*0x92eb5a*/
  v2 = *(_DWORD *)(a1 + 4) - 1; /*0x92eb5c*/
  v3 = *(_DWORD *)(a1 + 4); /*0x92eb5f*/
  v4 = *(float **)a1; /*0x92eb65*/
  if ( v3 >= 4 ) /*0x92eb67*/
  {
    v5 = (unsigned int)v3 >> 2; /*0x92eb70*/
    v2 -= 4 * ((unsigned int)v3 >> 2); /*0x92eb74*/
    do /*0x92ec01*/
    {
      if ( v1[3] == *(float *)&SrcStr ) /*0x92eb90*/
      {
        v6 = v4; /*0x92eb95*/
        v4 += 4; /*0x92eb97*/
        *(_OWORD *)v6 = *(_OWORD *)v1; /*0x92eb9a*/
      }
      v7 = v1 + 4; /*0x92eba3*/
      if ( v7[3] == *(float *)&SrcStr ) /*0x92ebb0*/
      {
        v8 = v4; /*0x92ebb5*/
        v4 += 4; /*0x92ebb7*/
        *(_OWORD *)v8 = *(_OWORD *)v7; /*0x92ebba*/
      }
      v9 = (char *)(v7 + 4); /*0x92ebc3*/
      if ( *((float *)v9 + 3) == *(float *)&SrcStr ) /*0x92ebd0*/
      {
        v10 = v4; /*0x92ebd5*/
        v4 += 4; /*0x92ebd7*/
        *(_OWORD *)v10 = *(_OWORD *)v9; /*0x92ebda*/
      }
      v11 = v9 + 0x10; /*0x92ebe3*/
      if ( *((float *)v11 + 3) == *(float *)&SrcStr ) /*0x92ebf0*/
      {
        v12 = v4; /*0x92ebf5*/
        v4 += 4; /*0x92ebf7*/
        *(_OWORD *)v12 = *(_OWORD *)v11; /*0x92ebfa*/
      }
      v1 = (float *)(v11 + 0x10); /*0x92ebfd*/
      --v5; /*0x92ec00*/
    }
    while ( v5 ); /*0x92ec01*/
  }
  if ( v2 >= 0 ) /*0x92ec09*/
  {
    v13 = v2 + 1; /*0x92ec0b*/
    do /*0x92ec31*/
    {
      if ( v1[3] == *(float *)&SrcStr ) /*0x92ec20*/
      {
        v14 = v4; /*0x92ec25*/
        v4 += 4; /*0x92ec27*/
        *(_OWORD *)v14 = *(_OWORD *)v1; /*0x92ec2a*/
      }
      v1 += 4; /*0x92ec2d*/
      --v13; /*0x92ec30*/
    }
    while ( v13 ); /*0x92ec31*/
  }
  v15 = ((int)v4 - *(_DWORD *)a1) >> 4; /*0x92ec3a*/
  v16 = v15; /*0x92ec3d*/
  result = *(_DWORD *)(a1 + 8) & 0x3FFFFFFF; /*0x92ec3f*/
  if ( result < v15 ) /*0x92ec46*/
  {
    v18 = 2 * result; /*0x92ec48*/
    if ( v15 >= v18 ) /*0x92ec4c*/
      v18 = v15; /*0x92ec4e*/
    result = sub_8A6E40((const void **)a1, v18, 0x10); /*0x92ec54*/
  }
  *(_DWORD *)(a1 + 4) = v16; /*0x92ec5c*/
  return result; /*0x92ec5f*/
}
