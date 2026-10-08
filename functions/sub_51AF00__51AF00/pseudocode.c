// Member form of the native idle-group classifier. Reads the low group byte from the encoded key at TESAnimGroup +0x08 and returns true only for Idle, DynamicIdle, BlockIdle, or TorchIdle.
char __thiscall sub_51AF00(unsigned __int8 *this)
{
  char result; // al

  switch ( *(this + 8) ) /*0x51af15*/
  {
    case 0u: /*0x51af15*/
    case 1u: /*0x51af15*/
    case 0x1Bu: /*0x51af15*/
    case 0x21u: /*0x51af15*/
      result = 1; /*0x51af1c*/
      break; /*0x51af1e*/
    default:
      result = 0; /*0x51af1f*/
      break; /*0x51af1f*/
  }
  return result; /*0x51af1e*/
}
