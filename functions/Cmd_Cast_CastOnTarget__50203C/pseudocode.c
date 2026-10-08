// positive sp value has been detected, the output may be wrong!
char __usercall Cmd_Cast_::CastOnTarget@<al>(Actor *a1@<edi>)
{
  void *v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-4h] [ebp-4h]

  Actor_CastOnTarget(a1, v4, v5, 0); /*0x50204a*/
  return 1; /*0x502058*/
}
