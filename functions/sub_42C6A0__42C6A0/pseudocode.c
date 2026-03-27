char __thiscall sub_42C6A0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // eax

  if ( *(this + 6) )
    return 1;
  v4 = *(this + 3);
  *(this + 7) = *(_DWORD *)(*(this + 0x55) + 0x1C);
  *(this + 5) = 0;
  *(this + 4) = 0;
  *(this + 6) = 0;
  if ( v4 )
    *(this + 6) = FormHeapAlloc(v4);
  *((_BYTE *)this + 0x24) = 1;
  return 1;
}
