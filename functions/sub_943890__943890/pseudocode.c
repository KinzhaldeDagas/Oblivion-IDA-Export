_DWORD *__thiscall sub_943890(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this; /*0x943890*/
  *(this + 4) = 5; /*0x943897*/
  *(this + 3) = 5; /*0x94389a*/
  *this = 0x3DCCCCCD; /*0x9438a4*/
  *(this + 1) = 0x3E8; /*0x9438aa*/
  *(this + 2) = 0xA; /*0x9438b1*/
  if ( a2 ) /*0x9438b8*/
  {
    if ( a2 == 1 ) /*0x9438bb*/
    {
      *this = 0x3D4CCCCD; /*0x9438bd*/
      *(this + 2) = 0x1E; /*0x9438c3*/
    }
  }
  else
  {
    *this = 0x3E4CCCCD; /*0x9438cd*/
  }
  return result; /*0x9438ca*/
}
