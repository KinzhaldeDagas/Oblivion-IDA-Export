unsigned int __userpurge sub_45DBC0@<eax>(
        int a1@<ecx>,
        double a2@<st0>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st4>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>,
        _DWORD *a10,
        char a11)
{
  int (__cdecl *v12)(_DWORD *, char *, int, int *, int); // edx
  void (__cdecl *v13)(_DWORD *, char *, int, int *, int); // edx
  void (__cdecl *v15)(_DWORD *, int, int, int *, int); // ecx
  unsigned __int8 *v16; // ebx
  void (__cdecl *v17)(_DWORD *, int, int, int *, int); // eax
  unsigned __int8 *v18; // ebp
  void (__cdecl *v19)(_DWORD *, int, int, int *, int); // edx
  void (__cdecl *v20)(_DWORD *, int, int, int *, int); // edx
  void (__cdecl *v21)(_DWORD *, int *, int, int *, int); // eax
  char v22; // al
  size_t v23; // [esp+0h] [ebp-328h]
  size_t v24; // [esp+0h] [ebp-328h]
  int v25; // [esp+10h] [ebp-318h] BYREF
  int v26; // [esp+14h] [ebp-314h] BYREF
  char Str1[260]; // [esp+18h] [ebp-310h] BYREF
  char v28[520]; // [esp+11Ch] [ebp-20Ch] BYREF

  *(_DWORD *)(a1 + 0x8C) = 0;
  v12 = (int (__cdecl *)(_DWORD *, char *, int, int *, int))a10[1];
  v25 = 1;
  if ( !v12(a10, Str1, 0xC, &v25, 1) )
    return 0;
  if ( Str1[0] )
  {
    LODWORD(v23) = 4;
    if ( !strncmp(Str1, "CON ", v23) )
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*a10 + 0xC))(a10, 0xD000, BSFile_FilePos_Beg);
      *(_DWORD *)(a1 + 0x8C) = 0xD000;
      v13 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))a10[1];
      v25 = 1;
      v13(a10, Str1, 0xC, &v25, 1);
    }
    LODWORD(v24) = 0xC;
    if ( strncmp(Str1, "TES4SAVEGAME", v24) )
      return 0;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a10 + 0xC))(a10, 0, BSFile_FilePos_Beg);
  }
  v15 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1];
  v16 = (unsigned __int8 *)(a1 + 0x70);
  v25 = 1;
  v15(a10, a1 + 0x70, 1, &v25, 1);
  v17 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1];
  v25 = 1;
  v18 = (unsigned __int8 *)(a1 + 0x71);
  v17(a10, a1 + 0x71, 1, &v25, 1);
  *(_BYTE *)(a1 + 0x7C) = *(_BYTE *)(a1 + 0x71);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x52u )
  {
    if ( a11 )
    {
      v19 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1];
      v25 = 1;
      v19(a10, a1 + 0x94, 0x10, &v25, 1);
      v20 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1];
      v25 = 1;
      v20(a10, a1 + 0xA4, 4, &v25, 1);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*a10 + 0xC))(a10, 0x14, BSFile_FilePos_Cur);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x52u )
  {
    if ( a11 )
    {
      *(_DWORD *)(a1 + 0x94) = 0xFFFFFFFF;
      *(_DWORD *)(a1 + 0x98) = 0xFFFFFFFF;
      *(_DWORD *)(a1 + 0x9C) = 0xFFFFFFFF;
      *(_DWORD *)(a1 + 0xA0) = 0xFFFFFFFF;
      *(_DWORD *)(a1 + 0xA4) = 0xFFFFFFFF;
    }
  }
  v21 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a10[1];
  v25 = 1;
  v21(a10, &v26, 4, &v25, 1);
  if ( (*v16 || a11 && *v18 <= 0x12u)
    && (_sprintf(
          v28,
          "Save game version is %i.%02i and current version is %i.%02i, so errors may occur.  Continue trying to load?",
          *v16,
          *v18,
          0,
          0x7D),
        SaveLoad_CurrentSavegame->flags |= 0x10000u,
        v22 = sub_579CF0(
                (char)v18,
                a2,
                st4_0,
                st5_0,
                a5,
                a6,
                a7,
                a8,
                a9,
                v28,
                1,
                (const char *)MessageButtonTextYes,
                MessageButtonTextNo),
        SaveLoad_CurrentSavegame->flags &= ~0x10000u,
        v22 == 2) )
  {
    return 0xFFFFFFFF;
  }
  else
  {
    return v26;
  }
}
