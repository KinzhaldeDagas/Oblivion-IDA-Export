void __thiscall sub_65D620(_DWORD *this, char a2)
{
  if ( !a2 ) /*0x65d62a*/
  {
    FormHeapFree(*(this + 0x16C)); /*0x65d633*/
    *(this + 0x16C) = 0; /*0x65d63b*/
  }
  *((_BYTE *)this + 0x6E5) = a2; /*0x65d645*/
}
