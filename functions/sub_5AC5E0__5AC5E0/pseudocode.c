char __userpurge sub_5AC5E0@<al>(
        int *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  int v8; // edi

  v8 = (*(int (__thiscall **)(int *))(*a1 + 0x34))(a1);
  if ( sub_578FE0() != v8 || a6 != 0xA || a1[0xB] <= 0 )
    return 0;
  ShowUIMessageBox((char *)dword_B383A0, a2, a3, a4, a5, (const char *)dword_B383A0, 0, 1, (const char *)sOk, 0);
  return 1;
}
