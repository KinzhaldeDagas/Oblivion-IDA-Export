int __thiscall sub_903220(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int i; // esi
  int v7; // ecx

  result = *(this + 4); /*0x903224*/
  for ( i = 0; i < result; ++i ) /*0x90322b*/
  {
    v7 = *(_DWORD *)(*(this + 3) + 4 * i); /*0x903243*/
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 0x24))(v7, a2, a3, a4); /*0x90324f*/
    result = *(this + 4); /*0x903252*/
  }
  return result; /*0x90325c*/
}
