int __usercall sub_6D18C0@<eax>(_DWORD *this@<ecx>, va_list a2@<edi>)
{
  int result; // eax
  char *v4; // eax
  size_t v5; // [esp-10h] [ebp-14h]
  char *v6; // [esp-8h] [ebp-Ch]

  result = *(this + 0x16); /*0x6d18c3*/
  if ( !result ) /*0x6d18c8*/
  {
    v4 = (char *)FormHeapAlloc(0xFu); /*0x6d18cc*/
    v6 = (char *)*(this + 0x15); /*0x6d18d4*/
    HIDWORD(v5) = "%d"; /*0x6d18d5*/
    LODWORD(v5) = 0xF; /*0x6d18da*/
    *(this + 0x16) = v4; /*0x6d18dd*/
    sub_6C5D40(a2, v4, v5, v6); /*0x6d18e0*/
    return *(this + 0x16); /*0x6d18e5*/
  }
  return result; /*0x6d18eb*/
}
