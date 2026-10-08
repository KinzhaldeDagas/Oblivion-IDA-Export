char __thiscall sub_737800(
        _RTL_CRITICAL_SECTION_0 *this,
        int a2,
        int *a3,
        _DWORD *a4,
        char *a5,
        _BYTE *a6,
        signed int a7)
{
  int v7; // esi
  void (__cdecl *v9)(int, int *, int, signed int *, int); // eax
  DWORD CurrentThreadId; // eax
  void (__cdecl *v12)(int, _BYTE *, int, signed int *, int); // eax
  void (__cdecl *v13)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v14)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v15)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v16)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v17)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v18)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v19)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v20)(int, int *, int, signed int *, int); // edx
  void (__cdecl *v21)(int, _BYTE *, int, signed int *, int); // edx
  void (__cdecl *v22)(int, int *, int, signed int *, int); // edx
  void (__cdecl *v23)(int, int *, int, signed int *, int); // edx
  void (__cdecl *v24)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v25)(int, _BYTE *, int, signed int *, int); // edx
  const void *v26; // esi
  int v27; // eax
  bool v28; // zf
  int v29; // eax
  int v30; // esi
  bool v31; // cl
  bool v32; // cc
  char *v33; // edi
  _BYTE *v34; // edx
  _BYTE v35[4]; // [esp+8h] [ebp-1Ch] BYREF
  int v36; // [esp+Ch] [ebp-18h] BYREF
  int v37; // [esp+10h] [ebp-14h] BYREF
  int v38; // [esp+14h] [ebp-10h] BYREF
  int v39; // [esp+18h] [ebp-Ch] BYREF
  int v40; // [esp+1Ch] [ebp-8h] BYREF
  int v41; // [esp+20h] [ebp-4h]

  v7 = a2; /*0x737805*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 0); /*0x737814*/
  *(_DWORD *)a7 = 1; /*0x737828*/
  v9 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x73782e*/
  a7 = 2; /*0x737832*/
  v9(v7, &a2, 2, &a7, 1); /*0x73783a*/
  if ( (_WORD)a2 != 0x4D42 ) /*0x737846*/
    return 0; /*0x737849*/
  EnterCriticalSection(this + 4); /*0x73785b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x737861*/
  ++*((_DWORD *)this + 0x3F); /*0x737867*/
  *((_DWORD *)this + 0x3E) = CurrentThreadId; /*0x73787d*/
  v12 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 4); /*0x737880*/
  a7 = 4; /*0x737884*/
  v12(v7, v35, 4, &a7, 1); /*0x737888*/
  v13 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x73788a*/
  a7 = 2; /*0x73789c*/
  v13(v7, &a2, 2, &a7, 1); /*0x7378a4*/
  v14 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x7378a6*/
  a7 = 2; /*0x7378b8*/
  v14(v7, &a2, 2, &a7, 1); /*0x7378c3*/
  v15 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 4); /*0x7378c5*/
  a7 = 4; /*0x7378db*/
  v15(v7, (char *)this + 0x154, 4, &a7, 1); /*0x7378e2*/
  v16 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x7378e4*/
  a7 = 4; /*0x7378f8*/
  v16(v7, &v37, 4, &a7, 1); /*0x7378fc*/
  v17 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x7378fe*/
  a7 = 4; /*0x73790f*/
  v17(v7, &v39, 4, &a7, 1); /*0x737913*/
  v18 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x737915*/
  a7 = 4; /*0x737926*/
  v18(v7, &v40, 4, &a7, 1); /*0x73792d*/
  a7 = 2; /*0x73792f*/
  (*(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4))(v7, &a2, 2, &a7, 1); /*0x73794f*/
  v19 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 4); /*0x737951*/
  a7 = 2; /*0x737968*/
  v19(v7, (char *)this + 0x14C, 2, &a7, 1); /*0x737970*/
  v20 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x737972*/
  a7 = 4; /*0x737983*/
  v20(v7, &v38, 4, &a7, 1); /*0x737987*/
  v21 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 4); /*0x737989*/
  a7 = 4; /*0x73799a*/
  v21(v7, v35, 4, &a7, 1); /*0x7379a1*/
  v22 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x7379a3*/
  a7 = 4; /*0x7379b7*/
  v22(v7, &v36, 4, &a7, 1); /*0x7379be*/
  v23 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x7379c0*/
  a7 = 4; /*0x7379d4*/
  v23(v7, &v36, 4, &a7, 1); /*0x7379d8*/
  v24 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 4); /*0x7379da*/
  a7 = 4; /*0x7379ed*/
  v24(v7, (char *)this + 0x150, 4, &a7, 1); /*0x7379f1*/
  v25 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 4); /*0x7379f3*/
  a7 = 4; /*0x737a04*/
  v25(v7, v35, 4, &a7, 1); /*0x737a0b*/
  if ( v37 == 4 ) /*0x737a14*/
    goto LABEL_17; /*0x737a14*/
  a7 = *((unsigned __int16 *)this + 0xA6); /*0x737a21*/
  v41 = (unsigned __int16)a7; /*0x737a28*/
  switch ( (__int16)a7 ) /*0x737a3f*/
  {
    case 4: /*0x737a3f*/
    case 8: /*0x737a3f*/
      v26 = &unk_B25D70; /*0x737a46*/
      break; /*0x737a4b*/
    case 0x18: /*0x737a3f*/
      v26 = &unk_B25E48; /*0x737a4d*/
      break; /*0x737a52*/
    case 0x20: /*0x737a3f*/
      v26 = &unk_B25E00; /*0x737a54*/
      break; /*0x737a54*/
    default:
      goto LABEL_17;
  }
  v27 = v38; /*0x737a59*/
  v28 = v38 == 2; /*0x737a5d*/
  qmemcpy((char *)this + 0x108, v26, 0x44u); /*0x737a6d*/
  if ( v28 || v27 == 1 ) /*0x737a78*/
  {
LABEL_17:
    v28 = (*((_DWORD *)this + 0x3F))-- == 1; /*0x737b06*/
    if ( v28 ) /*0x737b0a*/
      *((_DWORD *)this + 0x3E) = 0; /*0x737b0c*/
    LeaveCriticalSection(this + 4); /*0x737b14*/
    return 0; /*0x737b1d*/
  }
  else
  {
    v29 = v40; /*0x737a7e*/
    v30 = v39; /*0x737a82*/
    v31 = v40 >= 0; /*0x737a88*/
    v32 = v40 <= 0; /*0x737a8b*/
    *((_DWORD *)this + 0x40) = v39; /*0x737a8d*/
    *((_BYTE *)this + 0x158) = v31; /*0x737a93*/
    if ( v32 ) /*0x737a99*/
      v29 = -v29; /*0x737a9b*/
    v28 = *((_DWORD *)this + 0x54) == 0; /*0x737a9d*/
    *((_DWORD *)this + 0x41) = v29; /*0x737aa4*/
    if ( v28 && (_WORD)a7 != 0x18 && (_WORD)a7 != 0x20 ) /*0x737aba*/
      *((_DWORD *)this + 0x54) = 1 << v41; /*0x737ac7*/
    v33 = a5; /*0x737ad1*/
    *a3 = v30; /*0x737ad5*/
    *a4 = *((_DWORD *)this + 0x41); /*0x737ae1*/
    v34 = a6; /*0x737ae5*/
    qmemcpy(v33, (char *)this + 0x108, 0x44u); /*0x737aee*/
    *v34 = 1; /*0x737af2*/
    sub_43F300(this + 4); /*0x737af5*/
    return 1; /*0x737afd*/
  }
}
