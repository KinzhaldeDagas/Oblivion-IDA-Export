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
      HIDWORD(v8) = a2; /*0x724ae6*/
      v4 = FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a3);
      v5 = (const void *)*(this + 9); /*0x724af1*/
      v6 = (void *)v4; /*0x724af9*/
      if ( v5 ) /*0x724afb*/
      {
        v7 = *(this + 8); /*0x724afd*/
        if ( v7 >= a3 ) /*0x724b02*/
          v7 = a3; /*0x724b04*/
        LODWORD(v8) = 0x10 * v7; /*0x724b09*/
        memcpy(v6, v5, v8); /*0x724b0c*/
      }
      FormHeapFree(*(this + 9)); /*0x724b18*/
      *(this + 9) = v6; /*0x724b20*/
      *(this + 8) = a3; /*0x724b23*/
    }
    else
    {
      FormHeapFree(*(this + 9)); /*0x724ac5*/
      *(this + 9) = 0; /*0x724acd*/
      *(this + 8) = 0; /*0x724ad0*/
    }
  }
}
