void __thiscall sub_8C9040(unsigned int *this, char a2)
{
  unsigned int v3; // esi

  if ( a2 ) /*0x8c9048*/
  {
    v3 = *(this + 3); /*0x8c904b*/
    if ( v3 ) /*0x8c9050*/
    {
      sub_8C8DB0((int *)*(this + 3)); /*0x8c9054*/
      FormHeapFree(v3); /*0x8c905a*/
    }
    *(this + 3) = 0; /*0x8c9062*/
  }
}
