void __thiscall sub_65FBB0(unsigned int **this)
{
  unsigned int *v2; // ecx
  int v3; // edx
  unsigned int *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int *v7; // edx
  int *i; // eax
  unsigned int v9; // esi
  unsigned int *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax

  v2 = *(this + 0x16D);
  if ( v2 )
  {
    v3 = 0;
    v4 = v2;
    do
    {
      if ( *v4 )
        ++v3;
      v4 = (unsigned int *)v4[1];
    }
    while ( v4 );
    if ( v3 == 1 )
    {
      FormHeapFree(*v2);
      v5 = *(this + 0x16D);
      v6 = (_DWORD *)v5[1];
      if ( v6 )
      {
        v5[1] = v6[1];
        *v5 = *v6;
        FormHeapFree((unsigned int)v6);
      }
      else
      {
        *v5 = 0;
      }
    }
    else
    {
      v7 = (int *)v2;
      for ( i = (int *)v2[1]; i; i = (int *)i[1] )
        v7 = i;
      v9 = *v7;
      if ( *v7 )
      {
        BSSimpleList_Remove((int *)v2, *v7);
        FormHeapFree(v9);
      }
    }
  }
  else
  {
    v10 = (unsigned int *)FormHeapAlloc(8u);
    if ( v10 )
    {
      *v10 = 0;
      v10[1] = 0;
    }
    else
    {
      v10 = 0;
    }
    *(this + 0x16D) = v10;
  }
  v11 = *(this + 0x16D);
  if ( !v11[1] && !*v11 )
  {
    v12 = (_DWORD *)FormHeapAlloc(8u);
    if ( v12 )
    {
      *v12 = 0;
      v12[1] = 0;
      BSSimpleList_PushFront(*(this + 0x16D), (int)v12);
    }
    else
    {
      BSSimpleList_PushFront(*(this + 0x16D), 0);
    }
  }
}
