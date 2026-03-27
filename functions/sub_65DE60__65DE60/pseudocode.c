int __thiscall sub_65DE60(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  if ( this && (v1 = *(this + 2)) != 0 )
    v2 = *(_DWORD *)(v1 + 0x18);
  else
    v2 = 0;
  if ( v2 )
    return *(_DWORD *)(v2 + 0xC);
  else
    return 0;
}
