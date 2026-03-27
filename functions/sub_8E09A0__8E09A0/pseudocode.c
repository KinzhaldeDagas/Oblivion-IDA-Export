int __thiscall sub_8E09A0(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  int result; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // edx
  int v7; // esi
  char v8; // cl

  v2 = a2[1];
  result = *a2 + *(char *)(*a2 + 5);
  v4 = *(char *)(v2 + 5);
  v5 = *(unsigned __int16 *)(v4 + v2 + 0x1A);
  v6 = v2 + v4;
  v7 = *(_DWORD *)(*(this + 2) + 0x74);
  v8 = *(_BYTE *)(*(_DWORD *)v7 + v5 + 8 * *(unsigned __int16 *)(result + 0x1A) + 0x19D4);
  if ( v8 )
  {
    *(_BYTE *)(v7 + 0xC) = *(_BYTE *)(0x3C * v8 + *(_DWORD *)v7 + 0x1A24);
    return sub_8E7850(result, v6, (int *)v7);
  }
  return result;
}
