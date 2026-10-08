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
  const void *v27; // esi
  _BYTE *v28; // eax
  bool v29; // zf
  __int16 v30; // [esp+Ch] [ebp-10h] BYREF
  int v31; // [esp+10h] [ebp-Ch] BYREF
  _RTL_CRITICAL_SECTION_0 *v32; // [esp+14h] [ebp-8h]
  unsigned __int16 *v33; // [esp+18h] [ebp-4h]

  v7 = a2; /*0x735a75*/
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 8))(a2, 1); /*0x735a85*/
  *(_DWORD *)a7 = 1; /*0x735a9d*/
  v9 = (void (__cdecl *)(_DWORD *, __int16 *, int, int *, int))v7[1]; /*0x735aa3*/
  a7 = 2; /*0x735aa7*/
  v9(v7, &v30, 2, &a7, 1); /*0x735aab*/
  if ( v30 != 0x1DA ) /*0x735ab7*/
    return 0; /*0x735ac1*/
  v11 = (void (__cdecl *)(_DWORD *, _DWORD **, int, int *, int))v7[1]; /*0x735ac4*/
  a7 = 1; /*0x735ad7*/
  v11(v7, &a2, 1, &a7, 1); /*0x735adf*/
  v12 = this + 4; /*0x735ae4*/
  EnterCriticalSection(this + 4); /*0x735aeb*/
  CurrentThreadId = GetCurrentThreadId(); /*0x735af1*/
  ++*((_DWORD *)this + 0x3F); /*0x735afc*/
  *((_DWORD *)this + 0x3E) = CurrentThreadId; /*0x735b05*/
  v14 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1]; /*0x735b10*/
  a7 = 1; /*0x735b14*/
  v14(v7, (char *)this + 0x106, 1, &a7, 1); /*0x735b18*/
  v15 = (void (__cdecl *)(_DWORD *, __int16 *, int, int *, int))v7[1]; /*0x735b1a*/
  a7 = 2; /*0x735b2b*/
  v15(v7, &v30, 2, &a7, 1); /*0x735b2f*/
  v16 = (void (__cdecl *)(_DWORD *, _RTL_CRITICAL_SECTION_0 *, int, int *, int))v7[1]; /*0x735b31*/
  a7 = 2; /*0x735b44*/
  v32 = this + 8; /*0x735b48*/
  v16(v7, this + 8, 2, &a7, 1); /*0x735b4c*/
  v17 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1]; /*0x735b4e*/
  a7 = 2; /*0x735b61*/
  v33 = (unsigned __int16 *)this + 0x81; /*0x735b68*/
  v17(v7, (char *)this + 0x102, 2, &a7, 1); /*0x735b6c*/
  v18 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v7[1]; /*0x735b6e*/
  a7 = 2; /*0x735b7b*/
  v18(v7, (char *)this + 0x104, 2, &a7, 1); /*0x735b89*/
  v19 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v7[1]; /*0x735b8b*/
  a7 = 4; /*0x735b9c*/
  v19(v7, &v31, 4, &a7, 1); /*0x735ba5*/
  v20 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v7[1]; /*0x735ba7*/
  a7 = 4; /*0x735bb9*/
  v20(v7, &v31, 4, &a7, 1); /*0x735bc1*/
  (*(void (__thiscall **)(_DWORD *, int, int))(*v7 + 0xC))(v7, 0x54, BSFile_FilePos_Cur); /*0x735bd5*/
  v21 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v7[1]; /*0x735bd7*/
  a7 = 4; /*0x735be9*/
  v21(v7, &v31, 4, &a7, 1); /*0x735bf1*/
  (*(void (__thiscall **)(_DWORD *, int, int))(*v7 + 0xC))(v7, 0x194, BSFile_FilePos_Cur); /*0x735c09*/
  if ( (_BYTE)a2 == 1 ) /*0x735c13*/
  {
    *((_BYTE *)this + 0x107) = 1; /*0x735c15*/
  }
  else
  {
    if ( (_BYTE)a2 ) /*0x735c1f*/
      goto LABEL_16; /*0x735c1f*/
    *((_BYTE *)this + 0x107) = 0; /*0x735c25*/
  }
  v22 = *((_WORD *)this + 0x82); /*0x735c2b*/
  if ( v22 <= 4u ) /*0x735c32*/
  {
    v23 = *((_BYTE *)this + 0x106); /*0x735c34*/
    if ( v23 <= 2u ) /*0x735c3c*/
    {
      if ( v23 ) /*0x735c40*/
      {
        if ( v22 == 4 || (v24 = &unk_B25E48, v22 == 2) ) /*0x735c51*/
          v24 = &unk_B25E00; /*0x735c53*/
        v25 = (char *)this + 0x108; /*0x735c58*/
        qmemcpy((char *)this + 0x108, v24, 0x44u); /*0x735c65*/
        v26 = a5; /*0x735c72*/
        *a3 = LOWORD(v32->DebugInfo); /*0x735c76*/
        *a4 = *v33; /*0x735c83*/
        v27 = v25; /*0x735c85*/
        v28 = a6; /*0x735c87*/
        qmemcpy(v26, v27, 0x44u); /*0x735c90*/
        *v28 = 0; /*0x735c92*/
        v29 = HIDWORD(v12[3].SpinCount)-- == 1; /*0x735c94*/
        if ( v29 ) /*0x735c98*/
          LODWORD(v12[3].SpinCount) = 0; /*0x735c9a*/
        LeaveCriticalSection(v12); /*0x735c9e*/
        return 1; /*0x735cad*/
      }
    }
  }
LABEL_16:
  v29 = (*((_DWORD *)this + 0x3F))-- == 1; /*0x735cb0*/
  if ( v29 ) /*0x735cb4*/
    *((_DWORD *)this + 0x3E) = 0; /*0x735cb6*/
  LeaveCriticalSection(this + 4); /*0x735cba*/
  return 0; /*0x735ab9*/
}
