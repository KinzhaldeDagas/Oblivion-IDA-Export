int __thiscall sub_494F10(_DWORD *this)
{
  int v1; // eax
  int *v2; // eax
  int v3; // eax

  if ( this && (v1 = *(this + 2)) != 0 && (v2 = (int *)(v1 + 0x14)) != 0 && (v3 = *v2) != 0 )
    return *(_DWORD *)(v3 + 8);
  else
    return 0;
}
