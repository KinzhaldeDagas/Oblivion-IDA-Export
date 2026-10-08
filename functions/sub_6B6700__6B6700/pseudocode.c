void __thiscall sub_6B6700(unsigned int *this)
{
  if ( (*this & 0x4000) != 0 ) /*0x6b670e*/
    --unk_B3C20C; /*0x6b6710*/
  --unk_B3C210; /*0x6b6716*/
  if ( *(this + 0x13) ) /*0x6b671c*/
    FormHeapFree(*(this + 0x13)); /*0x6b6724*/
  if ( *(this + 0x14) ) /*0x6b672c*/
  {
    while ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 0x14) + 8))(*(this + 0x14)) ) /*0x6b673b*/
      ; /*0x6b6732*/
    *(this + 0x14) = 0; /*0x6b6741*/
  }
  if ( *(this + 0x15) ) /*0x6b6744*/
  {
    while ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 0x15) + 8))(*(this + 0x15)) ) /*0x6b6759*/
      ; /*0x6b6750*/
    *(this + 0x15) = 0; /*0x6b675f*/
  }
}
