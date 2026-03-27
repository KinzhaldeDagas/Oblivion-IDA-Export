int __thiscall sub_5E03A0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 0x16);
  if ( v1 )
    return *(_DWORD *)(v1 + 8);
  else
    return 0;
}
