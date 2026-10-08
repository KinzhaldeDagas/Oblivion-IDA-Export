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
  unsigned int *v12; // esi
  _DWORD *i; // ecx

  v3 = a2; /*0x6b9d37*/
  result = *(_DWORD *)(a2 + 0x38); /*0x6b9d3b*/
  *(this + 9) += result; /*0x6b9d3e*/
  v5 = 0; /*0x6b9d41*/
  if ( *(_DWORD *)(a2 + 0x30) )
  {
    while ( 1 )
    {
      v6 = *(_DWORD **)(v3 + 0x28); /*0x6b9d54*/
      if ( v5 ) /*0x6b9d57*/
      {
        v7 = v5; /*0x6b9d59*/
        do /*0x6b9d6d*/
        {
          if ( v6 ) /*0x6b9d62*/
            v6 = (_DWORD *)*v6; /*0x6b9d64*/
          else
            v6 = 0; /*0x6b9d68*/
          --v7; /*0x6b9d6a*/
        }
        while ( v7 ); /*0x6b9d6d*/
      }
      v8 = v6[2]; /*0x6b9d6f*/
      v9 = sub_6B96F0(this, *(const char **)(v8 + 0xC)); /*0x6b9d78*/
      if ( v9 == 0xFFFFFFFF )
      {
        v10 = (BSStringT *)FormHeapAlloc(0x28u); /*0x6b9d84*/
        v11 = v10 ? sub_6B9BD0(v10, *(char **)(v8 + 0xC), (int)this) : 0;
        v12 = (unsigned int *)v11; /*0x6b9db7*/
        sub_6B9B40(this, (int)v11); /*0x6b9db9*/
      }
      else
      {
        for ( i = (_DWORD *)*(this + 5); v9; --v9 ) /*0x6b9dc5*/
        {
          if ( i ) /*0x6b9dc9*/
            i = (_DWORD *)*i; /*0x6b9dcb*/
          else
            i = 0; /*0x6b9dcf*/
        }
        v12 = (unsigned int *)i[2]; /*0x6b9dd6*/
      }
      sub_6B9D10(v12, v8); /*0x6b9ddc*/
      result = a2; /*0x6b9de1*/
      if ( (unsigned int)++v5 >= *(_DWORD *)(a2 + 0x30) ) /*0x6b9deb*/
        break; /*0x6b9deb*/
      v3 = a2; /*0x6b9d50*/
    }
  }
  return result; /*0x6b9df1*/
}
