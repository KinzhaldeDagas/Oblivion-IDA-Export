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
    v3 = *(this + 5);
    if ( a2 < v3 )
    {
      v4 = a2;
      if ( (unsigned __int16)a2 < v3 )
      {
        do
        {
          v5 = (_WORD *)(*((_DWORD *)this + 1) + 2 * v4);
          if ( *v5 )
          {
            *v5 = 0;
            --*(this + 6);
          }
          ++v4;
        }
        while ( v4 < *(this + 5) );
      }
      *(this + 5) = a2;
    }
    v6 = *((_DWORD *)this + 1);
    *(this + 4) = a2;
    if ( a2 )
    {
      v7 = FormHeapAlloc((unsigned __int64)(unsigned __int16)a2 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * (unsigned __int16)a2);
      v8 = 0;
      v9 = *(this + 5) == 0;
      *((_DWORD *)this + 1) = v7;
      if ( !v9 )
      {
        do
        {
          v10 = 2 * (unsigned __int16)v8++;
          *(_WORD *)(v10 + *((_DWORD *)this + 1)) = *(_WORD *)(v10 + v6);
        }
        while ( (unsigned __int16)v8 < *(this + 5) );
      }
      for ( i = *(this + 5); (unsigned __int16)i < *(this + 4); *(_WORD *)(*((_DWORD *)this + 1) + 2 * v12) = 0 )
        v12 = (unsigned __int16)i++;
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    FormHeapFree(v6);
  }
}
