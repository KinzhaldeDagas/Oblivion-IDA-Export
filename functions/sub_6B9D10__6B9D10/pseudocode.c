int __thiscall sub_6B9D10(unsigned int *this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebp
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edi
  unsigned int v9; // eax
  BSStringT *v10; // eax
  BSStringT *v11; // eax
  BSStringT *v12; // esi
  _DWORD *i; // ecx

  v3 = a2;
  result = *(_DWORD *)(a2 + 0x38);
  *(this + 9) += result;
  v5 = 0;
  if ( *(_DWORD *)(a2 + 0x30) )
  {
    while ( 1 )
    {
      v6 = *(_DWORD **)(v3 + 0x28);
      if ( v5 )
      {
        v7 = v5;
        do
        {
          if ( v6 )
            v6 = (_DWORD *)*v6;
          else
            v6 = 0;
          --v7;
        }
        while ( v7 );
      }
      v8 = v6[2];
      v9 = sub_6B96F0(this, *(const char **)(v8 + 0xC));
      if ( v9 == 0xFFFFFFFF )
      {
        v10 = (BSStringT *)FormHeapAlloc(0x28u);
        v11 = v10 ? sub_6B9BD0(v10, *(char **)(v8 + 0xC), (int)this) : 0;
        v12 = v11;
        sub_6B9B40(this, (int)v11);
      }
      else
      {
        for ( i = (_DWORD *)*(this + 5); v9; --v9 )
        {
          if ( i )
            i = (_DWORD *)*i;
          else
            i = 0;
        }
        v12 = (BSStringT *)i[2];
      }
      sub_6B9D10(v12, v8);
      result = a2;
      if ( (unsigned int)++v5 >= *(_DWORD *)(a2 + 0x30) )
        break;
      v3 = a2;
    }
  }
  return result;
}
