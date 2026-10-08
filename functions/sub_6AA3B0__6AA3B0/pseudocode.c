LONG __userpurge sub_6AA3B0@<eax>(_DWORD *a1@<ecx>, int a2, int a3, int a4)
{
  int (__thiscall *v5)(_DWORD *, int); // edx
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // ebx
  _DWORD *v9; // edi
  LONG result; // eax
  _DWORD v11[6]; // [esp+4h] [ebp-24h] BYREF
  _DWORD *v12; // [esp+1Ch] [ebp-Ch]
  unsigned int v13; // [esp+24h] [ebp-4h]

  v5 = *(int (__thiscall **)(_DWORD *, int))(*a1 + 4); /*0x6aa3dd*/
  v13 = 0; /*0x6aa3e1*/
  v6 = v5(a1, a2); /*0x6aa3eb*/
  v7 = *(_DWORD **)(a1[2] + 4 * v6); /*0x6aa3f0*/
  if ( v7 ) /*0x6aa3f5*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 8))(a1, a2, v7[1]) ) /*0x6aa407*/
    {
      v7 = (_DWORD *)*v7; /*0x6aa40d*/
      if ( !v7 ) /*0x6aa411*/
        goto LABEL_4; /*0x6aa411*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*a1 + 0x10))(a1, v7, v11[0]); /*0x6aa49c*/
    v8 = a4; /*0x6aa49e*/
    v12 = v11; /*0x6aa4a7*/
    v11[0] = a4; /*0x6aa4ab*/
    if ( a4 ) /*0x6aa4ad*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x6aa4b3*/
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 0xC))(a1, v7, a3); /*0x6aa4c6*/
  }
  else
  {
LABEL_4:
    v8 = a4; /*0x6aa413*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x14))(a1, v11[0]); /*0x6aa423*/
    v12 = v11; /*0x6aa427*/
    v11[0] = a4; /*0x6aa42b*/
    if ( a4 ) /*0x6aa42d*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x6aa433*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 0xC))(a1, v9, a3); /*0x6aa446*/
    result = a1[2]; /*0x6aa448*/
    *v9 = *(_DWORD *)(result + 4 * v6); /*0x6aa44e*/
    *(_DWORD *)(a1[2] + 4 * v6) = v9; /*0x6aa453*/
    ++a1[3]; /*0x6aa456*/
  }
  v13 = 0xFFFFFFFF; /*0x6aa45c*/
  if ( v8 ) /*0x6aa464*/
  {
    result = InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x6aa46a*/
    if ( !result ) /*0x6aa472*/
      return (**(LONG (__thiscall ***)(int, int))v8)(v8, 1); /*0x6aa47c*/
  }
  return result; /*0x6aa47e*/
}
