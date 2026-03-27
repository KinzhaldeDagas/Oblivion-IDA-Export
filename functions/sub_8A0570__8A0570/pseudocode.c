int __thiscall sub_8A0570(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx

  if ( this )
    result = *(this + 2);
  else
    result = 0;
  if ( a2 != result )
  {
    if ( result )
    {
      v4 = *(_DWORD *)(result + 8);
      if ( v4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, result);
    }
    return sub_89D400(this, a2);
  }
  return result;
}
