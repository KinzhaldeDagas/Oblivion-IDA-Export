char __thiscall sub_8DDC90(int this, int a2)
{
  int v2; // edx
  signed int v3; // eax
  _DWORD *v4; // esi

  v2 = *(_DWORD *)(this + 0x60);
  v3 = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    v3 = 0xFFFFFFFF;
  }
  else
  {
    v4 = *(_DWORD **)(this + 0x5C);
    while ( *v4 != a2 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
  }
  *(_DWORD *)(*(_DWORD *)(this + 0x5C) + 4 * v3) = 0;
  *(_DWORD *)(a2 + 0xC) = 0;
  *(_BYTE *)(this + 0x26) = 1;
  *(_BYTE *)(this + 0x27) = 1;
  return 1;
}
