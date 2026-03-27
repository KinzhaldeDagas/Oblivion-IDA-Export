BOOL __thiscall sub_6B7C00(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 2);
  if ( v1 )
    *(this + 2) = *(_DWORD *)(v1 + 4);
  return *(this + 2) != 0;
}
