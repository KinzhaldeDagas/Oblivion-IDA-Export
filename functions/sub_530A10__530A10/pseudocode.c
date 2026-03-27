void __thiscall sub_530A10(unsigned int *this, int a2, int *a3)
{
  int *v3; // ebx
  int v4; // edi
  int *v5; // esi
  int *v6; // eax
  int *v7; // ebx
  unsigned int v8; // edi
  unsigned int *v9; // esi
  unsigned int **v10; // eax
  bool v11; // zf
  unsigned int *v12; // eax

  if ( a3 )
  {
    sub_530500(this);
    v3 = a3 + 2;
    if ( a3 != (int *)0xFFFFFFF8 )
    {
      do
      {
        v4 = *v3;
        if ( !*v3 )
          break;
        v3 = (int *)v3[1];
        v5 = (int *)(this + 2);
        if ( *(this + 3) )
        {
          do
            v5 = (int *)v5[1];
          while ( v5[1] );
        }
        if ( *v5 )
        {
          v6 = (int *)FormHeapAlloc(8u);
          if ( v6 )
          {
            *v6 = v4;
            v6[1] = 0;
            v5[1] = (int)v6;
          }
          else
          {
            v5[1] = 0;
          }
        }
        else
        {
          *v5 = v4;
        }
      }
      while ( v3 );
    }
    v7 = a3;
    do
    {
      v8 = *v7;
      if ( !*v7 )
        break;
      v9 = this;
      v7 = (int *)v7[1];
      v10 = (unsigned int **)(this + 1);
      if ( *(this + 1) )
      {
        do
        {
          v9 = *v10;
          v11 = (*v10)[1] == 0;
          v10 = (unsigned int **)(*v10 + 1);
        }
        while ( !v11 );
      }
      if ( *v9 )
      {
        v12 = (unsigned int *)FormHeapAlloc(8u);
        if ( v12 )
        {
          *v12 = v8;
          v12[1] = 0;
          v9[1] = (unsigned int)v12;
        }
        else
        {
          v9[1] = 0;
        }
      }
      else
      {
        *v9 = v8;
      }
    }
    while ( v7 );
  }
}
