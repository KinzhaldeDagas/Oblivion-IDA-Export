int __usercall sub_6D18C0@<eax>(_DWORD *this@<ecx>, va_list a2@<edi>)
{
  int result; // eax
  char *v4; // eax
  size_t v5; // [esp-10h] [ebp-14h]
  char *v6; // [esp-8h] [ebp-Ch]

  result = *(this + 0x16);
  if ( !result )
  {
    v4 = (char *)FormHeapAlloc(0xFu);
    v6 = (char *)*(this + 0x15);
    HIDWORD(v5) = "%d";
    LODWORD(v5) = 0xF;
    *(this + 0x16) = v4;
    sub_6C5D40(a2, v4, v5, v6);
    return *(this + 0x16);
  }
  return result;
}
