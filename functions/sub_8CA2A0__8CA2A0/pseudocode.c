int __usercall sub_8CA2A0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int v3; // ecx
  int i; // esi
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int *v8[3]; // [esp+38h] [ebp-210h] BYREF
  char v9[512]; // [esp+44h] [ebp-204h] BYREF
  int v10; // [esp+244h] [ebp-4h]

  v3 = dword_BA7FB0;
  v10 = __security_cookie;
  (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)v3 + 0x18))(
    v3,
    0x1293ADEF,
    "Shuting down Visual Debugger..");
  for ( i = a1[4] - 1; i >= 0; --i )
  {
    v5 = *(_DWORD *)(a1[3] + 8 * i + 4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(v5 + 0xC) + 0x14))(v5 + 0xC, 0x3C87FCB9);
    sub_8C9F30(a1, i);
    sub_8BBFB0((int)v8, a2, v9, 0x200u, 1);
    sub_8BBDB0(v8, "Client deleted.");
    (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      0,
      0xFFFFFFFF,
      v9,
      ".\\hkVisualDebugger.cpp",
      0x56);
    sub_8BC000(v8);
  }
  v6 = (void (__thiscall ***)(_DWORD, int))a1[2];
  if ( v6 )
  {
    (**v6)(v6, 1);
    a1[2] = 0;
    sub_8BBFB0((int)v8, a2, v9, 0x200u, 1);
    sub_8BBDB0(v8, "Server deleted.");
    (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      0,
      0xFFFFFFFF,
      v9,
      ".\\hkVisualDebugger.cpp",
      0x5D);
    sub_8BC000(v8);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_BA7FB0 + 0x1C))(dword_BA7FB0);
}
