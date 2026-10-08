int *__userpurge sub_4A1B10@<eax>(int a1@<ecx>, int a2, int incoming, int a4)
{
  int (__thiscall *v5)(int, int); // edx
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // edi
  int *result; // eax
  int *(__thiscall **v12)(_DWORD, int); // edx
  int *(__thiscall ***v13)(_DWORD, int); // ecx
  int *(__thiscall ***v14)(_DWORD, int); // esi
  _DWORD v15[8]; // [esp+4h] [ebp-24h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 4); /*0x4a1b3d*/
  v16 = 0; /*0x4a1b41*/
  v6 = v5(a1, a2); /*0x4a1b4b*/
  v7 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 4 * v6); /*0x4a1b50*/
  if ( v7 ) /*0x4a1b55*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, v7[1]) ) /*0x4a1b67*/
    {
      v7 = (_DWORD *)*v7; /*0x4a1b6d*/
      if ( !v7 ) /*0x4a1b71*/
        goto LABEL_4; /*0x4a1b71*/
    }
    if ( !*(_BYTE *)(a1 + 0x10) ) /*0x4a1bf4*/
      v7[1] = a2; /*0x4a1bfa*/
    result = OB_NiSmartPointer_Assign_010201A0(v7 + 2, &incoming); /*0x4a1c05*/
    v14 = (int *(__thiscall ***)(_DWORD, int))incoming; /*0x4a1c0a*/
    v16 = 0xFFFFFFFF; /*0x4a1c10*/
    if ( incoming ) /*0x4a1c18*/
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(incoming + 4)); /*0x4a1c1e*/
      if ( !result ) /*0x4a1c26*/
      {
        v12 = *v14; /*0x4a1c28*/
        v13 = v14; /*0x4a1c2a*/
        return (*v12)(v13, 1); /*0x4a1c2c*/
      }
    }
  }
  else
  {
LABEL_4:
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x14))(a1, v15[0]); /*0x4a1b73*/
    v9 = a4; /*0x4a1b7c*/
    v10 = (_DWORD *)v8; /*0x4a1b83*/
    v15[6] = v15; /*0x4a1b87*/
    v15[0] = a4; /*0x4a1b8b*/
    if ( a4 ) /*0x4a1b8d*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x4a1b93*/
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(a1, v10, incoming); /*0x4a1ba6*/
    result = *(int **)(a1 + 8); /*0x4a1ba8*/
    *v10 = result[v6]; /*0x4a1bae*/
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v6) = v10; /*0x4a1bb3*/
    ++*(_DWORD *)(a1 + 0xC); /*0x4a1bb6*/
    v16 = 0xFFFFFFFF; /*0x4a1bbc*/
    if ( v9 ) /*0x4a1bc4*/
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v9 + 4)); /*0x4a1bca*/
      if ( !result ) /*0x4a1bd2*/
      {
        v12 = *(int *(__thiscall ***)(_DWORD, int))v9; /*0x4a1bd4*/
        v13 = (int *(__thiscall ***)(_DWORD, int))v9; /*0x4a1bd6*/
        return (*v12)(v13, 1); /*0x4a1bd8*/
      }
    }
  }
  return result; /*0x4a1bde*/
}
