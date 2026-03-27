BOOL __thiscall sub_6B8580(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // ecx

  v1 = *(this + 7);
  if ( v1 )
    *(this + 7) = *(_DWORD *)(v1 + 4);
  v2 = (_DWORD *)*(this + 7);
  return v2 && *v2;
}
