// positive sp value has been detected, the output may be wrong!
int __usercall def_90BCA5@<eax>(int a1@<ebx>, int a2@<esi>)
{
  int v3; // [esp-220h] [ebp-224h] BYREF
  int *v4[9]; // [esp-20Ch] [ebp-210h] BYREF
  char v5[488]; // [esp-1E8h] [ebp-1ECh] BYREF

  sub_8BBFB0((int)v4, a1, v5, 0x200u, 1);
  sub_8BBDB0(v4, "Unknown class member type in structureLayout::getMemberSize().");
  (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
    dword_BA7FB0,
    3,
    0x50A18B58,
    v5,
    ".\\util\\hkStructureLayout.cpp",
    0xB7);
  sub_8BC000(&v3);
  return a2;
}
