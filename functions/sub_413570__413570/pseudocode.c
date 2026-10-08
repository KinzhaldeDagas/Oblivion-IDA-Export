void __userpurge sub_413570(_DWORD *this@<ecx>, int a2@<ebx>, char a3, rsize_t MaxCount)
{
  unsigned int v5; // ebx
  rsize_t v6; // [esp-10h] [ebp-18h]
  rsize_t v7; // [esp-4h] [ebp-Ch]

  if ( a3 ) /*0x41357d*/
  {
    if ( *(this + 6) >= 0x10u ) /*0x413583*/
    {
      LODWORD(v7) = a2; /*0x41358a*/
      v5 = *(this + 1); /*0x41358b*/
      if ( (_DWORD)MaxCount ) /*0x41358d*/
      {
        HIDWORD(v6) = *(this + 1); /*0x413590*/
        LODWORD(v6) = 0x10; /*0x413591*/
        memcpy_s(this + 1, v6, (const void *)MaxCount, v7); /*0x413594*/
      }
      FormHeapFree(v5); /*0x41359d*/
    }
  }
  *(this + 5) = MaxCount; /*0x4135a6*/
  *(this + 6) = 0xF; /*0x4135a9*/
  *((_BYTE *)this + MaxCount + 4) = 0; /*0x4135b0*/
}
