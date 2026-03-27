char *__thiscall sub_5E4080(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *(this + 0x16);
  if ( v1 && (v2 = *(_DWORD *)(v1 + 8)) != 0 )
    return *(char **)(4 * *(char *)(v2 + 0x20) + 0xB12988);
  else
    return 0;
}
