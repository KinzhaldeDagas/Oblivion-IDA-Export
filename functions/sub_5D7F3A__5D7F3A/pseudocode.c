// positive sp value has been detected, the output may be wrong!
bool __userpurge sub_5D7F3A@<al>(
        double a1@<st2>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st0>,
        int a7,
        int a8)
{
  sub_57DE50(0xB); /*0x5d7f3c*/
  sub_5D76A0(a1, a2, a3, a4, a5, a6); /*0x5d7f44*/
  return GameUI_QueueMessage(MEMORY[0xB389A8].value, 0, 1u, flt_A31E2C); /*0x5d812d*/
}
