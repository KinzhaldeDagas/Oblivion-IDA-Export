int *__thiscall sub_689A60(int *this, int *a2)
{
  int *result; // eax
  int *i; // ebx
  _BYTE *v4; // eax
  _BYTE *v5; // edi
  int v6; // eax
  int *v7; // esi
  bool v8; // zf
  _DWORD *v9; // eax
  int *v10; // eax
  int *v11; // esi
  _DWORD *v12; // eax

  sub_689A00(this);
  result = a2;
  for ( i = 0; a2; result = a2 )
  {
    if ( !a2[1] && !*a2 )
      return result;
    v4 = (_BYTE *)FormHeapAlloc(8u);
    if ( v4 )
      v5 = sub_68B0C0(v4);
    else
      v5 = 0;
    sub_68B1D0((int)v5, 0);
    sub_68B100(v5, *a2);
    if ( !i )
    {
      i = this + 1;
      if ( v5 )
      {
        v10 = this + 2;
        v11 = this + 1;
        if ( *(this + 2) )
        {
          do
          {
            v11 = (int *)*v10;
            v8 = *(_DWORD *)(*v10 + 4) == 0;
            v10 = (int *)(*v10 + 4);
          }
          while ( !v8 );
        }
        if ( *v11 )
        {
          v12 = (_DWORD *)FormHeapAlloc(8u);
          if ( v12 )
          {
            *v12 = v5;
            v12[1] = 0;
            v11[1] = (int)v12;
          }
          else
          {
            v11[1] = 0;
          }
        }
        else
        {
          *v11 = (int)v5;
        }
      }
      goto LABEL_26;
    }
    if ( v5 )
    {
      v6 = (int)(i + 1);
      v7 = i;
      if ( i[1] )
      {
        do
        {
          v7 = *(int **)v6;
          v8 = *(_DWORD *)(*(_DWORD *)v6 + 4) == 0;
          v6 = *(_DWORD *)v6 + 4;
        }
        while ( !v8 );
      }
      if ( *v7 )
      {
        v9 = (_DWORD *)FormHeapAlloc(8u);
        if ( v9 )
        {
          *v9 = v5;
          v9[1] = 0;
          v7[1] = (int)v9;
        }
        else
        {
          v7[1] = 0;
        }
        i = (int *)i[1];
        goto LABEL_26;
      }
      *v7 = (int)v5;
    }
    i = (int *)i[1];
LABEL_26:
    a2 = (int *)a2[1];
  }
  return result;
}
