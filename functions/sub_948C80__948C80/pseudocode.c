char __thiscall sub_948C80(_DWORD **this, int a2)
{
  char result; // al

  result = sub_947910(this, (char *)a2, 4, 3);
  *(_DWORD *)(a2 + 0xC) = 0;
  return result;
}
