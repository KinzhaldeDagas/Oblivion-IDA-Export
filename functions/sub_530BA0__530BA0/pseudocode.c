void __thiscall sub_530BA0(unsigned int *this, int *a2)
{
  unsigned int *v3; // eax
  unsigned int v4; // esi
  _DWORD *v5; // eax

  if ( a2 ) /*0x530bad*/
  {
    if ( !*(this + 0xC) ) /*0x530baf*/
    {
      v3 = (unsigned int *)FormHeapAlloc(0x10u); /*0x530bb6*/
      if ( v3 ) /*0x530bc0*/
      {
        *v3 = 0; /*0x530bc2*/
        v3[1] = 0; /*0x530bc4*/
        v3[2] = 0; /*0x530bc8*/
        v3[3] = 0; /*0x530bcb*/
        *(this + 0xC) = (unsigned int)v3; /*0x530bd1*/
        sub_530A10(v3, (int)this, a2); /*0x530bd4*/
        return; /*0x530bdc*/
      }
      *(this + 0xC) = 0; /*0x530be1*/
    }
    sub_530A10((unsigned int *)*(this + 0xC), (int)this, a2); /*0x530be9*/
  }
  else
  {
    v4 = *(this + 0xC); /*0x530bf4*/
    if ( v4 ) /*0x530bf9*/
    {
      sub_530500((unsigned int *)*(this + 0xC)); /*0x530bfd*/
      FormHeapFree(v4); /*0x530c03*/
      *(this + 0xC) = 0; /*0x530c0b*/
    }
    v5 = (_DWORD *)FormHeapAlloc(0x10u); /*0x530c10*/
    if ( v5 ) /*0x530c1a*/
    {
      *v5 = 0; /*0x530c1c*/
      v5[1] = 0; /*0x530c1e*/
      v5[2] = 0; /*0x530c21*/
      v5[3] = 0; /*0x530c24*/
      *(this + 0xC) = (unsigned int)v5; /*0x530c27*/
    }
    else
    {
      *(this + 0xC) = 0; /*0x530c32*/
    }
  }
}
