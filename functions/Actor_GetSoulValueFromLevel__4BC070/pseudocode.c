const char *__cdecl Actor::GetSoulValueFromLevel(int a1)
{
  const char *result; // eax

  result = 0; /*0x4bc074*/
  switch ( a1 ) /*0x4bc07b*/
  {
    case 0: /*0x4bc07b*/
      result = 0; /*0x4bc082*/
      break; /*0x4bc084*/
    case 1: /*0x4bc07b*/
      result = stru_B35B44.value; /*0x4bc085*/
      break; /*0x4bc08a*/
    case 2: /*0x4bc07b*/
      result = stru_B35B54.value; /*0x4bc08b*/
      break; /*0x4bc090*/
    case 3: /*0x4bc07b*/
      result = stru_B35B64.value; /*0x4bc091*/
      break; /*0x4bc096*/
    case 4: /*0x4bc07b*/
      result = stru_B35B74.value; /*0x4bc097*/
      break; /*0x4bc09c*/
    case 5: /*0x4bc07b*/
      result = MEMORY[0xB35B84].value; /*0x4bc09d*/
      break; /*0x4bc09d*/
    default:
      return result;
  }
  return result; /*0x4bc084*/
}
