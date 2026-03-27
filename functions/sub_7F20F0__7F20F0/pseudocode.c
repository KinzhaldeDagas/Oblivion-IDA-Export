int __thiscall sub_7F20F0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 0x3C);
  if ( v1 )
    return *(_DWORD *)(v1 + 8);
  else
    return 0;
}
