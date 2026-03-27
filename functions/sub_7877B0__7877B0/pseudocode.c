unsigned int __thiscall sub_7877B0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 0x1B);
  if ( v1 )
    return ((*(this + 0x1C) - v1) >> 2) / 3u;
  else
    return 0;
}
