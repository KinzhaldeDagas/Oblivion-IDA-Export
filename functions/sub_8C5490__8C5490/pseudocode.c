void __thiscall sub_8C5490(unsigned __int16 *this, unsigned int a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // cx
  _WORD *v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  bool v9; // zf
  int v10; // eax
  int i; // eax
  int v12; // ecx

  if ( a2 != *(this + 4) )
  {
    v3 = *(this + 5); /*0x8c54a3*/
    if ( a2 < v3 ) /*0x8c54ae*/
    {
      v4 = a2; /*0x8c54b3*/
      if ( (unsigned __int16)a2 < v3 ) /*0x8c54b6*/
      {
        do /*0x8c54e0*/
        {
          v5 = (_WORD *)(*((_DWORD *)this + 1) + 2 * v4); /*0x8c54cb*/
          if ( *v5 ) /*0x8c54c6*/
          {
            *v5 = 0; /*0x8c54d0*/
            --*(this + 6); /*0x8c54d5*/
          }
          ++v4; /*0x8c54d9*/
        }
        while ( v4 < *(this + 5) ); /*0x8c54e0*/
      }
      *(this + 5) = a2; /*0x8c54e2*/
    }
    v6 = *((_DWORD *)this + 1); /*0x8c54e8*/
    *(this + 4) = a2; /*0x8c54eb*/
    if ( a2 )
    {
      v7 = FormHeapAlloc((unsigned __int64)(unsigned __int16)a2 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * (unsigned __int16)a2);
      v8 = 0; /*0x8c550a*/
      v9 = *(this + 5) == 0; /*0x8c550f*/
      *((_DWORD *)this + 1) = v7; /*0x8c5513*/
      if ( !v9 ) /*0x8c5516*/
      {
        do /*0x8c552f*/
        {
          v10 = 2 * (unsigned __int16)v8++; /*0x8c551e*/
          *(_WORD *)(v10 + *((_DWORD *)this + 1)) = *(_WORD *)(v10 + v6); /*0x8c5527*/
        }
        while ( (unsigned __int16)v8 < *(this + 5) ); /*0x8c552f*/
      }
      for ( i = *(this + 5); (unsigned __int16)i < *(this + 4); *(_WORD *)(*((_DWORD *)this + 1) + 2 * v12) = 0 ) /*0x8c5539*/
        v12 = (unsigned __int16)i++; /*0x8c5543*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x8c5564*/
    }
    FormHeapFree(v6); /*0x8c556c*/
  }
}
