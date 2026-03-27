int __thiscall sub_8B9C80(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // eax

  if ( this && (v1 = (_DWORD *)*(this + 2)) != 0 && (v2 = sub_8AC0C0(v1)) != 0 )
    return *(_DWORD *)(v2 + 8);
  else
    return 0;
}
