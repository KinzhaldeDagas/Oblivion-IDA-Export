void __thiscall sub_7762D0(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // eax
  int v4; // ecx
  bool v5; // zf
  int v6; // edi
  int v7; // edi

  if ( *(this + 7) )
  {
    v2 = this + 4;
    do
    {
      v3 = (int *)*(this + 5);
      v4 = *v3;
      v5 = *v3 == 0;
      *(this + 5) = *v3;
      if ( v5 )
        *(this + 6) = 0;
      else
        *(_DWORD *)(v4 + 4) = 0;
      v6 = v3[2];
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 4, v3);
      --*(this + 7);
      v7 = *(_DWORD *)(v6 + 0x104);
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 8) + 0xD4))(
        *(this + 8),
        *(_DWORD *)(v7 + 0x6C),
        0);
      *(_BYTE *)(v7 + 0x71) = 0;
    }
    while ( *(this + 7) );
    *(this + 0xB) = *(this + 0xA);
  }
  else
  {
    *(this + 0xB) = *(this + 0xA);
  }
}
