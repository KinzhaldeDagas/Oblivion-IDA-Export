void __thiscall sub_559E90(unsigned int *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)*(this + 2); /*0x559eb9*/
  if ( v2 ) /*0x559ec6*/
  {
    sub_559A70(v2); /*0x559eca*/
    FormHeapFree((unsigned int)v2); /*0x559ed0*/
  }
  FormHeapFree(*this); /*0x559edb*/
  *this = 0; /*0x559ee3*/
  *((_WORD *)this + 3) = 0; /*0x559ee9*/
  *((_WORD *)this + 2) = 0; /*0x559eef*/
}
