// positive sp value has been detected, the output may be wrong!
int __usercall def_942241@<eax>(int a1@<ebx>, int a2@<ebp>)
{
  int v3; // [esp-218h] [ebp-218h] BYREF
  int *v4[6]; // [esp-204h] [ebp-204h] BYREF
  char v5[492]; // [esp-1ECh] [ebp-1ECh] BYREF

  sub_8BBFB0((int)v4, a1, v5, 0x200u, 1); /*0x9427c2*/
  sub_8BBDB0(v4, "Unhandled member type found!"); /*0x9427d0*/
  (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x9427f3*/
    unk_BA7FB0,
    3,
    0x40A18B57,
    v5,
    ".\\serialize\\xml\\hkXmlObjectWriter.cpp",
    0x298);
  sub_8BC000(&v3); /*0x9427fa*/
  return sub_8BBEE0(a2, "</hkparam>"); /*0x942817*/
}
