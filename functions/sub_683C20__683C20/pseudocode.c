void __thiscall sub_683C20(unsigned int *this)
{
  unsigned int *v2; // eax

  while ( *(this + 0xE) || *(this + 0xD) ) /*0x683c2d*/
  {
    FormHeapFree(*(this + 0xD)); /*0x683c33*/
    v2 = (unsigned int *)*(this + 0xE); /*0x683c38*/
    if ( v2 ) /*0x683c40*/
    {
      *(this + 0xE) = v2[1]; /*0x683c45*/
      *(this + 0xD) = *v2; /*0x683c4b*/
      FormHeapFree((unsigned int)v2); /*0x683c4e*/
    }
    else
    {
      *(this + 0xD) = 0; /*0x683c58*/
    }
  }
}
