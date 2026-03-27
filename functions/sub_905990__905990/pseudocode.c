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

  *(this + 2) = a5;
  *((_WORD *)this + 3) = 1;
  *this = &off_A9BDD8;
  v6 = (const void **)(this + 3);
  *(this + 3) = this + 6;
  *(this + 4) = 0;
  *(this + 5) = 0x80000004;
  v7 = a2[2];
  v8 = *a2;
  v33[3] = a2;
  v33[2] = v7;
  v9 = *(_DWORD *)v8;
  v31 = this;
  v32 = v8;
  v10 = (*(int (__thiscall **)(int))(v9 + 0x1C))(v8);
  v11 = (unsigned int)v6[2] & 0x3FFFFFFF;
  v25 = v10;
  if ( v11 < v10 )
  {
    v12 = 2 * v11;
    if ( v10 >= v12 )
      v12 = v10;
    sub_8A6E40(v6, v12, 8);
  }
  v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x20))(v8);
  if ( v25 <= 0 )
    return this;
  v29 = v25;
  do
  {
    v13 = (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)v8 + 0x28))(v8, v27, v34);
    v14 = (int (__thiscall ***)(_DWORD, char *, int *, _DWORD *, int *, int, int))a4[1];
    v33[0] = v13;
    v33[1] = v27;
    if ( *(_BYTE *)(**v14)(v14, &v28, a4, a3, a2, v8, v27) )
    {
      v15 = v6[1];
      v16 = (char *)*v6;
      v6[1] = (char *)v15 + 1;
      v26 = *a4;
      v17 = &v16[8 * (_DWORD)v15];
      v18 = *(_DWORD *)v33[0];
      v30 = (int *)v17;
      v19 = (*(int (__thiscall **)(_DWORD))(v18 + 8))(v33[0]);
      v20 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
      if ( *((_BYTE *)a4 + 0xC) )
        v21 = v26 + 0x590;
      else
        v21 = v26 + 0x190;
      v22 = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v26
                                                               + 0x14 * *(unsigned __int8 *)(v21 + 0x20 * v19 + v20)
                                                               + 0x990))(
              v33,
              a3,
              a4,
              a5);
      v23 = v30;
      v8 = v32;
      v30[1] = v22;
      *v23 = v27;
    }
    v27 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x24))(v8, v27);
    --v29;
  }
  while ( v29 );
  return v31;
}
