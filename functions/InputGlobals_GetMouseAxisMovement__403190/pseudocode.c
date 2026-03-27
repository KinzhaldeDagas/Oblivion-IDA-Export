LONG __thiscall InputGlobals::GetMouseAxisMovement(InputGlobal *this, int a2)
{
  switch ( a2 )
  {
    case 1:
      return this->CurrentMouseState.lX;
    case 2:
      return this->CurrentMouseState.lY;
    case 3:
      return this->CurrentMouseState.lZ;
  }
  return 0;
}
