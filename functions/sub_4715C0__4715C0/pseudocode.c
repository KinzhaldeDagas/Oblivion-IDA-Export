char __thiscall sub_4715C0(_DWORD *this, float a2)
{
  unsigned int i; // esi
  char result; // al

  for ( i = 0; i < *(this + 0x15); ++i )
    result = sub_6C9CB0(*(_DWORD *)(*(this + 0x13) + 4 * i), a2, 0);
  return result;
}
