void __usercall FutBinaryFileC::~FutBinaryFileC(FutBinaryFileC *this@<ecx>, int a2@<edi>)
{
  *(_DWORD *)this = &FutBinaryFileC::`vftable'; /*0x6ed739*/
  sub_6F5FA0((FILE **)this, a2); /*0x6ed747*/
  if ( *((_DWORD *)this + 0xE) >= 0x10u ) /*0x6ed750*/
    FormHeapFree(*((_DWORD *)this + 9)); /*0x6ed756*/
  *((_DWORD *)this + 0xE) = 0xF; /*0x6ed760*/
  *((_DWORD *)this + 0xD) = 0; /*0x6ed767*/
  *((_BYTE *)this + 0x24) = 0; /*0x6ed76a*/
  if ( *((_DWORD *)this + 7) >= 0x10u ) /*0x6ed771*/
    FormHeapFree(*((_DWORD *)this + 2)); /*0x6ed777*/
  *((_DWORD *)this + 7) = 0xF; /*0x6ed77f*/
  *((_DWORD *)this + 6) = 0; /*0x6ed786*/
  *((_BYTE *)this + 8) = 0; /*0x6ed789*/
}
