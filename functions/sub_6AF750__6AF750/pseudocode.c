unsigned int __thiscall sub_6AF750(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax

  ++*(this + 1);
  if ( !*(this + 4) )
  {
    ++*(this + 2);
    *(this + 4) = 8;
  }
  v1 = *(this + 4);
  v2 = *(_DWORD *)(*(this + 5) + 4 * v1--) & *(_DWORD *)(*(this + 3) + 4 * (*(this + 2) & 0xFFF));
  *(this + 4) = v1;
  return v2 >> v1;
}
