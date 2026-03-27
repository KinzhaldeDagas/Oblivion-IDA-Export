void __thiscall sub_589BB0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // ecx
  int v5; // ecx
  int v6; // ecx
  _DWORD *v7; // ecx
  unsigned int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ecx
  unsigned int v16; // ecx

  while ( *(_DWORD *)(*(this + 4) + 4) )
  {
    v2 = *(_DWORD **)(*(this + 4) + 4);
    if ( v2 )
    {
      v3 = (_DWORD *)*v2;
      if ( *v2 )
      {
        do
          v3 = (_DWORD *)*v3;
        while ( v3 );
      }
      if ( *v2 )
        *(_DWORD *)(*v2 + 4) = v2[1];
      v4 = (_DWORD *)v2[1];
      if ( v4 )
        *v4 = *v2;
      v5 = v2[4];
      if ( v5 )
        *(_DWORD *)(v5 + 0x14) = v2[5];
      v6 = v2[5];
      if ( v6 )
        *(_DWORD *)(v6 + 0x10) = v2[4];
      *v2 = 0;
      v2[1] = 0;
      v2[4] = 0;
      v2[5] = 0;
      FormHeapFree((unsigned int)v2);
    }
  }
  v7 = (_DWORD *)*(this + 4);
  if ( v7 )
  {
    sub_5888E0(v7);
    FormHeapFree(v8);
  }
  v9 = *(this + 5);
  *(this + 4) = 0;
  if ( *(_DWORD *)(v9 + 0x14) )
  {
    do
    {
      v10 = *(_DWORD **)(*(this + 5) + 0x14);
      if ( v10 )
      {
        v11 = (_DWORD *)*v10;
        if ( *v10 )
        {
          do
            v11 = (_DWORD *)*v11;
          while ( v11 );
        }
        if ( *v10 )
          *(_DWORD *)(*v10 + 4) = v10[1];
        v12 = (_DWORD *)v10[1];
        if ( v12 )
          *v12 = *v10;
        v13 = v10[4];
        if ( v13 )
          *(_DWORD *)(v13 + 0x14) = v10[5];
        v14 = v10[5];
        if ( v14 )
          *(_DWORD *)(v14 + 0x10) = v10[4];
        *v10 = 0;
        v10[1] = 0;
        v10[4] = 0;
        v10[5] = 0;
        FormHeapFree((unsigned int)v10);
      }
    }
    while ( *(_DWORD *)(*(this + 5) + 0x14) );
  }
  v15 = (_DWORD *)*(this + 5);
  if ( v15 )
  {
    sub_5888E0(v15);
    FormHeapFree(v16);
  }
  *(this + 5) = 0;
  FormHeapFree(*(this + 2));
  *(this + 2) = 0;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 6) = 0;
  *((float *)this + 1) = 0.0;
  *this = 0;
  FormHeapFree(*(this + 2));
  *(this + 2) = 0;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 6) = 0;
}
