unsigned int *sub_6FB340()
{
  _DWORD *v0; // eax
  unsigned int *v1; // esi

  v0 = (_DWORD *)FormHeapAlloc(0x1Cu);
  if ( v0 )
    v1 = sub_6FB280(v0);
  else
    v1 = 0;
  sub_721440(v1, 0);
  return v1;
}
