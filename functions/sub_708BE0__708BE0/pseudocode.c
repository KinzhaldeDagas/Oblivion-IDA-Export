void __thiscall sub_708BE0(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // ecx
  int v4; // eax
  bool v5; // zf

  if ( *(this + 0x36) )
  {
    v2 = this + 0x33;
    do
    {
      v3 = (int *)*(this + 0x34);
      v4 = *v3;
      v5 = *v3 == 0;
      *(this + 0x34) = *v3;
      if ( v5 )
        *(this + 0x35) = 0;
      else
        *(_DWORD *)(v4 + 4) = 0;
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 0x33, v3);
      --*(this + 0x36);
    }
    while ( *(this + 0x36) );
  }
}
