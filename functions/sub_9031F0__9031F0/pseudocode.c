int __thiscall sub_9031F0(_DWORD *this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ecx

  result = *(this + 4); /*0x9031f4*/
  for ( i = 0; i < result; ++i ) /*0x9031fb*/
  {
    v5 = *(_DWORD *)(*(this + 3) + 4 * i); /*0x903205*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x20))(v5, a2); /*0x90320b*/
    result = *(this + 4); /*0x90320e*/
  }
  return result; /*0x903217*/
}
