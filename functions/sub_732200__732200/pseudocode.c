void __thiscall sub_732200(const void **this, unsigned int a3)
{
  int v2; // edi
  const void *v4; // edi
  void *v5; // eax
  int v6; // esi
  size_t v7; // [esp-8h] [ebp-Ch]

  if ( (const void *)a3 != *(this + 2) )
  {
    if ( a3 < (unsigned int)*(this + 1) )
      *(this + 1) = (const void *)a3;
    HIDWORD(v7) = v2;
    v4 = *this;
    *(this + 2) = (const void *)a3;
    if ( a3 )
    {
      v5 = (void *)FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
      *this = v5;
      v6 = (int)*(this + 1);
      if ( v6 )
      {
        LODWORD(v7) = 4 * v6;
        memcpy(v5, v4, v7);
        FormHeapFree((unsigned int)v4);
        return;
      }
    }
    else
    {
      *this = 0;
    }
    FormHeapFree((unsigned int)v4);
  }
}
