void __thiscall sub_7AA4D0(_DWORD *this)
{
  _DWORD *v2; // esi
  unsigned int v3; // edi
  int v4; // eax
  int *v5; // ecx
  int v6; // eax
  bool v7; // zf

  if ( *(this + 0x88E) ) /*0x7aa4d6*/
  {
    v2 = this + 0x88B; /*0x7aa4e0*/
    do /*0x7aa53a*/
    {
      v3 = *(_DWORD *)(*(this + 0x88C) + 8); /*0x7aa4f6*/
      if ( v3 ) /*0x7aa4fb*/
      {
        v4 = *(_DWORD *)(v3 + 0x14); /*0x7aa4fd*/
        if ( v4 ) /*0x7aa502*/
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(_DWORD *)(v3 + 0x14)); /*0x7aa50a*/
          *(_DWORD *)(v3 + 0x14) = 0; /*0x7aa50c*/
        }
        FormHeapFree(v3); /*0x7aa510*/
      }
      v5 = (int *)*(this + 0x88C); /*0x7aa518*/
      v6 = *v5; /*0x7aa51b*/
      v7 = *v5 == 0; /*0x7aa51d*/
      *(this + 0x88C) = *v5; /*0x7aa51f*/
      if ( v7 ) /*0x7aa522*/
        *(this + 0x88D) = 0; /*0x7aa529*/
      else
        *(_DWORD *)(v6 + 4) = 0; /*0x7aa524*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 0x88B, v5); /*0x7aa534*/
      --*(this + 0x88E); /*0x7aa536*/
    }
    while ( *(this + 0x88E) ); /*0x7aa53a*/
  }
}
