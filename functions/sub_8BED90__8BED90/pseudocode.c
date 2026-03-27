int __thiscall sub_8BED90(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( a2 )
  {
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
  }
  v3 = *(this + 3);
  if ( v3 )
  {
    if ( *(_WORD *)(v3 + 4) )
    {
      result = (unsigned __int16)--*(_WORD *)(v3 + 6);
      if ( !(_WORD)result )
        result = (**(int (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
  *(this + 3) = a2;
  return result;
}
