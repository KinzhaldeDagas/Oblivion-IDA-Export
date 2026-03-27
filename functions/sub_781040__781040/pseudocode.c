int __thiscall sub_781040(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 0x10);
  if ( result != a2 )
  {
    if ( result )
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
    *(this + 0x10) = a2;
    if ( a2 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  }
  return result;
}
