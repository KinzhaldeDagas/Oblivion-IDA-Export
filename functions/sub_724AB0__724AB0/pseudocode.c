void __userpurge sub_724AB0(_DWORD *this@<ecx>, int a2@<ebx>, signed int a3)
{
  int v4; // eax
  const void *v5; // ecx
  void *v6; // ebx
  signed int v7; // eax
  size_t v8; // [esp-8h] [ebp-10h]

  if ( a3 != *(this + 8) )
  {
    if ( a3 )
    {
      HIDWORD(v8) = a2;
      v4 = FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a3);
      v5 = (const void *)*(this + 9);
      v6 = (void *)v4;
      if ( v5 )
      {
        v7 = *(this + 8);
        if ( v7 >= a3 )
          v7 = a3;
        LODWORD(v8) = 0x10 * v7;
        memcpy(v6, v5, v8);
      }
      FormHeapFree(*(this + 9));
      *(this + 9) = v6;
      *(this + 8) = a3;
    }
    else
    {
      FormHeapFree(*(this + 9));
      *(this + 9) = 0;
      *(this + 8) = 0;
    }
  }
}
