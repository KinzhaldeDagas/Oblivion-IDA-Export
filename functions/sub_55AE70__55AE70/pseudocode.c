int __thiscall sub_55AE70(_DWORD *this, unsigned int a2)
{
  int v2; // eax

  v2 = *(this + 2);
  if ( v2 && a2 <= 0xC )
    return *(_DWORD *)(v2 + 4 * a2);
  else
    return 0;
}
