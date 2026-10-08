int __userpurge sub_8C9E20@<eax>(int a1@<ecx>, int a2@<ebx>, char *Args)
{
  int v4; // eax
  int **v5; // eax
  int **v6; // eax
  int *v8[3]; // [esp+14h] [ebp-210h] BYREF
  char v9[512]; // [esp+20h] [ebp-204h] BYREF

  if ( *(_DWORD *)(a1 + 8) ) /*0x8c9e35*/
  {
    sub_8BBFB0((int)v8, a2, v9, 0x200u, 1); /*0x8c9eda*/
    sub_8BBDB0(v8, "Server has already been created, only one server allowed per visual debugger instance"); /*0x8c9ee8*/
    (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8c9f05*/
      unk_BA7FB0,
      0,
      0xFFFFFFFF,
      v9,
      ".\\hkVisualDebugger.cpp",
      0x73);
  }
  else
  {
    v4 = off_B3004C(); /*0x8c9e40*/
    *(_DWORD *)(a1 + 8) = v4; /*0x8c9e48*/
    if ( v4 ) /*0x8c9e4b*/
    {
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)v4 + 0x1C))(v4, Args); /*0x8c9e59*/
      sub_8BBFB0((int)v8, a2, v9, 0x200u, 1); /*0x8c9e70*/
      v5 = sub_8BBDB0(v8, "Server created and will poll for new client(s) on port "); /*0x8c9e84*/
      v6 = sub_8BBE00(v5, Args); /*0x8c9e8b*/
      sub_8BBDB0(v6, " every frame"); /*0x8c9e92*/
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8c9e99*/
        unk_BA7FB0,
        0,
        0xFFFFFFFF,
        v9,
        ".\\hkVisualDebugger.cpp",
        0x6A);
    }
    else
    {
      sub_8BBFB0((int)v8, a2, v9, 0x200u, 1); /*0x8c9eaf*/
      sub_8BBDB0( /*0x8c9ebd*/
        v8,
        "Server could not be created, please check that you platform supports sockets with the hkBase library");
      (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8c9ec4*/
        unk_BA7FB0,
        0,
        0xFFFFFFFF,
        v9,
        ".\\hkVisualDebugger.cpp",
        0x6E);
    }
  }
  return sub_8BC000(v8); /*0x8c9f11*/
}
