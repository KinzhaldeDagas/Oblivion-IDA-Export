char __thiscall sub_42C310(_DWORD *this, int a2, int a3)
{
  unsigned int v5; // eax

  if ( *(this + 6) )
    return 1;
  v5 = *(this + 3);
  *(this + 7) = *(_DWORD *)(*(this + 0x55) + 0x1C);
  *(this + 5) = 0;
  *(this + 4) = 0;
  *(this + 6) = 0;
  if ( v5 )
    *(this + 6) = FormHeapAlloc(v5);
  *((_BYTE *)this + 0x24) = 1;
  return 1;
}
