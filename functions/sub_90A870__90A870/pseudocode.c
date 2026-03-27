int __thiscall sub_90A870(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4);
  if ( result )
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x2C))(a2);
  return result;
}
