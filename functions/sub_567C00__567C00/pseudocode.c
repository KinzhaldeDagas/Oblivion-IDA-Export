// RadiantAI: package day-of-week test used by central package chooser. Supports specific day and combined day masks/cases before month/day/hour condition checks.
char __thiscall sub_567C00(char *this, int a2)
{
  char GameDayOfWeek; // al
  bool v4; // zf

  GameDayOfWeek = TimeGlobals_GetGameDayOfWeek(&MEMORY[0xB332E0]); /*0x567c08*/
  if ( (_BYTE)a2 ) /*0x567c12*/
  {
    if ( --GameDayOfWeek < 0 ) /*0x567c16*/
      GameDayOfWeek = 6; /*0x567c18*/
  }
  switch ( *(this + 0x2D) ) /*0x567c26*/
  {
    case 0: /*0x567c26*/
      v4 = GameDayOfWeek == 0; /*0x567c2d*/
      break; /*0x567c2f*/
    case 1: /*0x567c26*/
      v4 = GameDayOfWeek == 1; /*0x567c31*/
      break; /*0x567c33*/
    case 2: /*0x567c26*/
      v4 = GameDayOfWeek == 2; /*0x567c35*/
      break; /*0x567c37*/
    case 3: /*0x567c26*/
      v4 = GameDayOfWeek == 3; /*0x567c39*/
      break; /*0x567c3b*/
    case 4: /*0x567c26*/
      goto LABEL_18;
    case 5: /*0x567c26*/
      goto LABEL_16;
    case 6: /*0x567c26*/
      goto LABEL_13;
    case 7: /*0x567c26*/
      if ( GameDayOfWeek && GameDayOfWeek != 6 ) /*0x567c45*/
        goto LABEL_21; /*0x567c45*/
      return 0; /*0x567c4b*/
    case 8: /*0x567c26*/
      if ( !GameDayOfWeek ) /*0x567c50*/
        return def_567C26(1, *(this + 0x2D), a2); /*0x567c50*/
LABEL_13:
      v4 = GameDayOfWeek == 6; /*0x567c52*/
      break; /*0x567c54*/
    case 9: /*0x567c26*/
      if ( GameDayOfWeek == 1 || GameDayOfWeek == 3 ) /*0x567c5c*/
        return def_567C26(1, *(this + 0x2D), a2); /*0x567c5c*/
LABEL_16:
      v4 = GameDayOfWeek == 5; /*0x567c5e*/
      break; /*0x567c60*/
    case 0xA: /*0x567c26*/
      if ( GameDayOfWeek == 2 ) /*0x567c64*/
        return def_567C26(1, *(this + 0x2D), a2); /*0x567c64*/
LABEL_18:
      v4 = GameDayOfWeek == 4; /*0x567c66*/
      break; /*0x567c66*/
    default:
      goto LABEL_21;
  }
  if ( !v4 ) /*0x567c68*/
LABEL_21:
    JUMPOUT(0x567C6C); /*0x567c6c*/
  return def_567C26(1, *(this + 0x2D), a2); /*0x567c23*/
}
