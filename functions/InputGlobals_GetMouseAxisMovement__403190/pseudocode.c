LONG __thiscall InputGlobals::GetMouseAxisMovement(InputGlobal *this, int a2)
{
  switch ( a2 ) /*0x403197*/
  {
    case 1: /*0x403197*/
      return this->CurrentMouseState.lX; /*0x4031ba*/
    case 2: /*0x403197*/
      return this->CurrentMouseState.lY; /*0x4031b1*/
    case 3: /*0x403197*/
      return this->CurrentMouseState.lZ; /*0x4031a8*/
  }
  return 0; /*0x4031a5*/
}
