void __thiscall sub_521BE0(_WORD *this)
{
  __int16 v2; // ax
  __int16 v3; // cx
  unsigned __int16 v4; // di
  unsigned __int16 v5; // bx
  int v6; // eax
  int v7; // ecx
  bool v8; // zf
  _DWORD *v9; // eax
  unsigned __int16 v10; // ax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  v2 = *(this + 6); /*0x521be3*/
  v3 = *(this + 5); /*0x521be7*/
  if ( v2 != v3 )
  {
    if ( v2 ) /*0x521bf9*/
    {
      v4 = 0; /*0x521bfb*/
      v5 = 0; /*0x521bfd*/
      if ( v3 ) /*0x521c02*/
      {
        do /*0x521c2d*/
        {
          v6 = *((_DWORD *)this + 1); /*0x521c05*/
          v7 = *(_DWORD *)(v6 + 4 * v4); /*0x521c0e*/
          if ( v7 ) /*0x521c12*/
          {
            v8 = *(_DWORD *)(v6 + 4 * v5) == v7; /*0x521c17*/
            v9 = (_DWORD *)(v6 + 4 * v5); /*0x521c1a*/
            if ( !v8 ) /*0x521c1d*/
              *v9 = v7; /*0x521c21*/
            ++v5; /*0x521c23*/
          }
          ++v4; /*0x521c26*/
        }
        while ( v4 < *(this + 5) ); /*0x521c2d*/
      }
    }
    v10 = *(this + 6); /*0x521c30*/
    v11 = *((_DWORD *)this + 1); /*0x521c37*/
    *(this + 5) = v10; /*0x521c3a*/
    *(this + 4) = v10; /*0x521c3e*/
    if ( v10 )
    {
      v12 = FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
      v13 = 0; /*0x521c5d*/
      v8 = *(this + 5) == 0; /*0x521c62*/
      *((_DWORD *)this + 1) = v12; /*0x521c66*/
      if ( !v8 ) /*0x521c69*/
      {
        do /*0x521c87*/
        {
          v14 = 4 * (unsigned __int16)v13++; /*0x521c78*/
          *(_DWORD *)(v14 + *((_DWORD *)this + 1)) = *(_DWORD *)(v14 + v11); /*0x521c80*/
        }
        while ( (unsigned __int16)v13 < *(this + 5) ); /*0x521c87*/
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x521c96*/
    }
    FormHeapFree(v11); /*0x521c9e*/
  }
}
