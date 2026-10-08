void __thiscall sub_530A10(unsigned int *this, int a2, int *a3)
{
  int *v3; // ebx
  unsigned int v4; // edi
  unsigned int *v5; // esi
  unsigned int *v6; // eax
  int *v7; // ebx
  unsigned int v8; // edi
  unsigned int *v9; // esi
  unsigned int *v10; // eax
  bool v11; // zf
  unsigned int *v12; // eax

  if ( a3 ) /*0x530a1f*/
  {
    sub_530500(this); /*0x530a27*/
    v3 = a3 + 2; /*0x530a2c*/
    if ( a3 != (int *)0xFFFFFFF8 ) /*0x530a31*/
    {
      do /*0x530a77*/
      {
        v4 = *v3; /*0x530a33*/
        if ( !*v3 ) /*0x530a33*/
          break; /*0x530a37*/
        v3 = (int *)v3[1]; /*0x530a3d*/
        v5 = this + 2; /*0x530a40*/
        if ( *(this + 3) ) /*0x530a43*/
        {
          do /*0x530a4b*/
            v5 = (unsigned int *)v5[1]; /*0x530a48*/
          while ( v5[1] ); /*0x530a4b*/
        }
        if ( *v5 ) /*0x530a50*/
        {
          v6 = (unsigned int *)FormHeapAlloc(8u); /*0x530a56*/
          if ( v6 ) /*0x530a60*/
          {
            *v6 = v4; /*0x530a62*/
            v6[1] = 0; /*0x530a64*/
            v5[1] = (unsigned int)v6; /*0x530a67*/
          }
          else
          {
            v5[1] = 0; /*0x530a6e*/
          }
        }
        else
        {
          *v5 = v4; /*0x530a73*/
        }
      }
      while ( v3 ); /*0x530a77*/
    }
    v7 = a3; /*0x530a79*/
    do /*0x530ac7*/
    {
      v8 = *v7; /*0x530a80*/
      if ( !*v7 ) /*0x530a80*/
        break; /*0x530a84*/
      v9 = this; /*0x530a86*/
      v7 = (int *)v7[1]; /*0x530a8a*/
      v10 = this + 1; /*0x530a8f*/
      if ( *(this + 1) ) /*0x530a92*/
      {
        do /*0x530a9e*/
        {
          v9 = (unsigned int *)*v10; /*0x530a96*/
          v11 = *(_DWORD *)(*v10 + 4) == 0; /*0x530a98*/
          v10 = (unsigned int *)(*v10 + 4); /*0x530a9b*/
        }
        while ( !v11 ); /*0x530a9e*/
      }
      if ( *v9 ) /*0x530aa0*/
      {
        v12 = (unsigned int *)FormHeapAlloc(8u); /*0x530aa6*/
        if ( v12 ) /*0x530ab0*/
        {
          *v12 = v8; /*0x530ab2*/
          v12[1] = 0; /*0x530ab4*/
          v9[1] = (unsigned int)v12; /*0x530ab7*/
        }
        else
        {
          v9[1] = 0; /*0x530abe*/
        }
      }
      else
      {
        *v9 = v8; /*0x530ac3*/
      }
    }
    while ( v7 ); /*0x530ac7*/
  }
}
