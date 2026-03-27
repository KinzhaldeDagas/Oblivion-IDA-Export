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

  v7 = a2;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 0);
  *(_DWORD *)a7 = 1;
  v9 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 2;
  v9(v7, &a2, 2, &a7, 1);
  if ( (_WORD)a2 != 0x4D42 )
    return 0;
  EnterCriticalSection(this + 4);
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)this + 0x3F);
  *((_DWORD *)this + 0x3E) = CurrentThreadId;
  v12 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v12(v7, v35, 4, &a7, 1);
  v13 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 2;
  v13(v7, &a2, 2, &a7, 1);
  v14 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 2;
  v14(v7, &a2, 2, &a7, 1);
  v15 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v15(v7, (char *)this + 0x154, 4, &a7, 1);
  v16 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v16(v7, &v37, 4, &a7, 1);
  v17 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v17(v7, &v39, 4, &a7, 1);
  v18 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v18(v7, &v40, 4, &a7, 1);
  a7 = 2;
  (*(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4))(v7, &a2, 2, &a7, 1);
  v19 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 4);
  a7 = 2;
  v19(v7, (char *)this + 0x14C, 2, &a7, 1);
  v20 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v20(v7, &v38, 4, &a7, 1);
  v21 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v21(v7, v35, 4, &a7, 1);
  v22 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v22(v7, &v36, 4, &a7, 1);
  v23 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v23(v7, &v36, 4, &a7, 1);
  v24 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v24(v7, (char *)this + 0x150, 4, &a7, 1);
  v25 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 4);
  a7 = 4;
  v25(v7, v35, 4, &a7, 1);
  if ( v37 == 4 )
    goto LABEL_17;
  a7 = *((unsigned __int16 *)this + 0xA6);
  v41 = (unsigned __int16)a7;
  switch ( (__int16)a7 )
  {
    case 4:
    case 8:
      v26 = &unk_B25D70;
      break;
    case 0x18:
      v26 = &unk_B25E48;
      break;
    case 0x20:
      v26 = &unk_B25E00;
      break;
    default:
      goto LABEL_17;
  }
  v27 = v38;
  v28 = v38 == 2;
  qmemcpy((char *)this + 0x108, v26, 0x44u);
  if ( v28 || v27 == 1 )
  {
LABEL_17:
    v28 = (*((_DWORD *)this + 0x3F))-- == 1;
    if ( v28 )
      *((_DWORD *)this + 0x3E) = 0;
    LeaveCriticalSection(this + 4);
    return 0;
  }
  else
  {
    v29 = v40;
    v30 = v39;
    v31 = v40 >= 0;
    v32 = v40 <= 0;
    *((_DWORD *)this + 0x40) = v39;
    *((_BYTE *)this + 0x158) = v31;
    if ( v32 )
      v29 = -v29;
    v28 = *((_DWORD *)this + 0x54) == 0;
    *((_DWORD *)this + 0x41) = v29;
    if ( v28 && (_WORD)a7 != 0x18 && (_WORD)a7 != 0x20 )
      *((_DWORD *)this + 0x54) = 1 << v41;
    v33 = a5;
    *a3 = v30;
    *a4 = *((_DWORD *)this + 0x41);
    v34 = a6;
    qmemcpy(v33, (char *)this + 0x108, 0x44u);
    *v34 = 1;
    sub_43F300(this + 4);
    return 1;
  }
}
