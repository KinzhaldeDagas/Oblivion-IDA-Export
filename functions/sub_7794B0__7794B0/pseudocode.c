_DWORD *__userpurge sub_7794B0@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  _DWORD *v8; // esi
  int v11; // edx
  _DWORD *v12; // ebx
  int v13; // edi
  int v14; // esi
  signed int v15; // eax
  void *v16; // ecx
  int v17; // edx
  signed int v18; // eax
  void *v19; // ecx
  int v20; // [esp+Ch] [ebp-38h]
  int *v21; // [esp+30h] [ebp-14h]
  _UNKNOWN *retaddr; // [esp+44h] [ebp+0h] BYREF

  v8 = a4; /*0x7794b5*/
  if ( !a4 ) /*0x7794bd*/
    return 0; /*0x7794c6*/
  a1[0x15] = (*(int (__thiscall **)(_DWORD *, int, int))(*a4 + 0x4C))(a4, a3, a2); /*0x7794d4*/
  a1[0x16] = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x50))(v8); /*0x7794e0*/
  a1[0x17] = 1; /*0x7794e3*/
  v11 = v8[8]; /*0x7794f0*/
  retaddr = (_UNKNOWN *)v8[6]; /*0x7794f3*/
  v21 = (int *)(a1[2] + 0x6F4); /*0x7794ff*/
  a4 = (_DWORD *)v8[7]; /*0x779505*/
  a5 = v11; /*0x779509*/
  v12 = (_DWORD *)sub_773960((signed int *)&retaddr, v21); /*0x779512*/
  qmemcpy(a1 + 3, v12, 0x44u); /*0x77951e*/
  v13 = v12[3]; /*0x779523*/
  v14 = *(_DWORD *)(a1[2] + 0x280); /*0x779526*/
  a7 = 0; /*0x779534*/
  if ( a8 ) /*0x77953e*/
  {
    v15 = (*(int (__stdcall **)(int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)v14 + 0x5C))( /*0x77955d*/
            v14,
            a1[0x15],
            a1[0x16],
            1,
            0x200,
            v13);
    if ( v15 >= 0 ) /*0x779561*/
    {
      a1[0x14] = a4; /*0x77956c*/
      return v12; /*0x779573*/
    }
    goto LABEL_7; /*0x779561*/
  }
  v15 = (*(int (__stdcall **)(int, _DWORD, _DWORD, int, _DWORD, int))(*(_DWORD *)v14 + 0x5C))( /*0x779590*/
          v14,
          a1[0x15],
          a1[0x16],
          1,
          0,
          v13);
  if ( v15 < 0 ) /*0x779594*/
  {
LABEL_7:
    D3D9_HResultToString(v15); /*0x779596*/
    Shared_NoOpVirtual_60D0A0(v16); /*0x7795a2*/
    a1[0x14] = 0; /*0x7795ad*/
    return 0; /*0x7795ba*/
  }
  v17 = a1[0x15]; /*0x7795c8*/
  a1[0x14] = a4; /*0x7795d0*/
  v20 = a1[0x16]; /*0x7795d8*/
  a4 = 0; /*0x7795d9*/
  v18 = (*(int (__stdcall **)(int, int, int, int, _DWORD, int, int, _DWORD **, _DWORD))(*(_DWORD *)v14 + 0x5C))( /*0x7795e8*/
          v14,
          v17,
          v20,
          1,
          0,
          v13,
          2,
          &a4,
          0);
  if ( v18 >= 0 ) /*0x7795ec*/
  {
    a1[0x18] = a4; /*0x77961e*/
    return v12; /*0x77961a*/
  }
  else
  {
    D3D9_HResultToString(v18); /*0x7795ef*/
    Shared_NoOpVirtual_60D0A0(v19); /*0x7795fa*/
    a1[0x18] = 0; /*0x779605*/
    return 0; /*0x77960c*/
  }
}
