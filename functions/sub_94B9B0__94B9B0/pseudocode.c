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

  (*(void (__thiscall **)(int, __int128 *, int, _DWORD *))(*(_DWORD *)a1 + 0xC))(a1, xmmword_B2F090, a3, v15);
  *((float *)&v9 + 3) = -*(float *)&v15[4];
  LODWORD(v9) = 0x3F800000;
  *(_QWORD *)((char *)&v9 + 4) = 0;
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 0x10);
  v3 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
  a2[1] = (char *)a2[1] + 1;
  *v3 = v9;
  *((float *)&v10 + 3) = -*(float *)&v15[5];
  LODWORD(v10) = 0;
  *(_QWORD *)((char *)&v10 + 4) = 0x3F800000;
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 0x10);
  v4 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
  a2[1] = (char *)a2[1] + 1;
  *v4 = v10;
  *((float *)&v11 + 3) = -*(float *)&v15[6];
  LODWORD(v11) = 0;
  *(_QWORD *)((char *)&v11 + 4) = 0x3F80000000000000LL;
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 0x10);
  v5 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
  a2[1] = (char *)a2[1] + 1;
  *v5 = v11;
  HIDWORD(v12) = v15[0];
  LODWORD(v12) = 0xBF800000;
  *(_QWORD *)((char *)&v12 + 4) = 0;
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 0x10);
  v6 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
  a2[1] = (char *)a2[1] + 1;
  *v6 = v12;
  LODWORD(v13) = 0;
  *(_QWORD *)((char *)&v13 + 4) = 0xBF800000LL;
  HIDWORD(v13) = v15[1];
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 0x10);
  v7 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
  a2[1] = (char *)a2[1] + 1;
  *v7 = v13;
  LODWORD(v14) = 0;
  *(_QWORD *)((char *)&v14 + 4) = 0xBF80000000000000uLL;
  HIDWORD(v14) = v15[2];
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 0x10);
  result = (char *)*a2 + 0x10 * (_DWORD)a2[1];
  a2[1] = (char *)a2[1] + 1;
  *result = v14;
  return result;
}
