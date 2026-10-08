double __cdecl sub_536260(int a1)
{
  double result; // st7

  switch ( a1 ) /*0x536269*/
  {
    case 0: /*0x536269*/
      result = MEMORY[0xB37A58][8]; /*0x536270*/
      break; /*0x536276*/
    case 1: /*0x536269*/
      result = MEMORY[0xB37A58][0xA]; /*0x536277*/
      break; /*0x53627d*/
    case 2: /*0x536269*/
      result = MEMORY[0xB37A58][0xC]; /*0x53627e*/
      break; /*0x536284*/
    case 3: /*0x536269*/
      result = MEMORY[0xB37A58][0xE]; /*0x536285*/
      break; /*0x53628b*/
    case 4: /*0x536269*/
      result = MEMORY[0xB37A58][0x10]; /*0x53628c*/
      break; /*0x536292*/
    case 5: /*0x536269*/
      result = MEMORY[0xB37A58][0x12]; /*0x536293*/
      break; /*0x536299*/
    case 6: /*0x536269*/
      result = MEMORY[0xB37A58][0x14]; /*0x53629a*/
      break; /*0x5362a0*/
    case 7: /*0x536269*/
      result = MEMORY[0xB37A58][0x16]; /*0x5362a1*/
      break; /*0x5362a7*/
    case 8: /*0x536269*/
      result = MEMORY[0xB37A58][0x18]; /*0x5362a8*/
      break; /*0x5362ae*/
    case 9: /*0x536269*/
      result = MEMORY[0xB37A58][0x1A]; /*0x5362af*/
      break; /*0x5362b5*/
    default:
      JUMPOUT(0x5362B6); /*0x5362b6*/
  }
  return result; /*0x536276*/
}
