void __thiscall sub_9A85C0(unsigned int *this, char *Src)
{
  const char *v2; // ebp
  unsigned int v4; // kr00_4
  const char *v5; // ecx
  unsigned int v6; // edi

  v2 = Src; /*0x9a85c1*/
  if ( Src && *Src ) /*0x9a85cc*/
  {
    v4 = strlen(Src); /*0x9a85d4*/
    v5 = (const char *)*(this + 9); /*0x9a85e0*/
    v6 = v4 + 1; /*0x9a85e8*/
    if ( v5 ) /*0x9a85eb*/
    {
      if ( strlen(v5) < v6 ) /*0x9a85ff*/
      {
        FormHeapFree((unsigned int)v5); /*0x9a8602*/
        *(this + 9) = 0; /*0x9a860a*/
      }
      v2 = Src; /*0x9a8611*/
    }
    if ( !*(this + 9) ) /*0x9a8615*/
      *(this + 9) = FormHeapAlloc(v6); /*0x9a8624*/
    strcpy_s((char *)*(this + 9), v6, v2); /*0x9a862d*/
  }
  else
  {
    FormHeapFree(*(this + 9)); /*0x9a863f*/
    *(this + 9) = 0; /*0x9a8647*/
  }
}
