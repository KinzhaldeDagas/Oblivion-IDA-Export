char __thiscall sub_73D8C0(NiNode *this, int a2)
{
  char result; // al

  result = sub_70AD70(this, a2);
  if ( result )
    return *((_DWORD *)this + 0x37) == *(_DWORD *)(a2 + 0xDC);
  return result;
}
