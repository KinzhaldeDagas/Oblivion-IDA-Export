void __thiscall sub_7AA4D0(_DWORD *this)
{
  _DWORD *v2; // esi
  unsigned int v3; // edi
  int v4; // eax
  int *v5; // ecx
  int v6; // eax
  bool v7; // zf

  if ( *(this + 0x88E) )
  {
    v2 = this + 0x88B;
    do
    {
      v3 = *(_DWORD *)(*(this + 0x88C) + 8);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 0x14);
        if ( v4 )
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(_DWORD *)(v3 + 0x14));
          *(_DWORD *)(v3 + 0x14) = 0;
        }
        FormHeapFree(v3);
      }
      v5 = (int *)*(this + 0x88C);
      v6 = *v5;
      v7 = *v5 == 0;
      *(this + 0x88C) = *v5;
      if ( v7 )
        *(this + 0x88D) = 0;
      else
        *(_DWORD *)(v6 + 4) = 0;
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 0x88B, v5);
      --*(this + 0x88E);
    }
    while ( *(this + 0x88E) );
  }
}
