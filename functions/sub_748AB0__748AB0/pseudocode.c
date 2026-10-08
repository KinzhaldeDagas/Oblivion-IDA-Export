void __userpurge sub_748AB0(_DWORD *this@<ecx>, FILE *a2@<ebx>, int a3@<edi>, const char *Str)
{
  size_t v5; // [esp-14h] [ebp-18h]
  size_t v6; // [esp-Ch] [ebp-10h]

  if ( *(this + 0x40) ) /*0x748ab3*/
  {
    HIDWORD(v6) = a3; /*0x748abe*/
    LODWORD(v6) = *(this + 0x40); /*0x748ad1*/
    LODWORD(v5) = 1; /*0x748ad5*/
    HIDWORD(v5) = strlen(Str); /*0x748ac5*/
    fwrite(Str, v5, v6, a2); /*0x748ad8*/
    if ( *((_BYTE *)this + 0x104) ) /*0x748ae0*/
      fflush((FILE *)*(this + 0x40)); /*0x748af2*/
  }
}
