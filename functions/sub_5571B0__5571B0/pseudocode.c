char __thiscall sub_5571B0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  *(this + 1) = 0; /*0x5571bb*/
  *(this + 2) = 0; /*0x5571be*/
  *(this + 3) = 0; /*0x5571c1*/
  if ( !a2 ) /*0x5571c4*/
    return 0; /*0x5571c6*/
  v4 = FormHeapAlloc(6 * a2); /*0x5571dd*/
  *(this + 3) = v4 + 6 * a2; /*0x5571e7*/
  *(this + 1) = v4; /*0x5571ea*/
  *(this + 2) = v4; /*0x5571ed*/
  return 1; /*0x5571c8*/
}
