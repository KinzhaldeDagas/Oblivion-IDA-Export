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

  *(_DWORD *)(a1 + 0x8C) = 0; /*0x45dbf2*/
  v12 = (int (__cdecl *)(_DWORD *, char *, int, int *, int))a10[1]; /*0x45dbfc*/
  v25 = 1; /*0x45dc00*/
  if ( !v12(a10, Str1, 0xC, &v25, 1) ) /*0x45dc0b*/
    return 0; /*0x45dc0b*/
  if ( Str1[0] ) /*0x45dc12*/
  {
    LODWORD(v23) = 4; /*0x45dc14*/
    if ( !strncmp(Str1, "CON ", v23) ) /*0x45dc20*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*a10 + 0xC))(a10, 0xD000, BSFile_FilePos_Beg); /*0x45dc3e*/
      *(_DWORD *)(a1 + 0x8C) = 0xD000; /*0x45dc4d*/
      v13 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))a10[1]; /*0x45dc57*/
      v25 = 1; /*0x45dc5b*/
      v13(a10, Str1, 0xC, &v25, 1); /*0x45dc5f*/
    }
    LODWORD(v24) = 0xC; /*0x45dc64*/
    if ( strncmp(Str1, "TES4SAVEGAME", v24) ) /*0x45dc70*/
      return 0; /*0x45dc7e*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a10 + 0xC))(a10, 0, BSFile_FilePos_Beg); /*0x45dc92*/
  }
  v15 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1]; /*0x45dc94*/
  v16 = (unsigned __int8 *)(a1 + 0x70); /*0x45dc9f*/
  v25 = 1; /*0x45dca4*/
  v15(a10, a1 + 0x70, 1, &v25, 1); /*0x45dca8*/
  v17 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1]; /*0x45dcaa*/
  v25 = 1; /*0x45dcb4*/
  v18 = (unsigned __int8 *)(a1 + 0x71); /*0x45dcba*/
  v17(a10, a1 + 0x71, 1, &v25, 1); /*0x45dcbf*/
  *(_BYTE *)(a1 + 0x7C) = *(_BYTE *)(a1 + 0x71); /*0x45dcc4*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x52u ) /*0x45dcd4*/
  {
    if ( a11 ) /*0x45dcde*/
    {
      v19 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1]; /*0x45dce0*/
      v25 = 1; /*0x45dcf4*/
      v19(a10, a1 + 0x94, 0x10, &v25, 1); /*0x45dcfc*/
      v20 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1]; /*0x45dcfe*/
      v25 = 1; /*0x45dd12*/
      v20(a10, a1 + 0xA4, 4, &v25, 1); /*0x45dd1a*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*a10 + 0xC))(a10, 0x14, BSFile_FilePos_Cur); /*0x45dd31*/
    }
  }
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x52u ) /*0x45dd3c*/
  {
    if ( a11 ) /*0x45dd46*/
    {
      *(_DWORD *)(a1 + 0x94) = 0xFFFFFFFF; /*0x45dd4b*/
      *(_DWORD *)(a1 + 0x98) = 0xFFFFFFFF; /*0x45dd51*/
      *(_DWORD *)(a1 + 0x9C) = 0xFFFFFFFF; /*0x45dd57*/
      *(_DWORD *)(a1 + 0xA0) = 0xFFFFFFFF; /*0x45dd5d*/
      *(_DWORD *)(a1 + 0xA4) = 0xFFFFFFFF; /*0x45dd63*/
    }
  }
  v21 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a10[1]; /*0x45dd69*/
  v25 = 1; /*0x45dd7b*/
  v21(a10, &v26, 4, &v25, 1); /*0x45dd83*/
  if ( (*v16 || a11 && *v18 <= 0x12u) /*0x45de01*/
    && (_sprintf(
          v28,
          "Save game version is %i.%02i and current version is %i.%02i, so errors may occur.  Continue trying to load?",
          *v16,
          *v18,
          0,
          0x7D),
        g_TESSaveLoadGame->flags |= 0x10000u,
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
                (const char *)MEMORY[0xB38CF8],
                MEMORY[0xB38D00]),
        g_TESSaveLoadGame->flags &= ~0x10000u,
        v22 == 2) )
  {
    return 0xFFFFFFFF; /*0x45de03*/
  }
  else
  {
    return v26; /*0x45de08*/
  }
}
