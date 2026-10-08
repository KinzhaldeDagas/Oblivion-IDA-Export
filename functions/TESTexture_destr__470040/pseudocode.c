void __thiscall TESTexture_destr(_DWORD *this)
{
  *this = &TESTexture::`vftable'; /*0x470043*/
  FormHeapFree(*(this + 1)); /*0x47004d*/
  *(this + 1) = 0; /*0x470057*/
  *((_WORD *)this + 5) = 0; /*0x47005a*/
  *((_WORD *)this + 4) = 0; /*0x47005e*/
}
