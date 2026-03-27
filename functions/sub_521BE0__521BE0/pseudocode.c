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

  v2 = *(this + 6);
  v3 = *(this + 5);
  if ( v2 != v3 )
  {
    if ( v2 )
    {
      v4 = 0;
      v5 = 0;
      if ( v3 )
      {
        do
        {
          v6 = *((_DWORD *)this + 1);
          v7 = *(_DWORD *)(v6 + 4 * v4);
          if ( v7 )
          {
            v8 = *(_DWORD *)(v6 + 4 * v5) == v7;
            v9 = (_DWORD *)(v6 + 4 * v5);
            if ( !v8 )
              *v9 = v7;
            ++v5;
          }
          ++v4;
        }
        while ( v4 < *(this + 5) );
      }
    }
    v10 = *(this + 6);
    v11 = *((_DWORD *)this + 1);
    *(this + 5) = v10;
    *(this + 4) = v10;
    if ( v10 )
    {
      v12 = FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
      v13 = 0;
      v8 = *(this + 5) == 0;
      *((_DWORD *)this + 1) = v12;
      if ( !v8 )
      {
        do
        {
          v14 = 4 * (unsigned __int16)v13++;
          *(_DWORD *)(v14 + *((_DWORD *)this + 1)) = *(_DWORD *)(v14 + v11);
        }
        while ( (unsigned __int16)v13 < *(this + 5) );
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    FormHeapFree(v11);
  }
}
