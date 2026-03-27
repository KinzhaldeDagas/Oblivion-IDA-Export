int __thiscall sub_90A810(_DWORD **this, int a2, int a3, int a4)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD, int, int, int))(**(this + 3) + 0x24))(*(this + 3), a2, a3, a4);
  result = (int)*(this + 4);
  if ( result )
    return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)result + 0x24))(result, a2, a3, a4);
  return result;
}
