unsigned int __thiscall sub_4CA5F0(int this)
{
  int *v1; // eax
  int v2; // ecx
  int v3; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
    return (*(_DWORD *)(this + 0xC) & 0xFFFFFFu) % 0xA;
  v1 = *(int **)(this + 0x3C);
  if ( v1 )
    v2 = v1[1];
  else
    v2 = 0;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0;
  return sub_4EF1D0(v3 >> 5, v2 >> 5);
}
