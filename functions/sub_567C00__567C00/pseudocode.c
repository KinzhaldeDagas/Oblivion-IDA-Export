char __thiscall sub_567C00(char *this, int a2)
{
  char GameDayOfWeek; // al
  bool v4; // zf

  GameDayOfWeek = TimeGlobals_GetGameDayOfWeek(&TimeGlobals);
  if ( (_BYTE)a2 )
  {
    if ( --GameDayOfWeek < 0 )
      GameDayOfWeek = 6;
  }
  switch ( *(this + 0x2D) )
  {
    case 0:
      v4 = GameDayOfWeek == 0;
      break;
    case 1:
      v4 = GameDayOfWeek == 1;
      break;
    case 2:
      v4 = GameDayOfWeek == 2;
      break;
    case 3:
      v4 = GameDayOfWeek == 3;
      break;
    case 4:
      goto LABEL_18;
    case 5:
      goto LABEL_16;
    case 6:
      goto LABEL_13;
    case 7:
      if ( GameDayOfWeek && GameDayOfWeek != 6 )
        goto LABEL_21;
      return 0;
    case 8:
      if ( !GameDayOfWeek )
        return def_567C26(1, *(this + 0x2D), a2);
LABEL_13:
      v4 = GameDayOfWeek == 6;
      break;
    case 9:
      if ( GameDayOfWeek == 1 || GameDayOfWeek == 3 )
        return def_567C26(1, *(this + 0x2D), a2);
LABEL_16:
      v4 = GameDayOfWeek == 5;
      break;
    case 0xA:
      if ( GameDayOfWeek == 2 )
        return def_567C26(1, *(this + 0x2D), a2);
LABEL_18:
      v4 = GameDayOfWeek == 4;
      break;
    default:
      goto LABEL_21;
  }
  if ( !v4 )
LABEL_21:
    JUMPOUT(0x567C6C);
  return def_567C26(1, *(this + 0x2D), a2);
}
