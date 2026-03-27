int __thiscall sub_4BA2A0(int this)
{
  unsigned int v1; // edi

  if ( !*(_WORD *)(this + 0x52) )
    return 0;
  v1 = *(unsigned __int16 *)(this + 0x52);
  return *(_DWORD *)(*(_DWORD *)(this + 0x4C) + 4 * (GetRandomLargeInteger_(0) % v1));
}
