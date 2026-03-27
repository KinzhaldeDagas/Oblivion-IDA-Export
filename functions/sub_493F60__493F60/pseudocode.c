unsigned int *__usercall sub_493F60@<eax>(int a1@<ebp>, int a2@<edi>, _DWORD *a3, signed int a4, signed int a5)
{
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  void (__cdecl *v8)(_DWORD *, int *, int, signed int *, int); // edx
  int v9; // ebp
  unsigned int v10; // ebp
  int v11; // eax
  void (__cdecl *v12)(_DWORD *, int, unsigned int, signed int *, int); // ecx
  unsigned int v13; // edi
  char *v14; // ecx
  _BYTE *v15; // eax
  unsigned __int16 *v16; // eax
  void (__thiscall *v17)(_DWORD *, int); // edx
  unsigned int *v18; // eax
  unsigned int *v19; // edi
  void (__cdecl *v20)(_DWORD *, unsigned int *, unsigned int, signed int *, int); // ecx
  unsigned int *v21; // ebp
  int v24; // [esp+14h] [ebp-8h] BYREF
  unsigned int v25; // [esp+18h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+1Ch] [ebp+0h]

  if ( !a3 )
    return 0;
  v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*a3 + 0x18))(a3, 1, 0) == 0;
  v6 = *a3;
  if ( v5 )
  {
    (*(void (__thiscall **)(_DWORD *, int))v6)(a3, 1);
    return 0;
  }
  v7 = (*(int (__thiscall **)(_DWORD *, int))(v6 + 0x1C))(a3, a2);
  v8 = (void (__cdecl *)(_DWORD *, int *, int, signed int *, int))a3[1];
  v9 = v7;
  a4 = 1;
  v8(a3, &v24, 0xC, &a4, 1);
  if ( v24 == 1 )
  {
    v10 = v9 - 0xC;
  }
  else
  {
    v10 = v9 - 1;
    (*(void (__thiscall **)(_DWORD *, int, int, int))(*a3 + 0xC))(a3, 1, BSFile_FilePos_Beg, a1);
    v11 = FormHeapAlloc(v10);
    v12 = (void (__cdecl *)(_DWORD *, int, unsigned int, signed int *, int))a3[1];
    v13 = v11;
    a5 = 1;
    v12(a3, v11, v10, &a5, 1);
    v14 = 0;
    if ( v13 < v13 + v10 )
    {
      v15 = (_BYTE *)v13;
      do
      {
        if ( *v15 )
        {
          ++v14;
          ++v15;
        }
        else
        {
          v16 = (unsigned __int16 *)(v15 + 1);
          v14 += *v16;
          v15 = v16 + 1;
        }
      }
      while ( (unsigned int)v15 < v13 + v10 );
    }
    v17 = *(void (__thiscall **)(_DWORD *, int))(*a3 + 0xC);
    retaddr = v14;
    v25 = 1;
    v17(a3, 1);
    FormHeapFree(v13);
  }
  v18 = (unsigned int *)FormHeapAlloc(v25 + 0x10);
  v19 = v18;
  if ( ((unsigned __int8)retaddr & 1) != 0 )
  {
    sub_493ED0((int)a3, v18, v10);
  }
  else
  {
    v20 = (void (__cdecl *)(_DWORD *, unsigned int *, unsigned int, signed int *, int))a3[1];
    a4 = 1;
    v20(a3, v18, v25, &a4, 1);
  }
  v21 = sub_493BD0(v19, v25);
  (*(void (__thiscall **)(_DWORD *, int))*a3)(a3, 1);
  FormHeapFree((unsigned int)v19);
  return v21;
}
