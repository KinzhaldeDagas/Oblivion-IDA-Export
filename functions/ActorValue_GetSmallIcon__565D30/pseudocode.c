const char *__cdecl ActorValue_GetSmallIcon(unsigned int a1)
{
  if ( a1 <= 0x20 ) /*0x565d37*/
  {
    switch ( a1 ) /*0x565d3e*/
    {
      case 0u: /*0x565d3e*/
        return MEMORY[0xB3A2BC].value; /*0x565d4a*/
      case 1u: /*0x565d3e*/
        return stru_B3A2C4.value; /*0x565d50*/
      case 2u: /*0x565d3e*/
        return MEMORY[0xB3A2CC].value; /*0x565d56*/
      case 3u: /*0x565d3e*/
        return stru_B3A2D4.value; /*0x565d5c*/
      case 4u: /*0x565d3e*/
        return stru_B3A2DC.value; /*0x565d62*/
      case 5u: /*0x565d3e*/
        return stru_B3A2E4.value; /*0x565d68*/
      case 6u: /*0x565d3e*/
        return stru_B3A2EC.value; /*0x565d6e*/
      case 7u: /*0x565d3e*/
        return MEMORY[0xB3A2F4].value;
      default:
        break;
    }
  }
  JUMPOUT(0x565D75); /*0x565d75*/
}
