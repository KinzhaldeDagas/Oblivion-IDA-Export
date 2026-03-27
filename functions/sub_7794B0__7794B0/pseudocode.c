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

  v8 = a4;
  if ( !a4 )
    return 0;
  a1[0x15] = (*(int (__thiscall **)(_DWORD *, int, int))(*a4 + 0x4C))(a4, a3, a2);
  a1[0x16] = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x50))(v8);
  a1[0x17] = 1;
  v11 = v8[8];
  retaddr = (_UNKNOWN *)v8[6];
  v21 = (int *)(a1[2] + 0x6F4);
  a4 = (_DWORD *)v8[7];
  a5 = v11;
  v12 = (_DWORD *)sub_773960((signed int *)&retaddr, v21);
  qmemcpy(a1 + 3, v12, 0x44u);
  v13 = v12[3];
  v14 = *(_DWORD *)(a1[2] + 0x280);
  a7 = 0;
  if ( a8 )
  {
    v15 = (*(int (__stdcall **)(int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)v14 + 0x5C))(
            v14,
            a1[0x15],
            a1[0x16],
            1,
            0x200,
            v13);
    if ( v15 >= 0 )
    {
      a1[0x14] = a4;
      return v12;
    }
    goto LABEL_7;
  }
  v15 = (*(int (__stdcall **)(int, _DWORD, _DWORD, int, _DWORD, int))(*(_DWORD *)v14 + 0x5C))(
          v14,
          a1[0x15],
          a1[0x16],
          1,
          0,
          v13);
  if ( v15 < 0 )
  {
LABEL_7:
    sub_7736F0(v15);
    TESTexture::ClearComponentReferences(v16);
    a1[0x14] = 0;
    return 0;
  }
  v17 = a1[0x15];
  a1[0x14] = a4;
  v20 = a1[0x16];
  a4 = 0;
  v18 = (*(int (__stdcall **)(int, int, int, int, _DWORD, int, int, _DWORD **, _DWORD))(*(_DWORD *)v14 + 0x5C))(
          v14,
          v17,
          v20,
          1,
          0,
          v13,
          2,
          &a4,
          0);
  if ( v18 >= 0 )
  {
    a1[0x18] = a4;
    return v12;
  }
  else
  {
    sub_7736F0(v18);
    TESTexture::ClearComponentReferences(v19);
    a1[0x18] = 0;
    return 0;
  }
}
