bhkCharacterController *__thiscall bhkCharacterListenerSpell::`scalar deleting destructor'(
        bhkCharacterController *this,
        char a2)
{
  bhkCharacterController::~bhkCharacterController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( this )
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  }
  return this;
}
