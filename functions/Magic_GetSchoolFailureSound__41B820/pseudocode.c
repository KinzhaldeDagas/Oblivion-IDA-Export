int __cdecl Magic_GetSchoolFailureSound(int a1)
{
  int result; // eax

  switch ( a1 ) /*0x41b829*/
  {
    case 0: /*0x41b829*/
      result = MEMORY[0xB33560]; /*0x41b830*/
      break; /*0x41b835*/
    case 1: /*0x41b829*/
      result = MEMORY[0xB33564]; /*0x41b836*/
      break; /*0x41b83b*/
    case 2: /*0x41b829*/
      result = MEMORY[0xB33568]; /*0x41b83c*/
      break; /*0x41b841*/
    case 3: /*0x41b829*/
      result = MEMORY[0xB3356C]; /*0x41b842*/
      break; /*0x41b847*/
    case 4: /*0x41b829*/
      result = MEMORY[0xB33570]; /*0x41b848*/
      break; /*0x41b84d*/
    case 5: /*0x41b829*/
      result = MEMORY[0xB33574]; /*0x41b84e*/
      break; /*0x41b853*/
    default:
      JUMPOUT(0x41B854); /*0x41b854*/
  }
  return result; /*0x41b835*/
}
