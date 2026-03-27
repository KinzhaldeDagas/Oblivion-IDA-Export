void __userpurge sub_748AB0(_DWORD *this@<ecx>, FILE *a2@<ebx>, int a3@<edi>, const char *Str)
{
  size_t v5; // [esp-14h] [ebp-18h]
  size_t v6; // [esp-Ch] [ebp-10h]

  if ( *(this + 0x40) )
  {
    HIDWORD(v6) = a3;
    LODWORD(v6) = *(this + 0x40);
    LODWORD(v5) = 1;
    HIDWORD(v5) = strlen(Str);
    fwrite(Str, v5, v6, a2);
    if ( *((_BYTE *)this + 0x104) )
      fflush((FILE *)*(this + 0x40));
  }
}
