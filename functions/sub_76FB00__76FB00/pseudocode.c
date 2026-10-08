// MoonSugarEffect decode: vertex declaration element initializer. Clears fields and marks the element disabled with usage/type sentinel values 0xFFFFFFFF and 0x11.
_DWORD *__thiscall sub_76FB00(_DWORD *this)
{
  *this = 0; /*0x76fb04*/
  *(this + 1) = 0; /*0x76fb06*/
  *(this + 2) = 0xFFFFFFFF; /*0x76fb09*/
  *(this + 3) = 0x11; /*0x76fb10*/
  *(this + 4) = 0; /*0x76fb17*/
  *(this + 5) = 0; /*0x76fb1a*/
  *(this + 6) = 0; /*0x76fb1d*/
  return this; /*0x76fb20*/
}
