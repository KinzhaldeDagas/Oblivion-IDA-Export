int __thiscall sub_90A890(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4);
  if ( result )
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x30))(a2);
  return result;
}
