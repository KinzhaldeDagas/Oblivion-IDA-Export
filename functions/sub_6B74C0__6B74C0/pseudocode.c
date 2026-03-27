BOOL __thiscall sub_6B74C0(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // ecx

  v1 = *(this + 2);
  if ( v1 )
    *(this + 2) = *(_DWORD *)(v1 + 4);
  v2 = (_DWORD *)*(this + 2);
  return v2 && *v2;
}
