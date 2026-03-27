int __userpurge sub_8C9E20@<eax>(int a1@<ecx>, int a2@<ebx>, char *Args)
{
  _DWORD *v4; // eax
  int **v5; // eax
  int **v6; // eax
  int *v8[3]; // [esp+14h] [ebp-210h] BYREF
  char v9[512]; // [esp+20h] [ebp-204h] BYREF

  if ( *(_DWORD *)(a1 + 8) )
  {
    sub_8BBFB0((int)v8, a2, v9, 0x200u, 1);
    sub_8BBDB0(v8, "Server has already been created, only one server allowed per visual debugger instance");
    (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      0,
      0xFFFFFFFF,
      v9,
      ".\\hkVisualDebugger.cpp",
      0x73);
  }
  else
  {
    v4 = ((_DWORD *(__usercall *)@<eax>(int@<ebx>))off_B3004C)(a2);
    *(_DWORD *)(a1 + 8) = v4;
    if ( v4 )
    {
      (*(void (__thiscall **)(_DWORD *, char *))(*v4 + 0x1C))(v4, Args);
      sub_8BBFB0((int)v8, a2, v9, 0x200u, 1);
      v5 = sub_8BBDB0(v8, "Server created and will poll for new client(s) on port ");
      v6 = sub_8BBE00(v5, Args);
      sub_8BBDB0(v6, " every frame");
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
        dword_BA7FB0,
        0,
        0xFFFFFFFF,
        v9,
        ".\\hkVisualDebugger.cpp",
        0x6A);
    }
    else
    {
      sub_8BBFB0((int)v8, a2, v9, 0x200u, 1);
      sub_8BBDB0(
        v8,
        "Server could not be created, please check that you platform supports sockets with the hkBase library");
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
        dword_BA7FB0,
        0,
        0xFFFFFFFF,
        v9,
        ".\\hkVisualDebugger.cpp",
        0x6E);
    }
  }
  return sub_8BC000(v8);
}
