void __thiscall sub_8B6950(unsigned int *this, char a2)
{
  if ( a2 ) /*0x8b6958*/
  {
    FormHeapFree(*(this + 3)); /*0x8b695e*/
    *(this + 3) = 0; /*0x8b6966*/
  }
}
