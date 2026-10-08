int __thiscall sub_57D2D0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x57d2d0*/
  if ( (unsigned int)(a2 - 1) > 2 ) /*0x57d2da*/
  {
    *(this + 5) = 0; /*0x57d2e5*/
  }
  else
  {
    *(this + 5) = a2 - 1; /*0x57d2df*/
    return a2 - 1; /*0x57d2dc*/
  }
  return result; /*0x57d2e2*/
}
