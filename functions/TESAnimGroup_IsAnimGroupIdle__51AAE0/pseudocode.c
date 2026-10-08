// Static native idle-group classifier over a raw group byte: true only for Idle (0), DynamicIdle (1), BlockIdle (27), and TorchIdle (33).
char __cdecl TESAnimGroup_IsAnimGroupIdle(char a1)
{
  char result; // al

  switch ( a1 ) /*0x51aaf5*/
  {
    case 0: /*0x51aaf5*/
    case 1: /*0x51aaf5*/
    case 0x1B: /*0x51aaf5*/
    case 0x21: /*0x51aaf5*/
      result = 1; /*0x51aafc*/
      break; /*0x51aafe*/
    default:
      result = 0; /*0x51aaff*/
      break; /*0x51aaff*/
  }
  return result; /*0x51aafe*/
}
