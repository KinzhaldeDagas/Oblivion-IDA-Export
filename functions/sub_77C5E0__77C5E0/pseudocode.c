int *__userpurge sub_77C5E0@<eax>(int a1@<ecx>, int a2, int incoming, int a4)
{
  int v5; // ebp
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // edi
  int *result; // eax
  int *(__thiscall ***v11)(_DWORD, int); // esi

  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, a2); /*0x77c5f2*/
  v6 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 4 * v5); /*0x77c5f7*/
  if ( v6 ) /*0x77c5fc*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, v6[1]) ) /*0x77c610*/
    {
      v6 = (_DWORD *)*v6; /*0x77c612*/
      if ( !v6 ) /*0x77c616*/
        goto LABEL_4; /*0x77c616*/
    }
    if ( !*(_BYTE *)(a1 + 0x10) ) /*0x77c67e*/
      v6[1] = a2; /*0x77c684*/
    result = OB_NiSmartPointer_Assign_010201A0(v6 + 2, &incoming); /*0x77c68f*/
    v11 = (int *(__thiscall ***)(_DWORD, int))incoming; /*0x77c694*/
    if ( incoming ) /*0x77c69a*/
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(incoming + 4)); /*0x77c6a0*/
      if ( !result ) /*0x77c6a8*/
        return (**v11)(v11, 1); /*0x77c6b2*/
    }
  }
  else
  {
LABEL_4:
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x14))(a1); /*0x77c618*/
    v8 = a4; /*0x77c621*/
    v9 = (_DWORD *)v7; /*0x77c628*/
    if ( a4 ) /*0x77c62e*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x77c634*/
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(a1, v9, incoming); /*0x77c647*/
    result = *(int **)(a1 + 8); /*0x77c649*/
    *v9 = result[v5]; /*0x77c64f*/
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v5) = v9; /*0x77c654*/
    ++*(_DWORD *)(a1 + 0xC); /*0x77c657*/
    if ( v8 ) /*0x77c65d*/
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x77c663*/
      if ( !result ) /*0x77c66b*/
        return (**(int *(__thiscall ***)(int, int))v8)(v8, 1); /*0x77c675*/
    }
  }
  return result; /*0x77c677*/
}
