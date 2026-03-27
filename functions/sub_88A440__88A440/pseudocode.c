void __thiscall sub_88A440(unsigned int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  bool v6; // zf
  int *v7; // eax
  int v8; // eax
  int v9; // ecx
  char v10; // [esp+7h] [ebp-1h] BYREF

  v2 = *(this + 0x11);
  if ( v2 )
  {
    if ( v2 >= 0xC8 )
      *(this + 0x11) = 0xC8;
    v3 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this);
    if ( v3 )
    {
      for ( i = 0; i < *(this + 0x11); ++i )
      {
        v5 = *(this + 0x10);
        v6 = *(_DWORD *)(v5 + 4 * i) == 0;
        v7 = (int *)(v5 + 4 * i);
        if ( !v6 )
        {
          if ( *(_DWORD *)(*v7 + 8) )
            sub_8988F0(v3, &v10, *v7);
        }
        v8 = *(this + 0x10) + 4 * i;
        if ( *(_DWORD *)v8 )
        {
          v9 = *(_DWORD *)v8;
          if ( *(_WORD *)(*(_DWORD *)v8 + 4) )
          {
            if ( !--*(_WORD *)(v9 + 6) )
              (**(void (__thiscall ***)(int, int))v9)(v9, 1);
          }
        }
      }
      _memset(*(this + 0x10), 0, 4 * *(this + 0x11));
      *(this + 0x11) = 0;
    }
  }
}
