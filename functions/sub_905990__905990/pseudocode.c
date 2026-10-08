_DWORD *__thiscall sub_905990(_DWORD *this, int *a2, _DWORD *a3, int *a4, int a5)
{
  const void **v6; // ebx
  int v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int (__thiscall ***v14)(_DWORD, char *, int *, _DWORD *, int *, int, int); // ecx
  const void *v15; // eax
  char *v16; // edx
  char *v17; // eax
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int *v23; // ecx
  int v25; // [esp+20h] [ebp-23Ch]
  int v26; // [esp+20h] [ebp-23Ch]
  int v27; // [esp+24h] [ebp-238h]
  char v28; // [esp+2Bh] [ebp-231h] BYREF
  int v29; // [esp+2Ch] [ebp-230h]
  int *v30; // [esp+30h] [ebp-22Ch]
  _DWORD *v31; // [esp+34h] [ebp-228h]
  int v32; // [esp+38h] [ebp-224h]
  _DWORD v33[4]; // [esp+3Ch] [ebp-220h] BYREF
  char v34[524]; // [esp+4Ch] [ebp-210h] BYREF

  *(this + 2) = a5; /*0x9059b0*/
  *((_WORD *)this + 3) = 1; /*0x9059b6*/
  *this = &off_A9BDD8; /*0x9059bc*/
  v6 = (const void **)(this + 3); /*0x9059c2*/
  *(this + 3) = this + 6; /*0x9059c8*/
  *(this + 4) = 0; /*0x9059ca*/
  *(this + 5) = 0x80000004; /*0x9059d1*/
  v7 = a2[2]; /*0x9059d8*/
  v8 = *a2; /*0x9059db*/
  v33[3] = a2; /*0x9059dd*/
  v33[2] = v7; /*0x9059e1*/
  v9 = *(_DWORD *)v8; /*0x9059e5*/
  v31 = this; /*0x9059e9*/
  v32 = v8; /*0x9059ed*/
  v10 = (*(int (__thiscall **)(int))(v9 + 0x1C))(v8); /*0x9059f4*/
  v11 = (unsigned int)v6[2] & 0x3FFFFFFF; /*0x9059f9*/
  v25 = v10; /*0x905a00*/
  if ( v11 < v10 ) /*0x905a04*/
  {
    v12 = 2 * v11; /*0x905a06*/
    if ( v10 >= v12 ) /*0x905a0a*/
      v12 = v10; /*0x905a0c*/
    sub_8A6E40(v6, v12, 8); /*0x905a12*/
  }
  v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x20))(v8); /*0x905a21*/
  if ( v25 <= 0 ) /*0x905a2b*/
    return this; /*0x905b38*/
  v29 = v25; /*0x905a34*/
  do /*0x905b12*/
  {
    v13 = (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)v8 + 0x28))(v8, v27, v34); /*0x905a4e*/
    v14 = (int (__thiscall ***)(_DWORD, char *, int *, _DWORD *, int *, int, int))a4[1]; /*0x905a51*/
    v33[0] = v13; /*0x905a54*/
    v33[1] = v27; /*0x905a5d*/
    if ( *(_BYTE *)(**v14)(v14, &v28, a4, a3, a2, v8, v27) ) /*0x905a74*/
    {
      v15 = v6[1]; /*0x905a7d*/
      v16 = (char *)*v6; /*0x905a80*/
      v6[1] = (char *)v15 + 1; /*0x905a85*/
      v26 = *a4; /*0x905a8a*/
      v17 = &v16[8 * (_DWORD)v15]; /*0x905a92*/
      v18 = *(_DWORD *)v33[0]; /*0x905a95*/
      v30 = (int *)v17; /*0x905a97*/
      v19 = (*(int (__thiscall **)(_DWORD))(v18 + 8))(v33[0]); /*0x905a9e*/
      v20 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x905aa7*/
      if ( *((_BYTE *)a4 + 0xC) ) /*0x905aaa*/
        v21 = v26 + 0x590; /*0x905ab5*/
      else
        v21 = v26 + 0x190; /*0x905abd*/
      v22 = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v26 /*0x905ae8*/
                                                               + 0x14 * *(unsigned __int8 *)(v21 + 0x20 * v19 + v20)
                                                               + 0x990))(
              v33,
              a3,
              a4,
              a5);
      v23 = v30; /*0x905aea*/
      v8 = v32; /*0x905aee*/
      v30[1] = v22; /*0x905af2*/
      *v23 = v27; /*0x905afc*/
    }
    v27 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x24))(v8, v27); /*0x905b0a*/
    --v29; /*0x905b0e*/
  }
  while ( v29 ); /*0x905b12*/
  return v31; /*0x905b1c*/
}
