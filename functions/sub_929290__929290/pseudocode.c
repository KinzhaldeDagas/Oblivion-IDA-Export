double __thiscall sub_929290(_DWORD *this, float a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+4h] [ebp-4h]

  v3 = sub_8ECB30(LODWORD(a2)); /*0x929299*/
  v4 = *(this + 9) - 1; /*0x9292a4*/
  v6 = v3; /*0x9292a7*/
  if ( v3 >= v4 ) /*0x9292ab*/
    return (*(float *)(*(this + 0xB) + 4 * v4) - *(float *)(4 * v4 + *(this + 0xB) - 4)) /*0x9292d1*/
         * (a2 - (double)(*(this + 9) - 1))
         + *(float *)(*(this + 0xB) + 4 * v4);
  if ( v3 < 0 ) /*0x9292da*/
  {
    v3 = 0; /*0x9292dc*/
    v6 = 0; /*0x9292de*/
  }
  return (*(float *)(*(this + 0xB) + 4 * v3 + 4) - *(float *)(*(this + 0xB) + 4 * v3)) * (a2 - (double)v6) /*0x9292d4*/
       + *(float *)(*(this + 0xB) + 4 * v3);
}
