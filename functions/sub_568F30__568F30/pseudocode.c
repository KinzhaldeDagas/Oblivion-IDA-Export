_DWORD *__thiscall sub_568F30(_DWORD *this, _DWORD *a2)
{
  unsigned int *v3; // edi
  unsigned int v4; // esi
  _DWORD *result; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // eax
  bool v9; // zf
  _DWORD *v10; // eax

  v3 = this + 1; /*0x568f3a*/
  if ( *(this + 1) ) /*0x568f35*/
  {
    do /*0x568f55*/
    {
      v4 = *(_DWORD *)(*v3 + 4); /*0x568f45*/
      FormHeapFree(*v3); /*0x568f49*/
      *v3 = v4; /*0x568f53*/
    }
    while ( v4 ); /*0x568f55*/
  }
  result = a2; /*0x568f57*/
  *this = 0; /*0x568f5b*/
  if ( a2[1] || *a2 ) /*0x568f6b*/
  {
    do /*0x568fc7*/
    {
      v6 = *a2; /*0x568f74*/
      if ( *a2 ) /*0x568f74*/
      {
        v7 = this; /*0x568f7d*/
        if ( *v3 ) /*0x568f7a*/
        {
          v8 = (int)v3; /*0x568f83*/
          do /*0x568f8e*/
          {
            v7 = *(_DWORD **)v8; /*0x568f85*/
            v9 = *(_DWORD *)(*(_DWORD *)v8 + 4) == 0; /*0x568f87*/
            v8 = *(_DWORD *)v8 + 4; /*0x568f8b*/
          }
          while ( !v9 ); /*0x568f8e*/
        }
        if ( *v7 ) /*0x568f90*/
        {
          v10 = (_DWORD *)FormHeapAlloc(8u); /*0x568f97*/
          if ( v10 ) /*0x568fa1*/
          {
            *v10 = v6; /*0x568fa3*/
            v10[1] = 0; /*0x568fa5*/
            v7[1] = v10; /*0x568fac*/
          }
          else
          {
            v7[1] = 0; /*0x568fb3*/
          }
        }
        else
        {
          *v7 = v6; /*0x568fb8*/
        }
      }
      a2 = (_DWORD *)a2[1]; /*0x568fc3*/
      result = a2; /*0x568fbe*/
    }
    while ( a2 ); /*0x568fc7*/
  }
  return result; /*0x568fc9*/
}
