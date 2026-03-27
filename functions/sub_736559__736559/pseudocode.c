// positive sp value has been detected, the output may be wrong!
char __userpurge sub_736559@<al>(
        int a1@<eax>,
        void (*a2)(void)@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        _DWORD *a5@<ebp>,
        int a6@<edi>,
        _RTL_CRITICAL_SECTION_0 *a7@<esi>,
        int a8,
        _DWORD *a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  void (__cdecl *v13)(_DWORD *, int *, int, int *, int); // edx
  void (__cdecl *v14)(_DWORD *, int *, int, int *, int); // edx
  bool v15; // zf
  void (__cdecl *v17)(_DWORD *, _DWORD *, int, int *, int); // edx
  void (__thiscall *v18)(_DWORD *, int); // edx
  void (__cdecl *v19)(_DWORD *, int *, int, int *, int); // edx
  void (__cdecl *v20)(_DWORD *, int *, int, int *, int); // edx
  void (__cdecl *v21)(_DWORD *, unsigned int *, int, int *, int); // edx
  char v22; // al
  const void *v23; // esi
  int v24; // edx
  int v25; // edi
  int v26; // edx
  _BYTE *v27; // eax
  int v28; // eax
  _RTL_CRITICAL_SECTION_0 *v29; // ecx
  _RTL_CRITICAL_SECTION_0 *v30; // ecx
  __int16 v31; // [esp-D8h] [ebp-DCh] BYREF
  int v32; // [esp-D4h] [ebp-D8h]
  int v33; // [esp-D0h] [ebp-D4h]
  int v34; // [esp-CCh] [ebp-D0h]
  int v35; // [esp-C8h] [ebp-CCh]
  int v36; // [esp-C4h] [ebp-C8h]
  int v37; // [esp-C0h] [ebp-C4h]
  int v38; // [esp-BCh] [ebp-C0h]
  int v39; // [esp-B8h] [ebp-BCh]
  int v40; // [esp-B4h] [ebp-B8h]
  int v41; // [esp-B0h] [ebp-B4h]
  int v42; // [esp-ACh] [ebp-B0h]
  int v43; // [esp-A8h] [ebp-ACh]
  int v44; // [esp-A4h] [ebp-A8h]
  int v45; // [esp-A0h] [ebp-A4h]
  int v46; // [esp-9Ch] [ebp-A0h]
  int v47; // [esp-98h] [ebp-9Ch]
  int v48; // [esp-90h] [ebp-94h]
  LPCRITICAL_SECTION v49; // [esp-88h] [ebp-8Ch]
  int v50; // [esp-84h] [ebp-88h] BYREF
  int v51; // [esp-7Ch] [ebp-80h] BYREF
  int v52; // [esp-74h] [ebp-78h] BYREF
  int v53; // [esp-70h] [ebp-74h] BYREF
  unsigned int v54; // [esp-6Ch] [ebp-70h] BYREF
  unsigned int v55; // [esp-68h] [ebp-6Ch] BYREF
  int v56[2]; // [esp-64h] [ebp-68h] BYREF
  int v57; // [esp-5Ch] [ebp-60h] BYREF
  unsigned int v58; // [esp-58h] [ebp-5Ch] BYREF
  int v59; // [esp-54h] [ebp-58h] BYREF
  int v60; // [esp-48h] [ebp-4Ch] BYREF
  _DWORD v61[17]; // [esp-44h] [ebp-48h] BYREF
  _BYTE *v62; // [esp+0h] [ebp-4h]

  *(_DWORD *)(a3 + a1) = *(_DWORD *)(a3 + a1);
  *(_BYTE *)(a6 + 0x50) += (_BYTE)a2;
  v57 = a6;
  a2();
  v13 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1];
  v57 = a6;
  v13(a5, &v52, a6, &v57, 1);
  v14 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1];
  v57 = a6;
  v14(a5, &v52, a6, &v57, 1);
  if ( ((unsigned int)&loc_800000 & v54) != 0 && v52 )
  {
    v15 = HIDWORD(a7[3].SpinCount)-- == 1;
    if ( v15 )
      LODWORD(a7[3].SpinCount) = 0;
    LeaveCriticalSection(a7);
    return 0;
  }
  v17 = (void (__cdecl *)(_DWORD *, _DWORD *, int, int *, int))a5[1];
  v57 = a6;
  v17(a5, v61, a6, &v57, 1);
  v18 = *(void (__thiscall **)(_DWORD *, int))(*a5 + 0xC);
  v48 = BSFile_FilePos_Cur;
  v18(a5, 0x2C);
  v19 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1];
  v56[0] = a6;
  v19(a5, &v51, a6, v56, 1);
  v20 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1];
  v56[0] = a6;
  v20(a5, &v53, a6, v56, 1);
  v21 = (void (__cdecl *)(_DWORD *, unsigned int *, int, int *, int))a5[1];
  v56[0] = a6;
  v21(a5, &v58, a6, v56, 1);
  v22 = v53;
  v15 = (v53 & 4) == 0;
  *(_BYTE *)(a4 + 0x10C) = 0;
  if ( !v15 )
  {
    if ( v58 <= 0x31545844 )
    {
      if ( v58 != 0x31545844 )
      {
        switch ( v58 )
        {
          case 'o':
            v23 = &unk_B261F0;
            goto LABEL_21;
          case 'p':
            v23 = &unk_B26160;
            goto LABEL_21;
          case 'q':
            v23 = &unk_B260D0;
            goto LABEL_21;
          case 'r':
            v23 = &unk_B26118;
            goto LABEL_21;
          case 's':
            v23 = &unk_B261A8;
            goto LABEL_21;
          case 't':
            v23 = &unk_B26088;
            goto LABEL_21;
          default:
            goto LABEL_44;
        }
      }
      v23 = &unk_B25FB0;
      goto LABEL_21;
    }
    if ( v58 == 0x33545844 )
    {
      v23 = &unk_B25FF8;
      goto LABEL_21;
    }
    if ( v58 == 0x35545844 )
    {
      v23 = &unk_B26040;
LABEL_21:
      qmemcpy((void *)(a4 + 0x110), v23, 0x44u);
      qmemcpy(a9, (const void *)(a4 + 0x110), 0x44u);
      (*(void (__thiscall **)(_DWORD *, int, int))(*a5 + 0xC))(a5, 0x14, BSFile_FilePos_Cur);
      goto LABEL_28;
    }
LABEL_44:
    JUMPOUT(0x736914);
  }
  if ( (v22 & 0x40) == 0 )
    goto LABEL_44;
  sub_6ED6A0((int)a5, (int)&v59);
  sub_6ED6A0((int)a5, (int)v56);
  sub_6ED6A0((int)a5, (int)&v55);
  sub_6ED6A0((int)a5, (int)&v54);
  sub_6ED6A0((int)a5, (int)&v50);
  if ( (v53 & 1) != 0 )
  {
    v24 = v50;
  }
  else
  {
    v24 = 0;
    v50 = 0;
  }
  v25 = v59;
  if ( !sub_7362C0(v56[0], v55, v54, v24, v59) )
    goto LABEL_44;
  v27 = sub_70F360((int)&v60, v25, v56[0], v55, v54, v26);
  qmemcpy(a9, v27, 0x44u);
  qmemcpy((void *)(a4 + 0x110), v27, 0x44u);
  sub_70F010(&v31, a9);
  qmemcpy(
    a9,
    sub_7362E0(&v60, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47),
    0x44u);
LABEL_28:
  sub_6ED6A0((int)a5, (int)&v55);
  if ( ((v55 & 8) != 0 || ((unsigned int)NiInitalizeCriticalSection & v55) != 0)
    && (sub_6ED6A0((int)a5, (int)&v58), (v58 & 0x200000) == 0)
    && ((v58 & 0x200) == 0
     || (v58 & 0x400) != 0
     && (v58 & 0x800) != 0
     && (v58 & 0x1000) != 0
     && (v58 & 0x2000) != 0
     && (v58 & 0x4000) != 0
     && (v58 & 0x8000) != 0) )
  {
    *a9 = (v58 & 0x200) != 0 ? 6 : 1;
    (*(void (__thiscall **)(_DWORD *, int, int))(*a5 + 0xC))(a5, 0xC, BSFile_FilePos_Cur);
    *(_DWORD *)v61[0xE] = *(_DWORD *)(a4 + 0x104);
    *(_DWORD *)v61[0xF] = *(_DWORD *)(a4 + 0x100);
    if ( (v53 & 8) != 0 && (v53 & 0x400000) != 0 && (v28 = v57, v57 != 1) )
    {
      *v62 = 1;
      v29 = (_RTL_CRITICAL_SECTION_0 *)v48;
      *(_DWORD *)(a4 + 0x108) = v28;
      sub_43F300(v29);
      return 1;
    }
    else
    {
      v30 = (_RTL_CRITICAL_SECTION_0 *)v48;
      *v62 = 0;
      *(_DWORD *)(a4 + 0x108) = 1;
      sub_43F300(v30);
      return 1;
    }
  }
  else
  {
    sub_43F300(v49);
    return 0;
  }
}
