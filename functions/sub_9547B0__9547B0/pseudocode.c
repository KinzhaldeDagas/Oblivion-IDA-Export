char __thiscall sub_9547B0(_DWORD **this, int a2)
{
  char result; // al

  result = *(_BYTE *)(a2 + 4);
  if ( !result )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 3) + 8))(*(this + 3), *(_DWORD *)(a2 + 0xEC));
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 3) + 8))(*(this + 3), *(_DWORD *)(a2 + 0xF0));
    *(_DWORD *)(a2 + 0xEC) = 0;
    *(_DWORD *)(a2 + 0xF0) = 0;
  }
  return result;
}
