int __thiscall sub_608B30(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = *(this + 0xD9);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 8);
  if ( v2 && (v3 = v2 + 0x14) != 0 )
    return HIWORD(*(_DWORD *)(v3 + 0x1C));
  else
    return 0;
}
