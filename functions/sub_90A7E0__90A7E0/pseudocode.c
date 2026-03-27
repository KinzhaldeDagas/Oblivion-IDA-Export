int __thiscall sub_90A7E0(_DWORD **this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD, int))(**(this + 3) + 0x20))(*(this + 3), a2);
  result = (int)*(this + 4);
  if ( result )
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x20))(a2);
  return result;
}
