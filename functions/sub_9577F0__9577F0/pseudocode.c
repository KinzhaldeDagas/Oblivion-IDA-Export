int **__thiscall sub_9577F0(int **this, int **a2, int *a3, int a4, int *a5, int **a6)
{
  int **v6; // ebx
  int *v7; // esi
  int *v8; // edx
  int v9; // edi
  int *v11; // ecx
  int *v12; // eax
  int **v13; // edx
  bool v14; // cf
  int v15; // edi
  int v16; // edx
  char v17; // fps^1
  double v18; // st7
  char v19; // ah
  bool v20; // c0
  bool v21; // c3
  int **v22; // ebp
  int *v23; // esi
  int v24; // eax
  int v25; // eax
  int *v26; // ebx
  int *v27; // ecx
  int **result; // eax
  int v29; // edx
  int v30; // edx
  int *v31; // esi
  int *v32; // edx
  int *v33; // esi
  unsigned int v34; // [esp+0h] [ebp-30h]
  int *v35; // [esp+14h] [ebp-1Ch] BYREF
  int v36; // [esp+18h] [ebp-18h] BYREF
  int *v37; // [esp+1Ch] [ebp-14h] BYREF
  int *v38; // [esp+20h] [ebp-10h] BYREF
  int *v39; // [esp+24h] [ebp-Ch] BYREF
  int v40; // [esp+28h] [ebp-8h] BYREF
  int *v41; // [esp+2Ch] [ebp-4h] BYREF

  v6 = a2; /*0x9577f4*/
  v7 = a3; /*0x9577fd*/
  v8 = a2[1]; /*0x957801*/
  v9 = (int)a2[2]; /*0x957804*/
  v11 = *a2; /*0x95780b*/
  v12 = &(*a2)[4 * ((_DWORD)v8 + v9)]; /*0x957813*/
  v13 = (int **)&(*a2)[4 * (_DWORD)v8]; /*0x957815*/
  v14 = *a2 < (int *)v13; /*0x957817*/
  v36 = v9; /*0x957819*/
  v40 = 0; /*0x95781d*/
  v38 = v11; /*0x957825*/
  a2 = v13; /*0x957829*/
  v37 = v12; /*0x95782d*/
  v35 = v12; /*0x957831*/
  v41 = v12; /*0x957835*/
  v39 = v11; /*0x957839*/
  if ( v14 ) /*0x95783d*/
  {
    v15 = a4; /*0x95783f*/
    do /*0x9578ad*/
    {
      v16 = 0; /*0x957846*/
      v18 = *((float *)v11 + 3); /*0x95784e*/
      v19 = v17; /*0x957851*/
      v20 = v18 < *((float *)v7 + 0x30); /*0x957853*/
      v21 = v18 == *((float *)v7 + 0x30); /*0x957853*/
      if ( __SETP__(v19 & 5, 0) ) /*0x95785e*/
      {
        if ( !v20 && !v21 ) /*0x957873*/
          v16 = 2; /*0x957878*/
      }
      else if ( v20 || v21 ) /*0x957860*/
      {
        v16 = 1; /*0x957865*/
      }
      else
      {
        v16 = 3; /*0x95786c*/
      }
      sub_9571B0(this, v16, (int)v7, v15, &v36, &v40, &v39, (int **)&a2, &v37, &v35); /*0x9578a0*/
      v11 = v39; /*0x9578a5*/
    }
    while ( v39 < (int *)a2 ); /*0x9578ad*/
    v9 = v36; /*0x9578af*/
  }
  a3 = v35; /*0x9578bd*/
  sub_9575F0(this, &v38, &a2, &v37, &a3, (int *)&v35, (unsigned int *)&v41, (int)v7); /*0x9578dc*/
  v22 = a2; /*0x9578e1*/
  v23 = a5; /*0x9578e9*/
  v24 = ((char *)a2 - (char *)v38) >> 4; /*0x9578f1*/
  a2 = (int **)v24; /*0x9578f4*/
  a5[1] = v24; /*0x9578fc*/
  *(float *)&v34 = (double)v24 * (double)v36 / (double)(int)v6[1]; /*0x957907*/
  v25 = sub_8ECB30(v34); /*0x95790a*/
  v26 = a3; /*0x95790f*/
  v27 = v37; /*0x957913*/
  v23[2] = v25; /*0x957917*/
  result = a6; /*0x95791a*/
  a6[1] = (int *)(((char *)v26 - (char *)v27) >> 4); /*0x957925*/
  v29 = (int)v38; /*0x95792b*/
  result[2] = (int *)(v9 - v23[2]); /*0x95792f*/
  *v23 = v29; /*0x957932*/
  v30 = v23[2]; /*0x957934*/
  v31 = result[2]; /*0x957937*/
  v32 = (int *)&v22[4 * v30]; /*0x95793d*/
  *result = v32; /*0x957944*/
  if ( v31 ) /*0x957946*/
  {
    for ( ; v27 < v26; v33[3] = (int)result ) /*0x95794a*/
    {
      v33 = v32; /*0x957954*/
      *v32 = *v27; /*0x957956*/
      v32[1] = v27[1]; /*0x95795b*/
      v32[2] = v27[2]; /*0x957961*/
      result = (int **)v27[3]; /*0x957964*/
      v27 += 4; /*0x957967*/
      v32 += 4; /*0x95796a*/
    }
  }
  return result; /*0x957974*/
}
