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

  *(_DWORD *)(a3 + a1) = *(_DWORD *)(a3 + a1); /*0x736559*/
  *(_BYTE *)(a6 + 0x50) += (_BYTE)a2; /*0x73655d*/
  v57 = a6; /*0x736561*/
  a2(); /*0x736565*/
  v13 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1]; /*0x736567*/
  v57 = a6; /*0x736578*/
  v13(a5, &v52, a6, &v57, 1); /*0x73657c*/
  v14 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1]; /*0x73657e*/
  v57 = a6; /*0x73658f*/
  v14(a5, &v52, a6, &v57, 1); /*0x736596*/
  if ( ((unsigned int)&loc_800000 & v54) != 0 && v52 ) /*0x7365aa*/
  {
    v15 = HIDWORD(a7[3].SpinCount)-- == 1; /*0x7365ac*/
    if ( v15 ) /*0x7365b0*/
      LODWORD(a7[3].SpinCount) = 0; /*0x7365b2*/
    LeaveCriticalSection(a7); /*0x7365ba*/
    return 0; /*0x7365cc*/
  }
  v17 = (void (__cdecl *)(_DWORD *, _DWORD *, int, int *, int))a5[1]; /*0x7365cf*/
  v57 = a6; /*0x7365e0*/
  v17(a5, v61, a6, &v57, 1); /*0x7365e4*/
  v18 = *(void (__thiscall **)(_DWORD *, int))(*a5 + 0xC); /*0x7365ef*/
  v48 = BSFile_FilePos_Cur; /*0x7365f5*/
  v18(a5, 0x2C); /*0x7365fa*/
  v19 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1]; /*0x7365fc*/
  v56[0] = a6; /*0x73660d*/
  v19(a5, &v51, a6, v56, 1); /*0x736611*/
  v20 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a5[1]; /*0x736613*/
  v56[0] = a6; /*0x736624*/
  v20(a5, &v53, a6, v56, 1); /*0x736628*/
  v21 = (void (__cdecl *)(_DWORD *, unsigned int *, int, int *, int))a5[1]; /*0x73662a*/
  v56[0] = a6; /*0x73663b*/
  v21(a5, &v58, a6, v56, 1); /*0x73663f*/
  v22 = v53; /*0x736641*/
  v15 = (v53 & 4) == 0; /*0x736648*/
  *(_BYTE *)(a4 + 0x10C) = 0; /*0x73664a*/
  if ( !v15 ) /*0x736651*/
  {
    if ( v58 <= 0x31545844 ) /*0x736660*/
    {
      if ( v58 != 0x31545844 ) /*0x736662*/
      {
        switch ( v58 ) /*0x736670*/
        {
          case 'o': /*0x736670*/
            v23 = &unk_B261F0; /*0x736677*/
            goto LABEL_21; /*0x73667c*/
          case 'p': /*0x736670*/
            v23 = &unk_B26160; /*0x73667e*/
            goto LABEL_21; /*0x736683*/
          case 'q': /*0x736670*/
            v23 = &unk_B260D0; /*0x736685*/
            goto LABEL_21; /*0x73668a*/
          case 'r': /*0x736670*/
            v23 = &unk_B26118; /*0x73668c*/
            goto LABEL_21; /*0x736691*/
          case 's': /*0x736670*/
            v23 = &unk_B261A8; /*0x736693*/
            goto LABEL_21; /*0x736698*/
          case 't': /*0x736670*/
            v23 = &unk_B26088; /*0x73669a*/
            goto LABEL_21; /*0x73669f*/
          default:
            goto LABEL_44;
        }
      }
      v23 = &unk_B25FB0; /*0x7366a1*/
      goto LABEL_21; /*0x7366a6*/
    }
    if ( v58 == 0x33545844 ) /*0x7366ad*/
    {
      v23 = &unk_B25FF8; /*0x7366c1*/
      goto LABEL_21; /*0x7366c1*/
    }
    if ( v58 == 0x35545844 ) /*0x7366b4*/
    {
      v23 = &unk_B26040; /*0x7366ba*/
LABEL_21:
      qmemcpy((void *)(a4 + 0x110), v23, 0x44u); /*0x7366d3*/
      qmemcpy(a9, (const void *)(a4 + 0x110), 0x44u); /*0x7366e3*/
      (*(void (__thiscall **)(_DWORD *, int, int))(*a5 + 0xC))(a5, 0x14, BSFile_FilePos_Cur); /*0x7366f6*/
      goto LABEL_28; /*0x7366f8*/
    }
LABEL_44:
    JUMPOUT(0x736914); /*0x736914*/
  }
  if ( (v22 & 0x40) == 0 ) /*0x7366ff*/
    goto LABEL_44; /*0x7366ff*/
  sub_6ED6A0((int)a5, (int)&v59); /*0x73670b*/
  sub_6ED6A0((int)a5, (int)v56); /*0x736716*/
  sub_6ED6A0((int)a5, (int)&v55); /*0x736721*/
  sub_6ED6A0((int)a5, (int)&v54); /*0x73672c*/
  sub_6ED6A0((int)a5, (int)&v50); /*0x736737*/
  if ( (v53 & 1) != 0 ) /*0x736744*/
  {
    v24 = v50; /*0x73674e*/
  }
  else
  {
    v24 = 0; /*0x736746*/
    v50 = 0; /*0x736748*/
  }
  v25 = v59; /*0x736752*/
  if ( !sub_7362C0(v56[0], v55, v54, v24, v59) ) /*0x736769*/
    goto LABEL_44; /*0x736770*/
  v27 = sub_70F360((int)&v60, v25, v56[0], v55, v54, v26); /*0x73678c*/
  qmemcpy(a9, v27, 0x44u); /*0x7367a1*/
  qmemcpy((void *)(a4 + 0x110), v27, 0x44u); /*0x7367b3*/
  sub_70F010(&v31, a9); /*0x7367b8*/
  qmemcpy( /*0x7367da*/
    a9,
    sub_7362E0(&v60, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47),
    0x44u);
LABEL_28:
  sub_6ED6A0((int)a5, (int)&v55); /*0x7367dc*/
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
    (*(void (__thiscall **)(_DWORD *, int, int))(*a5 + 0xC))(a5, 0xC, BSFile_FilePos_Cur); /*0x736888*/
    *(_DWORD *)v61[0xE] = *(_DWORD *)(a4 + 0x104); /*0x736897*/
    *(_DWORD *)v61[0xF] = *(_DWORD *)(a4 + 0x100); /*0x7368a6*/
    if ( (v53 & 8) != 0 && (v53 & 0x400000) != 0 && (v28 = v57, v57 != 1) ) /*0x7368be*/
    {
      *v62 = 1; /*0x7368c7*/
      v29 = (_RTL_CRITICAL_SECTION_0 *)v48; /*0x7368ca*/
      *(_DWORD *)(a4 + 0x108) = v28; /*0x7368ce*/
      sub_43F300(v29); /*0x7368d4*/
      return 1; /*0x7368d9*/
    }
    else
    {
      v30 = (_RTL_CRITICAL_SECTION_0 *)v48; /*0x7368ef*/
      *v62 = 0; /*0x7368f3*/
      *(_DWORD *)(a4 + 0x108) = 1; /*0x7368f6*/
      sub_43F300(v30); /*0x736900*/
      return 1; /*0x736905*/
    }
  }
  else
  {
    sub_43F300(v49); /*0x7367fd*/
    return 0; /*0x736802*/
  }
}
