_WORD *__thiscall sub_8F61A0(_WORD *this)
{
  bool v1; // zf
  HMODULE LibraryA; // eax
  FARPROC (__stdcall *v4)(HMODULE, LPCSTR); // esi
  int (*v5)(void); // eax
  FARPROC v6; // eax
  FARPROC v7; // eax
  FARPROC v8; // eax
  int v9; // eax
  int v10; // eax
  HMODULE v12; // [esp-Ch] [ebp-10h]
  HMODULE v13; // [esp-Ch] [ebp-10h]
  HMODULE v14; // [esp-Ch] [ebp-10h]
  HMODULE v15; // [esp-Ch] [ebp-10h]
  int v16; // [esp-Ch] [ebp-10h]
  int v17; // [esp-8h] [ebp-Ch]

  v1 = MEMORY[0xBA81C8] == 0; /*0x8f61a5*/
  *(this + 3) = 1; /*0x8f61aa*/
  *(_DWORD *)this = &off_A9B3DC; /*0x8f61b0*/
  if ( v1 ) /*0x8f61b6*/
  {
    LibraryA = LoadLibraryA("imagehlp.dll"); /*0x8f61c2*/
    v4 = GetProcAddress; /*0x8f61c8*/
    MEMORY[0xBA81C8] = LibraryA; /*0x8f61d4*/
    unk_BA81C4 = 1; /*0x8f61d9*/
    unk_BA81C0 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))v4(LibraryA, "SymInitialize"); /*0x8f61e5*/
    v5 = (int (*)(void))v4(MEMORY[0xBA81C8], "SymGetOptions"); /*0x8f61f5*/
    v12 = MEMORY[0xBA81C8]; /*0x8f6202*/
    unk_BA81BC = v5; /*0x8f6203*/
    v6 = v4(v12, "SymSetOptions"); /*0x8f6208*/
    v13 = MEMORY[0xBA81C8]; /*0x8f6215*/
    unk_BA81B8 = (int (__stdcall *)(_DWORD))v6; /*0x8f6216*/
    unk_BA81B4 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v4(v13, "SymGetSymFromAddr"); /*0x8f621d*/
    v7 = v4(MEMORY[0xBA81C8], "StackWalk"); /*0x8f622d*/
    v14 = MEMORY[0xBA81C8]; /*0x8f623a*/
    unk_BA81B0 = (int)v7; /*0x8f623b*/
    v8 = v4(v14, "SymFunctionTableAccess"); /*0x8f6240*/
    v15 = MEMORY[0xBA81C8]; /*0x8f624d*/
    unk_BA81AC = (int)v8; /*0x8f624e*/
    unk_BA81A8 = (int)v4(v15, "SymGetModuleBase"); /*0x8f6255*/
    unk_BA81A4 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v4(MEMORY[0xBA81C8], "SymGetLineFromAddr"); /*0x8f626b*/
    v9 = ((int (__cdecl *)(_DWORD, int))GetCurrentProcess)(0, 1); /*0x8f6270*/
    unk_BA81C0(v9, v16, v17); /*0x8f6277*/
    v10 = unk_BA81BC(); /*0x8f627d*/
    unk_BA81B8(v10 | 0x10); /*0x8f6287*/
    return this; /*0x8f628e*/
  }
  else
  {
    ++unk_BA81C4; /*0x8f6292*/
    return this; /*0x8f6298*/
  }
}
