char __thiscall sub_735A70(
        _RTL_CRITICAL_SECTION_0 *this,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        char *a5,
        _BYTE *a6,
        int a7)
{
  _DWORD *v7; // esi
  void (__cdecl *v9)(_DWORD *, __int16 *, int, int *, int); // eax
  void (__cdecl *v11)(_DWORD *, _DWORD **, int, int *, int); // eax
  _RTL_CRITICAL_SECTION_0 *v12; // ebp
  DWORD CurrentThreadId; // eax
  void (__cdecl *v14)(_DWORD *, char *, int, int *, int); // eax
  void (__cdecl *v15)(_DWORD *, __int16 *, int, int *, int); // eax
  void (__cdecl *v16)(_DWORD *, _RTL_CRITICAL_SECTION_0 *, int, int *, int); // edx
  void (__cdecl *v17)(_DWORD *, char *, int, int *, int); // edx
  void (__cdecl *v18)(_DWORD *, char *, int, int *, int); // ecx
  void (__cdecl *v19)(_DWORD *, int *, int, int *, int); // ecx
  void (__cdecl *v20)(_DWORD *, int *, int, int *, int); // ecx
  void (__cdecl *v21)(_DWORD *, int *, int, int *, int); // edx
  unsigned __int16 v22; // cx
  unsigned __int8 v23; // al
  const void *v24; // esi
  char *v25; // eax
  char *v26; // edi
  char *v27; // esi
  _BYTE *v28; // eax
  bool v29; // zf
  __int16 v30; // [esp+Ch] [ebp-10h] BYREF
  int v31; // [esp+10h] [ebp-Ch] BYREF
  char *v32; // [esp+14h] [ebp-8h]
  char *v33; // [esp+18h] [ebp-4h]

  v7 = a2;
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 8))(a2, 1);
  *(_DWORD *)a7 = 1;
  v9 = (void (__cdecl *)(_DWORD *, __int16 *, int, int *, int))v7[1];
  a7 = 2;
  v9(v7, &v30, 2, &a7, 1);
  if ( v30 != 0x1DA )
    return 0;
  v11 = (void (__cdecl *)(_DWORD *, _DWORD **, int, int *, int))v7[1];
  a7 = 1;
  v11(v7, &a2, 1, &a7, 1);
  v12 = this + 4;
  EnterCriticalSection(this + 4);
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)this + 0x3F);
  *((_DWORD *)this + 0x3E) = CurrentThreadId;
  v14 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1];
  a7 = 1;
  v14(v7, (char *)this + 0x106, 1, &a7, 1);
  v15 = (void (__cdecl *)(_DWORD *, __int16 *, int, int *, int))v7[1];
  a7 = 2;
  v15(v7, &v30, 2, &a7, 1);
  v16 = (void (__cdecl *)(_DWORD *, _RTL_CRITICAL_SECTION_0 *, int, int *, int))v7[1];
  a7 = 2;
  v32 = (char *)(this + 8);
  v16(v7, this + 8, 2, &a7, 1);
  v17 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1];
  a7 = 2;
  v33 = (char *)this + 0x102;
  v17(v7, (char *)this + 0x102, 2, &a7, 1);
  v18 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1];
  a7 = 2;
  v18(v7, (char *)this + 0x104, 2, &a7, 1);
  v19 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v7[1];
  a7 = 4;
  v19(v7, &v31, 4, &a7, 1);
  v20 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v7[1];
  a7 = 4;
  v20(v7, &v31, 4, &a7, 1);
  (*(void (__thiscall **)(_DWORD *, int, int))(*v7 + 0xC))(v7, 0x54, BSFile_FilePos_Cur);
  v21 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v7[1];
  a7 = 4;
  v21(v7, &v31, 4, &a7, 1);
  (*(void (__thiscall **)(_DWORD *, int, int))(*v7 + 0xC))(v7, 0x194, BSFile_FilePos_Cur);
  if ( (_BYTE)a2 == 1 )
  {
    *((_BYTE *)this + 0x107) = 1;
  }
  else
  {
    if ( (_BYTE)a2 )
      goto LABEL_16;
    *((_BYTE *)this + 0x107) = 0;
  }
  v22 = *((_WORD *)this + 0x82);
  if ( v22 <= 4u )
  {
    v23 = *((_BYTE *)this + 0x106);
    if ( v23 <= 2u )
    {
      if ( v23 )
      {
        if ( v22 == 4 || (v24 = &unk_B25E48, v22 == 2) )
          v24 = &unk_B25E00;
        v25 = (char *)this + 0x108;
        qmemcpy((char *)this + 0x108, v24, 0x44u);
        v26 = a5;
        *a3 = *(unsigned __int16 *)v32;
        *a4 = *(unsigned __int16 *)v33;
        v27 = v25;
        v28 = a6;
        qmemcpy(v26, v27, 0x44u);
        *v28 = 0;
        v29 = HIDWORD(v12[3].SpinCount)-- == 1;
        if ( v29 )
          LODWORD(v12[3].SpinCount) = 0;
        LeaveCriticalSection(v12);
        return 1;
      }
    }
  }
LABEL_16:
  v29 = (*((_DWORD *)this + 0x3F))-- == 1;
  if ( v29 )
    *((_DWORD *)this + 0x3E) = 0;
  LeaveCriticalSection(this + 4);
  return 0;
}
