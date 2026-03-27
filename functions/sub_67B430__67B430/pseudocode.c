void __thiscall sub_67B430(_DWORD *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // edx

  if ( this )
  {
    v2 = 0;
    v3 = this;
    do
    {
      if ( *v3 )
        ++v2;
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
    if ( v2 )
    {
      v4 = FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v2);
      v5 = this;
      v6 = (_DWORD *)v4;
      do
      {
        if ( !v5[1] && !*v5 )
          break;
        *v6 = *v5;
        v5 = (_DWORD *)v5[1];
        ++v6;
      }
      while ( v5 );
      BSSimpleList_Clear(this);
      v7 = v2 - 1;
      sub_67B110(v4, 0, v7);
      for ( ; v7 >= 0; --v7 )
      {
        v8 = *(_DWORD *)(v4 + 4 * v7);
        if ( v8 )
        {
          if ( *this )
          {
            v9 = (_DWORD *)FormHeapAlloc(8u);
            if ( v9 )
            {
              *v9 = *this;
              v9[1] = 0;
            }
            else
            {
              v9 = 0;
            }
            v9[1] = *(this + 1);
            *(this + 1) = v9;
          }
          *this = v8;
        }
      }
      FormHeapFree(v4);
      *(this + 2) = this;
      if ( *(this + 1) )
      {
        do
        {
          v10 = *(_DWORD *)(*(this + 2) + 4);
          *(this + 2) = v10;
        }
        while ( *(_DWORD *)(v10 + 4) );
      }
    }
  }
}
