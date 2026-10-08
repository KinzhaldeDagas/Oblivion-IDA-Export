void __thiscall sub_8A1AE0(unsigned int *this, char a2)
{
  unsigned int v3; // esi

  if ( a2 ) /*0x8a1ae8*/
  {
    v3 = *(this + 3); /*0x8a1aeb*/
    if ( v3 ) /*0x8a1af0*/
    {
      sub_893510((int *)*(this + 3)); /*0x8a1af4*/
      FormHeapFree(v3); /*0x8a1afa*/
    }
    *(this + 3) = 0; /*0x8a1b02*/
  }
}
