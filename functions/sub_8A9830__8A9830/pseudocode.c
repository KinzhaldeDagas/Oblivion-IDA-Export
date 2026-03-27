int __thiscall sub_8A9830(int *this)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ecx
  int v5; // ecx

  v2 = *(this + 0x14);
  *this = (int)&off_A97A98;
  v3 = v2;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2) == 6 )
  {
    v4 = *(_DWORD *)(v3 + 0xF0);
    if ( v4 )
    {
      if ( *(_WORD *)(v4 + 4) )
      {
        if ( !--*(_WORD *)(v4 + 6) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
    }
  }
  if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x14) + 8))(*(this + 0x14)) == 7 )
  {
    v5 = *(_DWORD *)(v3 + 0xF0);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 4) )
      {
        if ( !--*(_WORD *)(v5 + 6) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
    }
  }
  if ( *(_WORD *)(v3 + 4) )
  {
    if ( !--*(_WORD *)(v3 + 6) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  return sub_8A6900(this);
}
