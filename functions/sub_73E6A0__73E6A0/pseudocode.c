void __userpurge sub_73E6A0(_DWORD *this@<ecx>, int a2@<ebx>, signed int a3)
{
  void *v4; // ebx
  const void *v5; // eax
  signed int v6; // ecx
  size_t v7; // [esp-8h] [ebp-10h]

  if ( a3 != *(this + 0xA) )
  {
    if ( a3 )
    {
      HIDWORD(v7) = a2; /*0x73e6d6*/
      v4 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
      v5 = (const void *)*(this + 0xB); /*0x73e6e3*/
      if ( v5 ) /*0x73e6eb*/
      {
        v6 = *(this + 0xA); /*0x73e6ed*/
        if ( v6 >= a3 ) /*0x73e6f2*/
          v6 = a3; /*0x73e6f4*/
        LODWORD(v7) = 4 * v6; /*0x73e6fa*/
        memcpy(v4, v5, v7); /*0x73e6fd*/
      }
      FormHeapFree(*(this + 0xB)); /*0x73e709*/
      *(this + 0xB) = v4; /*0x73e711*/
      *(this + 0xA) = a3; /*0x73e714*/
    }
    else
    {
      FormHeapFree(*(this + 0xB)); /*0x73e6b5*/
      *(this + 0xB) = 0; /*0x73e6bd*/
      *(this + 0xA) = 0; /*0x73e6c0*/
    }
  }
}
