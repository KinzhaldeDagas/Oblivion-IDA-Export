unsigned int *sub_6FBA20()
{
  _DWORD *v0; // eax
  unsigned int *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x24u);
  if ( v0 )
    v1 = TESBound_constr(v0);
  else
    v1 = 0;
  sub_721440(v1, 0);
  return v1;
}
