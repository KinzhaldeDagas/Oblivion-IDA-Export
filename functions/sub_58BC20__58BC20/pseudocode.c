void __thiscall sub_58BC20(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // eax
  int v4; // ecx
  bool v5; // zf
  unsigned int v6; // edi

  if ( *(this + 6) )
  {
    v2 = this + 3;
    do
    {
      v3 = (int *)*(this + 4);
      v4 = *v3;
      v5 = *v3 == 0;
      *(this + 4) = *v3;
      if ( v5 )
        *(this + 5) = 0;
      else
        *(_DWORD *)(v4 + 4) = 0;
      v6 = v3[2];
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 3, v3);
      --*(this + 6);
      if ( v6 )
      {
        FormHeapFree(*(_DWORD *)(v6 + 8));
        *(_DWORD *)(v6 + 8) = 0;
        *(_WORD *)(v6 + 0xE) = 0;
        *(_WORD *)(v6 + 0xC) = 0;
        FormHeapFree(v6);
      }
    }
    while ( *(this + 6) );
  }
}
