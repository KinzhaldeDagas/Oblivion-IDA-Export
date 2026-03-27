int __thiscall sub_8BEF00(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // ecx
  int result; // eax

  v2 = *(this + 1);
  if ( v2 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 4) )
        ++*(_WORD *)(a2 + 6);
    }
    v3 = *(_DWORD *)(v2 + 0xC);
    if ( v3 )
    {
      if ( *(_WORD *)(v3 + 4) )
      {
        result = (unsigned __int16)--*(_WORD *)(v3 + 6);
        if ( !(_WORD)result )
          result = (**(int (__thiscall ***)(int, int))v3)(v3, 1);
      }
    }
    *(_DWORD *)(v2 + 0xC) = a2;
  }
  return result;
}
