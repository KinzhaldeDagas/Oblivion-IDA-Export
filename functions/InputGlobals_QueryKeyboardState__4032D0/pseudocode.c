bool __thiscall InputGlobals::QueryKeyboardState(InputGlobal *this, int a2, int a3)
{
  bool v3; // si
  bool result; // al

  v3 = 0;
  switch ( a3 )
  {
    case 0:
      if ( (char)this->CurrentKeyState[a2] >= 0 )
        goto LABEL_11;
      result = 1;
      break;
    case 1:
      if ( (char)this->PreviousKeyState[a2] < 0 || (char)this->CurrentKeyState[a2] >= 0 )
        goto LABEL_11;
      result = 1;
      break;
    case 2:
      if ( (char)this->CurrentKeyState[a2] < 0 || (char)this->PreviousKeyState[a2] >= 0 )
        goto LABEL_11;
      result = 1;
      break;
    case 3:
      v3 = (char)(this->CurrentKeyState[a2] ^ this->PreviousKeyState[a2]) < 0;
      goto LABEL_11;
    default:
LABEL_11:
      result = v3;
      break;
  }
  return result;
}
