void __userpurge def_953B36(
        int a1@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int *a21,
        int a22,
        int a23,
        char a24)
{
  sub_8BBFB0((int)&a21, a1, &a24, 0x200u, 1);
  sub_8BBDB0(&a21, "Unknown class member found during write of data.");
  (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
    dword_BA7FB0,
    3,
    0x641E3E03,
    &a24,
    ".\\copier\\hkObjectCopier.cpp",
    0x162);
  sub_8BC000(&a21);
  JUMPOUT(0x953CD0);
}
