int __usercall sub_8CA2A0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int v3; // ecx
  int i; // esi
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int *v8[3]; // [esp+38h] [ebp-210h] BYREF
  char v9[512]; // [esp+44h] [ebp-204h] BYREF
  int v10; // [esp+244h] [ebp-4h]

  v3 = unk_BA7FB0; /*0x8ca2af*/
  v10 = __security_cookie; /*0x8ca2ba*/
  (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)v3 + 0x18))( /*0x8ca2c8*/
    v3,
    0x1293ADEF,
    "Shuting down Visual Debugger..");
  for ( i = a1[4] - 1; i >= 0; --i ) /*0x8ca2cf*/
  {
    v5 = *(_DWORD *)(a1[3] + 8 * i + 4); /*0x8ca2d7*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(v5 + 0xC) + 0x14))(v5 + 0xC, 0x3C87FCB9); /*0x8ca2e5*/
    sub_8C9F30(a1, i); /*0x8ca2eb*/
    sub_8BBFB0((int)v8, a2, v9, 0x200u, 1); /*0x8ca304*/
    sub_8BBDB0(v8, "Client deleted."); /*0x8ca312*/
    (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8ca32f*/
      unk_BA7FB0,
      0,
      0xFFFFFFFF,
      v9,
      ".\\hkVisualDebugger.cpp",
      0x56);
    sub_8BC000(v8); /*0x8ca336*/
  }
  v6 = (void (__thiscall ***)(_DWORD, int))a1[2]; /*0x8ca33e*/
  if ( v6 ) /*0x8ca343*/
  {
    (**v6)(v6, 1); /*0x8ca349*/
    a1[2] = 0; /*0x8ca34e*/
    sub_8BBFB0((int)v8, a2, v9, 0x200u, 1); /*0x8ca366*/
    sub_8BBDB0(v8, "Server deleted."); /*0x8ca374*/
    (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8ca391*/
      unk_BA7FB0,
      0,
      0xFFFFFFFF,
      v9,
      ".\\hkVisualDebugger.cpp",
      0x5D);
    sub_8BC000(v8); /*0x8ca398*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)unk_BA7FB0 + 0x1C))(unk_BA7FB0); /*0x8ca3a8*/
}
