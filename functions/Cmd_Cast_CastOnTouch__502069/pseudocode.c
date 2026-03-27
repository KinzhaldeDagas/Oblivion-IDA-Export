// positive sp value has been detected, the output may be wrong!
char __usercall Cmd_Cast_::CastOnTouch@<al>(int a1@<ebx>, int a2@<edi>, double a3@<st0>)
{
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-4h] [ebp-4h]

  Actor_CastOnTouch(a2, a1, a3, v4, v5);
  return 1;
}
