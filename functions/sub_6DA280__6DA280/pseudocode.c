int __thiscall sub_6DA280(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 6);
  if ( result )
    return *(_DWORD *)(result + 8);
  return result;
}
