_OWORD *__usercall sub_94B9B0@<eax>(int a1@<ecx>, const void **a2@<esi>, int a3)
{
  _OWORD *v3; // eax
  _OWORD *v4; // eax
  _OWORD *v5; // eax
  _OWORD *v6; // eax
  _OWORD *v7; // eax
  _OWORD *result; // eax
  __int128 v9; // [esp+Ch] [ebp-30h]
  __int128 v10; // [esp+Ch] [ebp-30h]
  __int128 v11; // [esp+Ch] [ebp-30h]
  __int128 v12; // [esp+Ch] [ebp-30h]
  __int128 v13; // [esp+Ch] [ebp-30h]
  __int128 v14; // [esp+Ch] [ebp-30h]
  _DWORD v15[8]; // [esp+1Ch] [ebp-20h] BYREF

  (*(void (__thiscall **)(int, __int128 *, int, _DWORD *))(*(_DWORD *)a1 + 0xC))(a1, xmmword_B2F090, a3, v15); /*0x94b9c9*/
  *((float *)&v9 + 3) = -*(float *)&v15[4]; /*0x94b9d8*/
  LODWORD(v9) = 0x3F800000; /*0x94b9e3*/
  *(_QWORD *)((char *)&v9 + 4) = 0; /*0x94b9ea*/
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94b9fa*/
    sub_8A6EE0(a2, 0x10); /*0x94b9ff*/
  v3 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94ba15*/
  a2[1] = (char *)a2[1] + 1; /*0x94ba18*/
  *v3 = v9; /*0x94ba1b*/
  *((float *)&v10 + 3) = -*(float *)&v15[5]; /*0x94ba2a*/
  LODWORD(v10) = 0; /*0x94ba36*/
  *(_QWORD *)((char *)&v10 + 4) = 0x3F800000; /*0x94ba3d*/
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94ba4d*/
    sub_8A6EE0(a2, 0x10); /*0x94ba52*/
  v4 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94ba68*/
  a2[1] = (char *)a2[1] + 1; /*0x94ba6b*/
  *v4 = v10; /*0x94ba6e*/
  *((float *)&v11 + 3) = -*(float *)&v15[6]; /*0x94ba7d*/
  LODWORD(v11) = 0; /*0x94ba89*/
  *(_QWORD *)((char *)&v11 + 4) = 0x3F80000000000000LL; /*0x94ba90*/
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94baa0*/
    sub_8A6EE0(a2, 0x10); /*0x94baa5*/
  v5 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94babb*/
  a2[1] = (char *)a2[1] + 1; /*0x94babe*/
  *v5 = v11; /*0x94bac1*/
  HIDWORD(v12) = v15[0]; /*0x94bacb*/
  LODWORD(v12) = 0xBF800000; /*0x94bada*/
  *(_QWORD *)((char *)&v12 + 4) = 0; /*0x94bae1*/
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94baf1*/
    sub_8A6EE0(a2, 0x10); /*0x94baf6*/
  v6 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94bb0c*/
  a2[1] = (char *)a2[1] + 1; /*0x94bb0f*/
  *v6 = v12; /*0x94bb12*/
  LODWORD(v13) = 0; /*0x94bb26*/
  *(_QWORD *)((char *)&v13 + 4) = 0xBF800000LL; /*0x94bb2d*/
  HIDWORD(v13) = v15[1]; /*0x94bb3d*/
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94bb41*/
    sub_8A6EE0(a2, 0x10); /*0x94bb46*/
  v7 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94bb5c*/
  a2[1] = (char *)a2[1] + 1; /*0x94bb5f*/
  *v7 = v13; /*0x94bb62*/
  LODWORD(v14) = 0; /*0x94bb77*/
  *(_QWORD *)((char *)&v14 + 4) = 0xBF80000000000000uLL; /*0x94bb7e*/
  HIDWORD(v14) = v15[2]; /*0x94bb8e*/
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x94bb92*/
    sub_8A6EE0(a2, 0x10); /*0x94bb97*/
  result = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x94bbad*/
  a2[1] = (char *)a2[1] + 1; /*0x94bbb0*/
  *result = v14; /*0x94bbb3*/
  return result; /*0x94bbb6*/
}
