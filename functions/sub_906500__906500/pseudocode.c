int __thiscall sub_906500(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int i; // edi

  v2 = *(this + 3); /*0x906504*/
  result = 3 * *(this + 4); /*0x906507*/
  for ( i = v2 + 0xC * *(this + 4); v2 != i; v2 += 0xC ) /*0x906512*/
  {
    result = *(_DWORD *)(v2 + 8); /*0x906520*/
    if ( result ) /*0x906525*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x20))(a2); /*0x90652c*/
  }
  return result; /*0x906537*/
}
