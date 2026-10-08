bhkCharacterController *__thiscall bhkCharacterListenerSpell::`scalar deleting destructor'(
        bhkCharacterController *this,
        char a2)
{
  bhkCharacterController::~bhkCharacterController(this); /*0x60d923*/
  if ( (a2 & 1) != 0 ) /*0x60d92d*/
  {
    if ( this ) /*0x60d931*/
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x60d941*/
  }
  return this; /*0x60d948*/
}
