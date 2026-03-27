int __thiscall sub_8A07B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = sub_8A0200(this, a2);
  if ( *(_WORD *)(a2 + 4) )
  {
    result = (unsigned __int16)--*(_WORD *)(a2 + 6);
    if ( !(_WORD)result )
      return (**(int (__thiscall ***)(int, int))a2)(a2, 1);
  }
  return result;
}
