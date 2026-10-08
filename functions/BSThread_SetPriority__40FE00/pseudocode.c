BOOL __cdecl BSThread_SetPriority(int a1)
{
  BOOL result; // eax

  switch ( a1 ) /*0x40fe0d*/
  {
    case 0: /*0x40fe0d*/
      unk_B33438 = a1; /*0x40fe20*/
      result = SetThreadPriority(MEMORY[0xB33434], 0xFFFFFFFE); /*0x40fe26*/
      break; /*0x40fe2c*/
    case 1: /*0x40fe0d*/
      unk_B33438 = a1; /*0x40fe37*/
      result = SetThreadPriority(MEMORY[0xB33434], 0xFFFFFFFF); /*0x40fe3d*/
      break; /*0x40fe43*/
    case 3: /*0x40fe0d*/
      unk_B33438 = a1; /*0x40fe50*/
      result = SetThreadPriority(MEMORY[0xB33434], 1); /*0x40fe56*/
      break; /*0x40fe5c*/
    case 4: /*0x40fe0d*/
      unk_B33438 = a1; /*0x40fe69*/
      result = SetThreadPriority(MEMORY[0xB33434], 2); /*0x40fe6f*/
      break; /*0x40fe75*/
    case 5: /*0x40fe0d*/
      unk_B33438 = a1; /*0x40fe82*/
      result = SetThreadPriority(MEMORY[0xB33434], 0xF); /*0x40fe88*/
      break; /*0x40fe8e*/
    default:
      unk_B33438 = a1; /*0x40fe98*/
      result = SetThreadPriority(MEMORY[0xB33434], 0); /*0x40fe9e*/
      break; /*0x40fe9e*/
  }
  return result; /*0x40fe2c*/
}
