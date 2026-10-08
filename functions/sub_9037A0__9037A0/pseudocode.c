_DWORD *__thiscall sub_9037A0(_DWORD *this, int a2, _DWORD *a3, int *a4, int a5)
{
  const void **v6; // ebp
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int *v13; // edi
  int (__thiscall ***v14)(_DWORD, int **, int *, _DWORD *, int, _DWORD *, int); // ecx
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  int (__cdecl *v18)(_DWORD *, _DWORD *, int *, int); // eax
  _DWORD *v19; // esi
  int v21; // [esp+18h] [ebp-1Ch]
  int (__stdcall ****v22)(char); // [esp+18h] [ebp-1Ch]
  _DWORD *v24; // [esp+20h] [ebp-14h]
  _DWORD v25[4]; // [esp+24h] [ebp-10h] BYREF

  *(this + 2) = a5; /*0x9037ad*/
  *((_WORD *)this + 3) = 1; /*0x9037b4*/
  *this = &off_A9BCA8; /*0x9037ba*/
  v6 = (const void **)(this + 3); /*0x9037c0*/
  *(this + 3) = this + 6; /*0x9037c6*/
  *(this + 4) = 0; /*0x9037c9*/
  *(this + 5) = 0x80000004; /*0x9037d0*/
  v7 = *(_DWORD *)(a2 + 8); /*0x9037d7*/
  v8 = *(_DWORD **)a2; /*0x9037da*/
  v25[3] = a2; /*0x9037dc*/
  v25[2] = v7; /*0x9037e0*/
  v24 = v8; /*0x9037ec*/
  v9 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x1C))(v8); /*0x9037f3*/
  v10 = (unsigned int)v6[2] & 0x3FFFFFFF; /*0x9037f8*/
  if ( v10 < v9 ) /*0x9037ff*/
  {
    v11 = 2 * v10; /*0x903801*/
    if ( v9 >= v11 ) /*0x903805*/
      v11 = v9; /*0x903807*/
    sub_8A6E40(v6, v11, 4); /*0x90380d*/
  }
  v6[1] = (const void *)v9; /*0x903815*/
  v12 = 0; /*0x90381b*/
  if ( (int)*(this + 4) <= 0 ) /*0x90381f*/
    return this; /*0x9038fc*/
  v13 = a4; /*0x903825*/
  do /*0x9038ea*/
  {
    v14 = (int (__thiscall ***)(_DWORD, int **, int *, _DWORD *, int, _DWORD *, int))v13[1]; /*0x903836*/
    v25[0] = *(_DWORD *)(v8[4] + 8 * v12); /*0x90383a*/
    v25[1] = v12; /*0x90384e*/
    if ( *(_BYTE *)(**v14)(v14, &a4, v13, a3, a2, v8, v12) ) /*0x903857*/
    {
      v21 = *v13; /*0x903864*/
      v15 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v25[0] + 8))(v25[0]); /*0x90386b*/
      v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x903875*/
      if ( *((_BYTE *)v13 + 0xC) ) /*0x903878*/
        v17 = v21 + 0x590; /*0x903883*/
      else
        v17 = v21 + 0x190; /*0x90388b*/
      v18 = *(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v21 /*0x9038a4*/
                                                              + 0x14 * *(unsigned __int8 *)(v17 + 0x20 * v15 + v16)
                                                              + 0x990);
      v19 = (char *)*v6 + 4 * v12; /*0x9038b0*/
      *v19 = v18(v25, a3, v13, a5); /*0x9038c0*/
      v8 = v24; /*0x9038c2*/
    }
    else
    {
      v22 = (int (__stdcall ****)(char))((char *)*v6 + 4 * v12); /*0x9038d1*/
      *v22 = sub_8E0970(); /*0x9038de*/
    }
    ++v12; /*0x9038e7*/
  }
  while ( v12 < *(this + 4) ); /*0x9038ea*/
  return this; /*0x9038f0*/
}
