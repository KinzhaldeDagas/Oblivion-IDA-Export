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

  v3 = this + 1;
  if ( *(this + 1) )
  {
    do
    {
      v4 = *(_DWORD *)(*v3 + 4);
      FormHeapFree(*v3);
      *v3 = v4;
    }
    while ( v4 );
  }
  result = a2;
  *this = 0;
  if ( a2[1] || *a2 )
  {
    do
    {
      v6 = *a2;
      if ( *a2 )
      {
        v7 = this;
        if ( *v3 )
        {
          v8 = (int)v3;
          do
          {
            v7 = *(_DWORD **)v8;
            v9 = *(_DWORD *)(*(_DWORD *)v8 + 4) == 0;
            v8 = *(_DWORD *)v8 + 4;
          }
          while ( !v9 );
        }
        if ( *v7 )
        {
          v10 = (_DWORD *)FormHeapAlloc(8u);
          if ( v10 )
          {
            *v10 = v6;
            v10[1] = 0;
            v7[1] = v10;
          }
          else
          {
            v7[1] = 0;
          }
        }
        else
        {
          *v7 = v6;
        }
      }
      a2 = (_DWORD *)a2[1];
      result = a2;
    }
    while ( a2 );
  }
  return result;
}
