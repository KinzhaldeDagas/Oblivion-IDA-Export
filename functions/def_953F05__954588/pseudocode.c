void __userpurge def_953F05(
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
        int *a19,
        int a20,
        int a21,
        char a22)
{
  sub_8BBFB0((int)&a19, a1, &a22, 0x200u, 1); /*0x95459c*/
  sub_8BBDB0(&a19, "Unknown class member found during write of data."); /*0x9545aa*/
  (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x9545cd*/
    unk_BA7FB0,
    3,
    0x641E3E05,
    &a22,
    ".\\copier\\hkObjectCopier.cpp",
    0x26C);
  sub_8BC000(&a19); /*0x9545d4*/
  JUMPOUT(0x954000); /*0x954000*/
}
