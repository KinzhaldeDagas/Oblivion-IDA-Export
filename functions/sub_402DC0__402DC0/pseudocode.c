// Maps GameMonth 0..11 to a four-season index: 0 for 2..4, 1 for 5..7, 2 for 8..10, 3 for 11/0/1. Used to select seasonal chance data.
int __thiscall TimeGlobals_GetSeasonIndex(TimeGlobals *this)
{
  TESGlobal *GameMonth; // eax
  int v2; // esi
  int v3; // eax
  int result; // eax

  GameMonth = this->GameMonth; /*0x402dc0*/
  v2 = 0; /*0x402dc4*/
  if ( GameMonth ) /*0x402dc8*/
    v3 = (char)Double_To_SInt32(GameMonth->data); /*0x402dd2*/
  else
    v3 = 7; /*0x402de8*/
  switch ( v3 ) /*0x402de1*/
  {
    case 0: /*0x402de1*/
    case 1: /*0x402de1*/
    case 0xB: /*0x402de1*/
      result = 3; /*0x402df4*/
      break; /*0x402df7*/
    case 2: /*0x402de1*/
    case 3: /*0x402de1*/
    case 4: /*0x402de1*/
      result = 0; /*0x402dfa*/
      break; /*0x402dfd*/
    case 5: /*0x402de1*/
    case 6: /*0x402de1*/
    case 7: /*0x402de1*/
      result = 1; /*0x402e03*/
      break; /*0x402e06*/
    case 8: /*0x402de1*/
    case 9: /*0x402de1*/
    case 0xA: /*0x402de1*/
      v2 = 2; /*0x402e07*/
      goto LABEL_9; /*0x402e07*/
    default:
LABEL_9:
      result = v2; /*0x402e0c*/
      break; /*0x402e0c*/
  }
  return result; /*0x402df6*/
}
