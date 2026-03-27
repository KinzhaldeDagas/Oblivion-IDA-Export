char __thiscall sub_51AF00(unsigned __int8 *this)
{
  char result; // al

  switch ( *(this + 8) )
  {
    case 0u:
    case 1u:
    case 0x1Bu:
    case 0x21u:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
