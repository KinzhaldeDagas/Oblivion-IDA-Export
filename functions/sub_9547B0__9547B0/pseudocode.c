char __thiscall sub_9547B0(_DWORD **this, int a2)
{
  char result; // al

  result = *(_BYTE *)(a2 + 4); /*0x9547b5*/
  if ( !result ) /*0x9547bd*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 3) + 8))(*(this + 3), *(_DWORD *)(a2 + 0xEC)); /*0x9547cb*/
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 3) + 8))(*(this + 3), *(_DWORD *)(a2 + 0xF0)); /*0x9547da*/
    *(_DWORD *)(a2 + 0xEC) = 0; /*0x9547dd*/
    *(_DWORD *)(a2 + 0xF0) = 0; /*0x9547e7*/
  }
  return result; /*0x9547f1*/
}
