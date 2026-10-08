char __thiscall sub_735090(char *this, signed int a2, _DWORD *a3, _DWORD *a4, char *a5, _BYTE *a6, _DWORD *a7)
{
  _DWORD *v7; // esi
  DWORD CurrentThreadId; // eax
  void (__cdecl *v10)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v11)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v12)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v13)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v14)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v15)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v16)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v17)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v18)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v19)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v20)(_DWORD *, char *, int, signed int *, int); // edx
  void (__cdecl *v21)(_DWORD *, char *, int, signed int *, int); // edx
  unsigned __int8 v22; // al
  char v23; // dl
  char v24; // al
  bool v25; // al
  const void *v26; // esi
  char result; // al
  int v28; // ecx
  _DWORD *v29; // esi
  char *v30; // edi
  _BYTE *v31; // eax
  bool v32; // zf

  v7 = (_DWORD *)a2; /*0x735094*/
  (*(void (__thiscall **)(signed int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 0); /*0x7350a4*/
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x7350ad*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7350b3*/
  ++*((_DWORD *)this + 0x3F); /*0x7350be*/
  *((_DWORD *)this + 0x3E) = CurrentThreadId; /*0x7350c1*/
  *a7 = 1; /*0x7350ce*/
  v10 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x7350d0*/
  a2 = 1; /*0x7350dc*/
  v10(v7, this + 0x100, 1, &a2, 1); /*0x7350e0*/
  v11 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x7350e2*/
  a2 = 1; /*0x7350f4*/
  v11(v7, this + 0x101, 1, &a2, 1); /*0x7350f8*/
  v12 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x7350fa*/
  a2 = 1; /*0x73510c*/
  v12(v7, this + 0x102, 1, &a2, 1); /*0x735110*/
  v13 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x735112*/
  a2 = 2; /*0x735125*/
  v13(v7, this + 0x104, 2, &a2, 1); /*0x73512d*/
  v14 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x73512f*/
  a2 = 2; /*0x735145*/
  v14(v7, this + 0x106, 2, &a2, 1); /*0x73514d*/
  v15 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x73514f*/
  a2 = 1; /*0x735161*/
  v15(v7, this + 0x108, 1, &a2, 1); /*0x735165*/
  v16 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x735167*/
  a2 = 2; /*0x73517a*/
  v16(v7, this + 0x10A, 2, &a2, 1); /*0x735182*/
  v17 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x735184*/
  a2 = 2; /*0x735197*/
  v17(v7, this + 0x10C, 2, &a2, 1); /*0x73519f*/
  v18 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x7351a1*/
  a2 = 2; /*0x7351b7*/
  a7 = this + 0x10E; /*0x7351bf*/
  v18(v7, this + 0x10E, 2, &a2, 1); /*0x7351c3*/
  v19 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x7351c5*/
  a2 = 2; /*0x7351d8*/
  v19(v7, this + 0x110, 2, &a2, 1); /*0x7351e4*/
  v20 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x7351e6*/
  a2 = 1; /*0x7351f8*/
  v20(v7, this + 0x112, 1, &a2, 1); /*0x7351fc*/
  v21 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1]; /*0x7351fe*/
  a2 = 1; /*0x735210*/
  v21(v7, this + 0x113, 1, &a2, 1); /*0x735214*/
  v22 = *(this + 0x100); /*0x735216*/
  if ( v22 ) /*0x735221*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v7 + 0xC))(v7, v22, BSFile_FilePos_Cur); /*0x735235*/
  *(this + 0x117) = (*(this + 0x113) & 0x20) == 0; /*0x735244*/
  switch ( *(this + 0x102) ) /*0x73525d*/
  {
    case 1: /*0x73525d*/
      *(this + 0x116) = 1; /*0x735264*/
      *(this + 0x118) = 0; /*0x73526b*/
      goto LABEL_9; /*0x735272*/
    case 2: /*0x73525d*/
    case 3: /*0x73525d*/
      *(this + 0x118) = 0; /*0x735274*/
      goto LABEL_8; /*0x73527b*/
    case 9: /*0x73525d*/
      *(this + 0x116) = 1; /*0x73527d*/
      *(this + 0x118) = 1; /*0x735284*/
      goto LABEL_9; /*0x73528b*/
    case 0xA: /*0x73525d*/
    case 0xB: /*0x73525d*/
      *(this + 0x118) = 1; /*0x73528d*/
LABEL_8:
      *(this + 0x116) = 0; /*0x735294*/
LABEL_9:
      v23 = *(this + 0x116); /*0x73529b*/
      if ( v23 ) /*0x7352a3*/
        v24 = *(this + 0x108); /*0x7352a5*/
      else
        v24 = *(this + 0x112); /*0x7352ad*/
      v25 = v24 == 0x20; /*0x7352b5*/
      LOBYTE(a2) = v25; /*0x7352ba*/
      *(this + 0x115) = v25; /*0x7352be*/
      if ( v23 ) /*0x7352c4*/
      {
        if ( *((_WORD *)this + 0x83) == 0x10 ) /*0x7352ce*/
        {
          v26 = &unk_B25D28; /*0x7352d2*/
          if ( !v25 ) /*0x7352d7*/
            v26 = &unk_B25CE0; /*0x7352d9*/
        }
        else
        {
          v26 = &unk_B25DB8; /*0x7352e2*/
          if ( !v25 ) /*0x7352e7*/
            v26 = &unk_B25D70; /*0x7352e9*/
        }
      }
      else
      {
        v26 = &unk_B25E00; /*0x7352f2*/
        if ( !v25 ) /*0x7352f7*/
          v26 = &unk_B25E48; /*0x7352f9*/
      }
      qmemcpy(this + 0x11C, v26, 0x44u); /*0x73530b*/
      switch ( *(this + 0x112) ) /*0x735327*/
      {
        case 4: /*0x735327*/
          *(this + 0x114) = 0; /*0x735330*/
          if ( v23 ) /*0x735337*/
          {
            *((_DWORD *)this + 0x5C) = sub_7347E0; /*0x73534a*/
            goto LABEL_34; /*0x735354*/
          }
          sub_43F300((LPCRITICAL_SECTION)this + 4); /*0x73533b*/
          return 0; /*0x735347*/
        case 8: /*0x735327*/
          *(this + 0x114) = 1; /*0x735358*/
          if ( v23 ) /*0x73535f*/
            *((_DWORD *)this + 0x5C) = sub_734830; /*0x735361*/
          else
            *((_DWORD *)this + 0x5C) = sub_734870; /*0x73536d*/
          goto LABEL_34; /*0x73536b*/
        case 0xF: /*0x735327*/
        case 0x10: /*0x735327*/
          *(this + 0x114) = 2; /*0x73537b*/
          if ( v23 ) /*0x735382*/
          {
            if ( (_BYTE)a2 ) /*0x735389*/
              *((_DWORD *)this + 0x5C) = sub_734990; /*0x73538b*/
            else
              *((_DWORD *)this + 0x5C) = sub_734920; /*0x735397*/
          }
          else
          {
            *((_DWORD *)this + 0x5C) = sub_7348B0; /*0x7353a3*/
          }
          goto LABEL_34; /*0x735395*/
        case 0x18: /*0x735327*/
          *(this + 0x114) = 3; /*0x7353af*/
          *((_DWORD *)this + 0x5C) = sub_734A10; /*0x7353b6*/
          goto LABEL_34; /*0x7353c0*/
        case 0x20: /*0x735327*/
          *(this + 0x114) = 4; /*0x7353c2*/
          *((_DWORD *)this + 0x5C) = sub_734A60; /*0x7353c9*/
          goto LABEL_34; /*0x7353c9*/
        default:
LABEL_34:
          v28 = *(unsigned __int16 *)a7; /*0x7353d3*/
          v29 = a3; /*0x7353da*/
          v30 = a5; /*0x7353de*/
          *(this + 0x178) = 0; /*0x7353e2*/
          *((_DWORD *)this + 0x5D) = 0; /*0x7353eb*/
          *v29 = v28; /*0x7353f1*/
          *a4 = *((unsigned __int16 *)this + 0x88); /*0x7353fe*/
          v31 = a6; /*0x735402*/
          qmemcpy(v30, this + 0x11C, 0x44u); /*0x73540b*/
          *v31 = 0; /*0x73540d*/
          v32 = (*((_DWORD *)this + 0x3F))-- == 1; /*0x73540f*/
          if ( v32 ) /*0x735413*/
            *((_DWORD *)this + 0x3E) = 0; /*0x735415*/
          LeaveCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x735419*/
          result = 1; /*0x735422*/
          break; /*0x735426*/
      }
      break; /*0x735426*/
    default:
      v32 = (*((_DWORD *)this + 0x3F))-- == 1; /*0x735429*/
      if ( v32 ) /*0x73542d*/
        *((_DWORD *)this + 0x3E) = 0; /*0x73542f*/
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x735437*/
      result = 0; /*0x735440*/
      break; /*0x735440*/
  }
  return result; /*0x735340*/
}
