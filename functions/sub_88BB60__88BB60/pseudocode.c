int __thiscall sub_88BB60(int *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edi
  int *v5; // esi
  int v6; // ecx
  int result; // eax

  if ( a2 && (v3 = *(_DWORD *)(a2 + 8)) != 0 )
    v4 = v3 + 0x14;
  else
    v4 = 0;
  v5 = this + 0x1B;
  if ( *(this + 0x1C) == (*(this + 0x1D) & 0x3FFFFFFF) )
    sub_8A6EE0((int)(this + 0x1B), 8);
  v6 = v5[1];
  result = *v5;
  *(_DWORD *)(result + 8 * v6) = v4;
  *(_DWORD *)(result + 8 * v6 + 4) = a3;
  ++v5[1];
  return result;
}
