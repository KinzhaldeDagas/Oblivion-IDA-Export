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

  v7 = (_DWORD *)a2;
  (*(void (__thiscall **)(signed int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 0);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)this + 0x3F);
  *((_DWORD *)this + 0x3E) = CurrentThreadId;
  *a7 = 1;
  v10 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 1;
  v10(v7, this + 0x100, 1, &a2, 1);
  v11 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 1;
  v11(v7, this + 0x101, 1, &a2, 1);
  v12 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 1;
  v12(v7, this + 0x102, 1, &a2, 1);
  v13 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 2;
  v13(v7, this + 0x104, 2, &a2, 1);
  v14 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 2;
  v14(v7, this + 0x106, 2, &a2, 1);
  v15 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 1;
  v15(v7, this + 0x108, 1, &a2, 1);
  v16 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 2;
  v16(v7, this + 0x10A, 2, &a2, 1);
  v17 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 2;
  v17(v7, this + 0x10C, 2, &a2, 1);
  v18 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 2;
  a7 = this + 0x10E;
  v18(v7, this + 0x10E, 2, &a2, 1);
  v19 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 2;
  v19(v7, this + 0x110, 2, &a2, 1);
  v20 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 1;
  v20(v7, this + 0x112, 1, &a2, 1);
  v21 = (void (__cdecl *)(_DWORD *, char *, int, signed int *, int))v7[1];
  a2 = 1;
  v21(v7, this + 0x113, 1, &a2, 1);
  v22 = *(this + 0x100);
  if ( v22 )
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v7 + 0xC))(v7, v22, BSFile_FilePos_Cur);
  *(this + 0x117) = (*(this + 0x113) & 0x20) == 0;
  switch ( *(this + 0x102) )
  {
    case 1:
      *(this + 0x116) = 1;
      *(this + 0x118) = 0;
      goto LABEL_9;
    case 2:
    case 3:
      *(this + 0x118) = 0;
      goto LABEL_8;
    case 9:
      *(this + 0x116) = 1;
      *(this + 0x118) = 1;
      goto LABEL_9;
    case 0xA:
    case 0xB:
      *(this + 0x118) = 1;
LABEL_8:
      *(this + 0x116) = 0;
LABEL_9:
      v23 = *(this + 0x116);
      if ( v23 )
        v24 = *(this + 0x108);
      else
        v24 = *(this + 0x112);
      v25 = v24 == 0x20;
      LOBYTE(a2) = v25;
      *(this + 0x115) = v25;
      if ( v23 )
      {
        if ( *((_WORD *)this + 0x83) == 0x10 )
        {
          v26 = &unk_B25D28;
          if ( !v25 )
            v26 = &unk_B25CE0;
        }
        else
        {
          v26 = &unk_B25DB8;
          if ( !v25 )
            v26 = &unk_B25D70;
        }
      }
      else
      {
        v26 = &unk_B25E00;
        if ( !v25 )
          v26 = &unk_B25E48;
      }
      qmemcpy(this + 0x11C, v26, 0x44u);
      switch ( *(this + 0x112) )
      {
        case 4:
          *(this + 0x114) = 0;
          if ( v23 )
          {
            *((_DWORD *)this + 0x5C) = sub_7347E0;
            goto LABEL_34;
          }
          sub_43F300((LPCRITICAL_SECTION)this + 4);
          return 0;
        case 8:
          *(this + 0x114) = 1;
          if ( v23 )
            *((_DWORD *)this + 0x5C) = sub_734830;
          else
            *((_DWORD *)this + 0x5C) = sub_734870;
          goto LABEL_34;
        case 0xF:
        case 0x10:
          *(this + 0x114) = 2;
          if ( v23 )
          {
            if ( (_BYTE)a2 )
              *((_DWORD *)this + 0x5C) = sub_734990;
            else
              *((_DWORD *)this + 0x5C) = sub_734920;
          }
          else
          {
            *((_DWORD *)this + 0x5C) = sub_7348B0;
          }
          goto LABEL_34;
        case 0x18:
          *(this + 0x114) = 3;
          *((_DWORD *)this + 0x5C) = sub_734A10;
          goto LABEL_34;
        case 0x20:
          *(this + 0x114) = 4;
          *((_DWORD *)this + 0x5C) = sub_734A60;
          goto LABEL_34;
        default:
LABEL_34:
          v28 = *(unsigned __int16 *)a7;
          v29 = a3;
          v30 = a5;
          *(this + 0x178) = 0;
          *((_DWORD *)this + 0x5D) = 0;
          *v29 = v28;
          *a4 = *((unsigned __int16 *)this + 0x88);
          v31 = a6;
          qmemcpy(v30, this + 0x11C, 0x44u);
          *v31 = 0;
          v32 = (*((_DWORD *)this + 0x3F))-- == 1;
          if ( v32 )
            *((_DWORD *)this + 0x3E) = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
          result = 1;
          break;
      }
      break;
    default:
      v32 = (*((_DWORD *)this + 0x3F))-- == 1;
      if ( v32 )
        *((_DWORD *)this + 0x3E) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
      result = 0;
      break;
  }
  return result;
}
