int __thiscall sub_89D430(_DWORD *this, char a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 2);
  if ( v2 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(v2 + 4) )
        ++*(_WORD *)(v2 + 6);
    }
    else if ( *(_WORD *)(v2 + 4) )
    {
      result = (unsigned __int16)--*(_WORD *)(v2 + 6);
      if ( !(_WORD)result )
        return (**(int (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
  return result;
}
