void __thiscall sub_88A080(unsigned int *this)
{
  unsigned int v2; // eax
  int *v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  bool v6; // zf
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx

  v2 = *(this + 0xF);
  if ( v2 )
  {
    if ( v2 >= 0x64 )
      *(this + 0xF) = 0x64;
    v3 = (int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this);
    if ( v3 )
    {
      for ( i = 0; i < *(this + 0xF); ++i )
      {
        v5 = *(this + 0xE);
        v6 = *(_DWORD *)(v5 + 4 * i) == 0;
        v7 = (int *)(v5 + 4 * i);
        if ( !v6 )
        {
          v8 = *v7;
          if ( !*(_DWORD *)(v8 + 8) )
            sub_89BAE0(v3, v8);
        }
        v9 = *(this + 0xE) + 4 * i;
        if ( *(_DWORD *)v9 )
        {
          v10 = *(_DWORD *)v9;
          if ( *(_WORD *)(*(_DWORD *)v9 + 4) )
          {
            if ( !--*(_WORD *)(v10 + 6) )
              (**(void (__thiscall ***)(int, int))v10)(v10, 1);
          }
        }
      }
      _memset(*(this + 0xE), 0, 4 * *(this + 0xF));
      *(this + 0xF) = 0;
    }
  }
}
