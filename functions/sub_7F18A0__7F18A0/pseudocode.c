void __userpurge sub_7F18A0(_DWORD *this@<ecx>, int a2@<edi>, void *Src, unsigned int a4)
{
  void *v5; // eax
  unsigned int v6; // esi
  size_t v7; // [esp-Ch] [ebp-10h]

  if ( Src )
  {
    v5 = (void *)*(this + 2);
    if ( v5 )
    {
      v6 = a4;
      if ( a4 )
      {
        if ( a4 >= 0xC0 )
          v6 = 0xC0;
        HIDWORD(v7) = a2;
        LODWORD(v7) = 4 * v6;
        memcpy(v5, Src, v7);
        if ( v6 < 0xC0 )
          _memset(4 * v6 + *(this + 2), 0, 4 * (0xC0 - v6));
      }
    }
  }
}
