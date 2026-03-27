void __userpurge sub_413570(_DWORD *this@<ecx>, int a2@<ebx>, char a3, rsize_t MaxCount)
{
  unsigned int v5; // ebx
  rsize_t v6; // [esp-10h] [ebp-18h]
  rsize_t v7; // [esp-4h] [ebp-Ch]

  if ( a3 )
  {
    if ( *(this + 6) >= 0x10u )
    {
      LODWORD(v7) = a2;
      v5 = *(this + 1);
      if ( (_DWORD)MaxCount )
      {
        HIDWORD(v6) = *(this + 1);
        LODWORD(v6) = 0x10;
        memcpy_s(this + 1, v6, (const void *)MaxCount, v7);
      }
      FormHeapFree(v5);
    }
  }
  *(this + 5) = MaxCount;
  *(this + 6) = 0xF;
  *((_BYTE *)this + MaxCount + 4) = 0;
}
