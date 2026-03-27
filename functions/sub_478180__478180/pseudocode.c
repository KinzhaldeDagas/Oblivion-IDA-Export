int __thiscall sub_478180(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 0x4B);
  if ( v1 && *(_BYTE *)(v1 + 4) == 0x1A )
    return *(this + 0x4D);
  else
    return 0;
}
