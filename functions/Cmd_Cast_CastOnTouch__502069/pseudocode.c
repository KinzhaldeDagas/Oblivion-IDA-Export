// positive sp value has been detected, the output may be wrong!
char __usercall Cmd_Cast_::CastOnTouch@<al>(Actor *a1@<edi>)
{
  void *v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-4h] [ebp-4h]

  Actor_CastOnTouch(a1, v4, v5); /*0x502075*/
  return 1; /*0x502083*/
}
