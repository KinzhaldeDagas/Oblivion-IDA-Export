void __thiscall sub_67B430(_DWORD *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // edx

  if ( this )
  {
    v2 = 0; /*0x67b43c*/
    v3 = this; /*0x67b43e*/
    do /*0x67b44d*/
    {
      if ( *v3 ) /*0x67b440*/
        ++v2; /*0x67b445*/
      v3 = (_DWORD *)v3[1]; /*0x67b448*/
    }
    while ( v3 ); /*0x67b44d*/
    if ( v2 )
    {
      v4 = FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v2);
      v5 = this; /*0x67b475*/
      v6 = (_DWORD *)v4; /*0x67b477*/
      do /*0x67b497*/
      {
        if ( !v5[1] && !*v5 ) /*0x67b486*/
          break; /*0x67b489*/
        *v6 = *v5; /*0x67b48d*/
        v5 = (_DWORD *)v5[1]; /*0x67b48f*/
        ++v6; /*0x67b492*/
      }
      while ( v5 ); /*0x67b497*/
      BSSimpleList_Clear(this); /*0x67b49b*/
      v7 = v2 - 1; /*0x67b4a0*/
      sub_67B110(v4, 0, v7); /*0x67b4a7*/
      for ( ; v7 >= 0; --v7 ) /*0x67b4b1*/
      {
        v8 = *(_DWORD *)(v4 + 4 * v7); /*0x67b4b4*/
        if ( v8 ) /*0x67b4ba*/
        {
          if ( *this ) /*0x67b4bc*/
          {
            v9 = (_DWORD *)FormHeapAlloc(8u); /*0x67b4c3*/
            if ( v9 ) /*0x67b4cd*/
            {
              *v9 = *this; /*0x67b4d1*/
              v9[1] = 0; /*0x67b4d3*/
            }
            else
            {
              v9 = 0; /*0x67b4dc*/
            }
            v9[1] = *(this + 1); /*0x67b4e1*/
            *(this + 1) = v9; /*0x67b4e4*/
          }
          *this = v8; /*0x67b4e7*/
        }
      }
      FormHeapFree(v4); /*0x67b4f0*/
      *(this + 2) = this; /*0x67b4f8*/
      if ( *(this + 1) ) /*0x67b4fb*/
      {
        do /*0x67b50d*/
        {
          v10 = *(_DWORD *)(*(this + 2) + 4); /*0x67b508*/
          *(this + 2) = v10; /*0x67b50a*/
        }
        while ( *(_DWORD *)(v10 + 4) ); /*0x67b50d*/
      }
    }
  }
}
