int __thiscall sub_55AEB0(_DWORD *this, unsigned int a2)
{
  int v2; // eax

  v2 = *(this + 4);
  if ( v2 && a2 <= 0xF )
    return *(_DWORD *)(v2 + 4 * a2);
  else
    return 0;
}
