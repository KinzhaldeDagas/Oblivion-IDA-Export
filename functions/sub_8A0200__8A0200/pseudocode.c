int __thiscall sub_8A0200(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax

  v3 = *(this + 1);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 0;
    v4 = *(this + 1);
    if ( *(_WORD *)(v4 + 4) )
    {
      if ( !--*(_WORD *)(v4 + 6) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
  }
  result = a2;
  if ( a2 )
  {
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
    *(_DWORD *)(a2 + 8) = this;
  }
  *(this + 1) = a2;
  return result;
}
