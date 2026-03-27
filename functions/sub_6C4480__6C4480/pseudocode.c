char __thiscall sub_6C4480(_DWORD *this, float a2)
{
  unsigned int i; // esi
  int v4; // ecx

  for ( i = 0; i < *(this + 0x15); ++i )
  {
    v4 = *(_DWORD *)(*(this + 0x13) + 4 * i);
    if ( *(_DWORD *)(v4 + 0x44) == 4 )
      sub_6C9CB0(v4, a2, 0);
  }
  return 0;
}
