void __thiscall sub_5756A0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 9) ) /*0x5756a3*/
  {
    do /*0x5756c4*/
    {
      v2 = *(_DWORD *)(*(this + 9) + 4); /*0x5756b3*/
      FormHeapFree(*(this + 9)); /*0x5756b7*/
      *(this + 9) = v2; /*0x5756c1*/
    }
    while ( v2 ); /*0x5756c4*/
  }
  *(this + 8) = 0; /*0x5756c7*/
  FormHeapFree(*this); /*0x5756d1*/
  *this = 0; /*0x5756d9*/
  *((_WORD *)this + 3) = 0; /*0x5756df*/
  *((_WORD *)this + 2) = 0; /*0x5756e5*/
}
