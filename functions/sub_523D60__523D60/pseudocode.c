int __thiscall sub_523D60(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *(this + 2);
  if ( v1 && (v2 = *(_DWORD *)(v1 + 0x10)) != 0 )
    return *(_DWORD *)(v2 + 0xB8);
  else
    return 0;
}
