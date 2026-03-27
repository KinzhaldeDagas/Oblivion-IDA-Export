int __thiscall sub_890560(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *(this + 0x24);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( *(_WORD *)(v3 + 4) )
      {
        result = (unsigned __int16)--*(_WORD *)(v3 + 6);
        if ( !(_WORD)result )
          result = (**(int (__thiscall ***)(int, int))v3)(v3, 1);
      }
    }
    *(this + 0x24) = a2;
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 4) )
        ++*(_WORD *)(a2 + 6);
    }
  }
  return result;
}
