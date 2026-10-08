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

  if ( !a3 ) /*0x493f6b*/
    return 0; /*0x493f6b*/
  v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*a3 + 0x18))(a3, 1, 0) == 0; /*0x493f82*/
  v6 = *a3; /*0x493f84*/
  if ( v5 ) /*0x493f88*/
  {
    (*(void (__thiscall **)(_DWORD *, int))v6)(a3, 1); /*0x4940b0*/
    return 0; /*0x4940b3*/
  }
  v7 = (*(int (__thiscall **)(_DWORD *, int))(v6 + 0x1C))(a3, a2); /*0x493f93*/
  v8 = (void (__cdecl *)(_DWORD *, int *, int, signed int *, int))a3[1]; /*0x493f95*/
  v9 = v7; /*0x493f99*/
  a4 = 1; /*0x493fa8*/
  v8(a3, &v24, 0xC, &a4, 1); /*0x493fac*/
  if ( v24 == 1 ) /*0x493fb5*/
  {
    v10 = v9 - 0xC; /*0x49403b*/
  }
  else
  {
    v10 = v9 - 1; /*0x493fca*/
    (*(void (__thiscall **)(_DWORD *, int, int, int))(*a3 + 0xC))(a3, 1, BSFile_FilePos_Beg, a1); /*0x493fcc*/
    v11 = FormHeapAlloc(v10); /*0x493fcf*/
    v12 = (void (__cdecl *)(_DWORD *, int, unsigned int, signed int *, int))a3[1]; /*0x493fd4*/
    v13 = v11; /*0x493fd7*/
    a5 = 1; /*0x493fe2*/
    v12(a3, v11, v10, &a5, 1); /*0x493fe6*/
    v14 = 0; /*0x493fee*/
    if ( v13 < v13 + v10 ) /*0x493ff2*/
    {
      v15 = (_BYTE *)v13; /*0x493ff4*/
      do /*0x494012*/
      {
        if ( *v15 ) /*0x493ff6*/
        {
          ++v14; /*0x493ffb*/
          ++v15; /*0x493ffd*/
        }
        else
        {
          v16 = (unsigned __int16 *)(v15 + 1); /*0x494001*/
          v14 += *v16; /*0x494006*/
          v15 = v16 + 1; /*0x494008*/
        }
      }
      while ( (unsigned int)v15 < v13 + v10 ); /*0x494012*/
    }
    v17 = *(void (__thiscall **)(_DWORD *, int))(*a3 + 0xC); /*0x49401b*/
    retaddr = v14; /*0x49401f*/
    v25 = 1; /*0x494026*/
    v17(a3, 1); /*0x49402e*/
    FormHeapFree(v13); /*0x494031*/
  }
  v18 = (unsigned int *)FormHeapAlloc(v25 + 0x10); /*0x494046*/
  v19 = v18; /*0x494052*/
  if ( ((unsigned __int8)retaddr & 1) != 0 ) /*0x494054*/
  {
    sub_493ED0((int)a3, v18, v10); /*0x49405e*/
  }
  else
  {
    v20 = (void (__cdecl *)(_DWORD *, unsigned int *, unsigned int, signed int *, int))a3[1]; /*0x49406c*/
    a4 = 1; /*0x494078*/
    v20(a3, v18, v25, &a4, 1); /*0x49407c*/
  }
  v21 = sub_493BD0(v19, v25); /*0x49408c*/
  (*(void (__thiscall **)(_DWORD *, int))*a3)(a3, 1); /*0x494098*/
  FormHeapFree((unsigned int)v19); /*0x49409b*/
  return v21; /*0x4940a7*/
}
