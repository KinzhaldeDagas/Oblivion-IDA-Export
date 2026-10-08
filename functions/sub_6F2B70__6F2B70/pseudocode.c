void __thiscall sub_6F2B70(_DWORD *this, unsigned int a2, int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // ebx
  char *v10; // ebp
  char *v11; // ebp
  unsigned int v12; // ebx
  char *v13; // edi
  bool v14; // cc

  v7 = *(this + 1); /*0x6f2b75*/
  if ( v7 ) /*0x6f2b7b*/
    v8 = (int)(*(this + 2) - v7) >> 4; /*0x6f2b86*/
  else
    v8 = 0; /*0x6f2b7d*/
  if ( v8 >= a2 ) /*0x6f2b8f*/
  {
    if ( v7 ) /*0x6f2bc7*/
    {
      v11 = (char *)*(this + 2); /*0x6f2bc9*/
      if ( a2 < (int)&v11[-v7] >> 4 ) /*0x6f2bd5*/
      {
        if ( v7 > (unsigned int)v11 ) /*0x6f2bd9*/
          _invalid_parameter_noinfo(); /*0x6f2bdb*/
        v12 = *(this + 1); /*0x6f2be0*/
        if ( v12 > *(this + 2) ) /*0x6f2be6*/
          _invalid_parameter_noinfo(); /*0x6f2be8*/
        v13 = (char *)(v12 + 0x10 * a2); /*0x6f2bf0*/
        v14 = (unsigned int)v13 <= *(this + 2); /*0x6f2bf2*/
        a4 = v12; /*0x6f2bf5*/
        if ( !v14 || (unsigned int)v13 < *(this + 1) ) /*0x6f2bfe*/
          _invalid_parameter_noinfo(); /*0x6f2c00*/
        sub_6F14D0(this, &a3, (int)this, v13, (int)this, v11); /*0x6f2c10*/
      }
    }
  }
  else
  {
    if ( v7 ) /*0x6f2b93*/
      v9 = (int)(*(this + 2) - v7) >> 4; /*0x6f2b9e*/
    else
      v9 = 0; /*0x6f2b95*/
    v10 = (char *)*(this + 2); /*0x6f2ba1*/
    if ( v7 > (unsigned int)v10 ) /*0x6f2ba6*/
      _invalid_parameter_noinfo(); /*0x6f2ba8*/
    sub_6F1E00(this, (int)this, v10, a2 - v9, &a3); /*0x6f2bb9*/
  }
}
