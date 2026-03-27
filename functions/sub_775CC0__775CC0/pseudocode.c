void __thiscall sub_775CC0(unsigned __int16 *this, int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int i; // edi
  int *v6; // eax
  int *v7; // eax

  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 0x10))(a2);
  *(_DWORD *)this = v4;
  NiTArray_SetSize(this + 2, v4);
  for ( i = 0; i < *(_DWORD *)this; ++i )
  {
    v6 = (int *)FormHeapAlloc(0x468u);
    if ( v6 )
      v7 = sub_775A20(v6, a2, i, a3);
    else
      v7 = 0;
    if ( i < *(this + 7) )
    {
      if ( v7 )
      {
        if ( !*(_DWORD *)(*((_DWORD *)this + 2) + 4 * i) )
          ++*(this + 8);
      }
      else if ( *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i) )
      {
        --*(this + 8);
      }
    }
    else
    {
      *(this + 7) = i + 1;
      if ( v7 )
        ++*(this + 8);
    }
    *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i) = v7;
  }
}
