int *__userpurge sub_7C2FF0@<eax>(int a1@<ecx>, int a2, int incoming, int a4)
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

  v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 4); /*0x7c301d*/
  v16 = 0; /*0x7c3021*/
  v6 = v5(a1, a2); /*0x7c302b*/
  v7 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 4 * v6); /*0x7c3030*/
  if ( v7 ) /*0x7c3035*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, v7[1]) ) /*0x7c3047*/
    {
      v7 = (_DWORD *)*v7; /*0x7c304d*/
      if ( !v7 ) /*0x7c3051*/
        goto LABEL_4; /*0x7c3051*/
    }
    if ( !*(_BYTE *)(a1 + 0x10) ) /*0x7c30d4*/
      v7[1] = a2; /*0x7c30da*/
    result = OB_NiSmartPointer_Assign_010201A0(v7 + 2, &incoming); /*0x7c30e5*/
    v14 = (int *(__thiscall ***)(_DWORD, int))incoming; /*0x7c30ea*/
    v16 = 0xFFFFFFFF; /*0x7c30f0*/
    if ( incoming ) /*0x7c30f8*/
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(incoming + 4)); /*0x7c30fe*/
      if ( !result ) /*0x7c3106*/
      {
        v12 = *v14; /*0x7c3108*/
        v13 = v14; /*0x7c310a*/
        return (*v12)(v13, 1); /*0x7c310c*/
      }
    }
  }
  else
  {
LABEL_4:
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x14))(a1, v15[0]); /*0x7c3053*/
    v9 = a4; /*0x7c305c*/
    v10 = (_DWORD *)v8; /*0x7c3063*/
    v15[6] = v15; /*0x7c3067*/
    v15[0] = a4; /*0x7c306b*/
    if ( a4 ) /*0x7c306d*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x7c3073*/
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(a1, v10, incoming); /*0x7c3086*/
    result = *(int **)(a1 + 8); /*0x7c3088*/
    *v10 = result[v6]; /*0x7c308e*/
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v6) = v10; /*0x7c3093*/
    ++*(_DWORD *)(a1 + 0xC); /*0x7c3096*/
    v16 = 0xFFFFFFFF; /*0x7c309c*/
    if ( v9 ) /*0x7c30a4*/
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v9 + 4)); /*0x7c30aa*/
      if ( !result ) /*0x7c30b2*/
      {
        v12 = *(int *(__thiscall ***)(_DWORD, int))v9; /*0x7c30b4*/
        v13 = (int *(__thiscall ***)(_DWORD, int))v9; /*0x7c30b6*/
        return (*v12)(v13, 1); /*0x7c30b8*/
      }
    }
  }
  return result; /*0x7c30be*/
}
