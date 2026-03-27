int __thiscall sub_7124A0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *(this + 0x8C);
  *(this + 0x8C) = v1 + 1;
  v2 = *(_DWORD *)(*(this + 0x89) + 4 * v1);
  if ( v2 == 0xFFFFFFFF )
    return 0;
  else
    return *(_DWORD *)(*(this + 0x7C) + 4 * v2);
}
