int __thiscall sub_772790(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // esi

  result = a2;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 0xC);
  if ( v3 )
    *(_DWORD *)(v3 + 0xC) = v4;
  if ( v4 )
    *(_DWORD *)(v4 + 8) = v3;
  if ( a2 == *(this + 4) )
    *(this + 4) = v3;
  --*(this + 3);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 0xC) = 0;
  return result;
}
