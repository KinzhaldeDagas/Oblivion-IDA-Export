int __thiscall sub_6508D0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax

  if ( !a2 )
    return *(this + 0x42);
  v2 = *(this + 0x39);
  if ( !v2 )
    return *(this + 0x42);
  v3 = *(char *)(*(_DWORD *)(v2 + 8) + 0x90);
  if ( v3 == 1 || v3 > 2 && v3 <= 5 )
    return sub_477EC0(a2, 4);
  else
    return sub_477EC0(a2, 5);
}
