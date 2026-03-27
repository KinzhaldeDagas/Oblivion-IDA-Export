int __thiscall sub_906500(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int i; // edi

  v2 = *(this + 3);
  result = 3 * *(this + 4);
  for ( i = v2 + 0xC * *(this + 4); v2 != i; v2 += 0xC )
  {
    result = *(_DWORD *)(v2 + 8);
    if ( result )
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x20))(a2);
  }
  return result;
}
