int __thiscall sub_8BA120(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  int result; // eax

  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  v4 = *(this + a3 + 2);
  if ( v4 )
  {
    if ( *(_WORD *)(v4 + 4) )
    {
      if ( !--*(_WORD *)(v4 + 6) )
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
    }
  }
  *(this + a3 + 2) = a2;
  return result;
}
