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

  v1 = hModule == 0;
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9B3DC;
  if ( v1 )
  {
    LibraryA = LoadLibraryA("imagehlp.dll");
    v4 = GetProcAddress;
    hModule = LibraryA;
    dword_BA81C4 = 1;
    dword_BA81C0 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))v4(LibraryA, "SymInitialize");
    v5 = (int (*)(void))v4(hModule, "SymGetOptions");
    v12 = hModule;
    dword_BA81BC = v5;
    v6 = v4(v12, "SymSetOptions");
    v13 = hModule;
    dword_BA81B8 = (int (__stdcall *)(_DWORD))v6;
    dword_BA81B4 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v4(v13, "SymGetSymFromAddr");
    v7 = v4(hModule, "StackWalk");
    v14 = hModule;
    dword_BA81B0 = (int)v7;
    v8 = v4(v14, "SymFunctionTableAccess");
    v15 = hModule;
    dword_BA81AC = (int)v8;
    dword_BA81A8 = (int)v4(v15, "SymGetModuleBase");
    dword_BA81A4 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v4(hModule, "SymGetLineFromAddr");
    v9 = ((int (__cdecl *)(_DWORD, int))GetCurrentProcess)(0, 1);
    dword_BA81C0(v9, v16, v17);
    v10 = dword_BA81BC();
    dword_BA81B8(v10 | 0x10);
    return this;
  }
  else
  {
    ++dword_BA81C4;
    return this;
  }
}
