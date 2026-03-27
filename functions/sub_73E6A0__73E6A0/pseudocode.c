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
      HIDWORD(v7) = a2;
      v4 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
      v5 = (const void *)*(this + 0xB);
      if ( v5 )
      {
        v6 = *(this + 0xA);
        if ( v6 >= a3 )
          v6 = a3;
        LODWORD(v7) = 4 * v6;
        memcpy(v4, v5, v7);
      }
      FormHeapFree(*(this + 0xB));
      *(this + 0xB) = v4;
      *(this + 0xA) = a3;
    }
    else
    {
      FormHeapFree(*(this + 0xB));
      *(this + 0xB) = 0;
      *(this + 0xA) = 0;
    }
  }
}
