void __thiscall sub_5A56F0(unsigned int *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int i; // eax

  v2 = *(this + 4); /*0x5a56f3*/
  v3 = *(this + 3); /*0x5a56f6*/
  if ( v2 != v3 )
  {
    if ( v2 ) /*0x5a5704*/
    {
      v4 = 0; /*0x5a5706*/
      if ( v3 ) /*0x5a570a*/
      {
        v5 = 0; /*0x5a570c*/
        do /*0x5a572b*/
        {
          v6 = *(this + 1); /*0x5a5710*/
          v7 = *(_DWORD *)(v6 + 4 * v4); /*0x5a5713*/
          if ( v7 ) /*0x5a5718*/
          {
            if ( *(_DWORD *)(v5 + v6) != v7 ) /*0x5a571d*/
              *(_DWORD *)(v5 + v6) = v7; /*0x5a571f*/
            v5 += 4; /*0x5a5722*/
          }
          ++v4; /*0x5a5725*/
        }
        while ( v4 < *(this + 3) ); /*0x5a572b*/
      }
    }
    v8 = *(this + 4); /*0x5a572d*/
    v9 = *(this + 1); /*0x5a5732*/
    *(this + 3) = v8; /*0x5a5735*/
    *(this + 2) = v8; /*0x5a5738*/
    if ( v8 )
    {
      *(this + 1) = FormHeapAlloc((unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8);
      for ( i = 0; i < *(this + 3); ++i ) /*0x5a575b*/
        *(_DWORD *)(*(this + 1) + 4 * i) = *(_DWORD *)(v9 + 4 * i); /*0x5a5766*/
    }
    else
    {
      *(this + 1) = 0; /*0x5a577d*/
    }
    FormHeapFree(v9); /*0x5a5785*/
  }
}
