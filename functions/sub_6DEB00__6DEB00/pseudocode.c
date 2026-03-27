const char *__thiscall sub_6DEB00(_BYTE *this)
{
  const char *result; // eax

  switch ( *(this + 0x40) & 7 )
  {
    case 0:
      result = (const char *)&off_A7B018;
      break;
    case 1:
      result = "DIFF";
      break;
    case 2:
      result = "SPEC";
      break;
    case 3:
      result = "SELF_ILLUM";
      break;
    default:
      JUMPOUT(0x6DEB2B);
  }
  return result;
}
