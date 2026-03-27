int __thiscall sub_90A850(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4);
  if ( result )
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x28))(a2);
  return result;
}
