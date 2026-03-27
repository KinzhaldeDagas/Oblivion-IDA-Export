char __thiscall sub_935C90(_DWORD **this, int a2, int a3)
{
  char result; // al

  (*(void (__thiscall **)(_DWORD, int, int))(**(this + 2) + 4))(*(this + 2), a3, a2);
  result = *((_BYTE *)*(this + 2) + 4);
  *((_BYTE *)this + 4) = result;
  return result;
}
