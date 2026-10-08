void __thiscall NiDX9AdapterDescArray_Populate(unsigned __int16 *this, int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int i; // edi
  int *v6; // eax
  int *v7; // eax

  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 0x10))(a2); /*0x775cd1*/
  *(_DWORD *)this = v4; /*0x775cd9*/
  NiTArray_SetSize(this + 2, v4); /*0x775cdb*/
  for ( i = 0; i < *(_DWORD *)this; ++i ) /*0x775ce2*/
  {
    v6 = (int *)FormHeapAlloc(0x468u); /*0x775ceb*/
    if ( v6 ) /*0x775cf5*/
      v7 = sub_775A20(v6, a2, i, a3); /*0x775d00*/
    else
      v7 = 0; /*0x775d07*/
    if ( i < *(this + 7) ) /*0x775d0f*/
    {
      if ( v7 ) /*0x775d25*/
      {
        if ( !*(_DWORD *)(*((_DWORD *)this + 2) + 4 * i) ) /*0x775d2a*/
          ++*(this + 8); /*0x775d30*/
      }
      else if ( *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i) ) /*0x775d3a*/
      {
        --*(this + 8); /*0x775d40*/
      }
    }
    else
    {
      *(this + 7) = i + 1; /*0x775d16*/
      if ( v7 ) /*0x775d1a*/
        ++*(this + 8); /*0x775d1c*/
    }
    *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i) = v7; /*0x775d49*/
  }
}
