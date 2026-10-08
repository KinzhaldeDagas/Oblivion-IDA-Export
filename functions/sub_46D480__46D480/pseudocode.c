void __thiscall sub_46D480(unsigned int *this)
{
  if ( *(this + 1) ) /*0x46d483*/
  {
    FormHeapFree(*(this + 1)); /*0x46d48b*/
    *(this + 1) = 0; /*0x46d493*/
  }
  *(_BYTE *)this = 0; /*0x46d49a*/
}
