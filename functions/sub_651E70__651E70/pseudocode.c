void __thiscall sub_651E70(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( a2 ) /*0x651e7a*/
  {
    if ( !*(this + 0x5C) ) /*0x651e7c*/
    {
      v3 = (_DWORD *)FormHeapAlloc(8u); /*0x651e87*/
      if ( v3 ) /*0x651e91*/
      {
        *v3 = 0; /*0x651e93*/
        v3[1] = 0; /*0x651e99*/
      }
      else
      {
        v3 = 0; /*0x651ea2*/
      }
      *(this + 0x5C) = v3; /*0x651ea4*/
    }
    v4 = (_DWORD *)*(this + 0x5C); /*0x651eb0*/
    if ( v4 ) /*0x651eb4*/
    {
      while ( *v4 != a2 ) /*0x651eb8*/
      {
        v4 = (_DWORD *)v4[1]; /*0x651eba*/
        if ( !v4 ) /*0x651ebf*/
          goto LABEL_10; /*0x651ebf*/
      }
    }
    else
    {
LABEL_10:
      BSSimpleList_PushFront((_DWORD *)*(this + 0x5C), a2); /*0x651ec1*/
    }
  }
}
