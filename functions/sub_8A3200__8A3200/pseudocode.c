void __thiscall sub_8A3200(char *this)
{
  switch ( *(this + 0xD3) ) /*0x8a320e*/
  {
    case 0: /*0x8a320e*/
    case 1: /*0x8a320e*/
    case 2: /*0x8a320e*/
    case 3: /*0x8a320e*/
    case 4: /*0x8a320e*/
    case 5: /*0x8a320e*/
    case 6: /*0x8a320e*/
      return;
    case 7: /*0x8a320e*/
      def_8A320E(); /*0x8a3240*/
      break; /*0x8a3240*/
    default:
      JUMPOUT(0x8A3244); /*0x8a3244*/
  }
}
