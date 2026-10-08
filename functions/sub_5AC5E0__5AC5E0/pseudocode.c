char __userpurge sub_5AC5E0@<al>(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  int v8; // edi

  v8 = (*(int (__thiscall **)(int *))(*a1 + 0x34))(a1); /*0x5ac5eb*/
  if ( sub_578FE0() != v8 || a5 != 0xA || a1[0xB] <= 0 ) /*0x5ac601*/
    return 0; /*0x5ac626*/
  ShowUIMessageBox((char *)stru_B383A0, a2, a3, a4, (char *)stru_B383A0, 0, 1, (char *)MEMORY[0xB38CF0], 0); /*0x5ac616*/
  return 1; /*0x5ac61e*/
}
