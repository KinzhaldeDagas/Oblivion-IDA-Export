void __usercall sub_680620(int a1@<esi>, unsigned __int16 a2)
{
  const void *v2; // ebp
  unsigned __int16 v3; // bx
  void *v4; // eax
  size_t v5; // [esp-10h] [ebp-14h]

  if ( a2 > (unsigned __int16)word_B3BF04 )
  {
    HIDWORD(v5) = a1;
    v2 = dword_B3BF00;
    v3 = word_B3BF04;
    v4 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a2);
    dword_B3BF00 = v4;
    word_B3BF04 = a2;
    if ( v4 )
    {
      if ( a2 )
      {
        _memset(v4, 0, 0x10 * a2);
        v4 = dword_B3BF00;
      }
    }
    if ( v2 )
    {
      if ( v3 )
      {
        LODWORD(v5) = 0x10 * v3;
        memcpy(v4, v2, v5);
      }
      FormHeapFree((unsigned int)v2);
    }
  }
}
