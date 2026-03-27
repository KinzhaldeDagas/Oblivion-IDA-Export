const char *__thiscall sub_8A3200(char *this)
{
  const char *result; // eax

  switch ( *(this + 0xD3) )
  {
    case 0:
      result = "Invalid";
      break;
    case 1:
      result = "Fixed";
      break;
    case 2:
      result = "Keyframed";
      break;
    case 3:
      result = "Debris";
      break;
    case 4:
      result = "Moving";
      break;
    case 5:
      result = "Critical";
      break;
    case 6:
      result = "Bullet";
      break;
    case 7:
      result = def_8A320E();
      break;
    default:
      JUMPOUT(0x8A3244);
  }
  return result;
}
