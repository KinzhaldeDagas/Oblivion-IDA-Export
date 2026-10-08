int __thiscall sub_89F8E0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int result; // eax

  v2 = a2; /*0x89f8e2*/
  sub_712A20(a2); /*0x89f8ea*/
  sub_89D650(this, (signed int)v2); /*0x89f8f2*/
  v4 = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2); /*0x89f903*/
  v5 = v4; /*0x89f905*/
  if ( v4 ) /*0x89f909*/
  {
    v6 = *(_DWORD *)(v4 + 0x14); /*0x89f90b*/
    if ( v6 >= 0 ) /*0x89f910*/
    {
      v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x89f922*/
      if ( !v7 ) /*0x89f92a*/
        v7 = unk_BA7D9C; /*0x89f92c*/
      sub_8A75D0(v7, *(_DWORD **)(v5 + 0xC), 8 * v6, 0x14); /*0x89f944*/
    }
    v8 = *(_DWORD *)(v5 + 0x14) & 0x40000000 | 0x80000000; /*0x89f951*/
    *(_DWORD *)(v5 + 0xC) = 0; /*0x89f956*/
    *(_DWORD *)(v5 + 0x10) = 0; /*0x89f95d*/
    *(_DWORD *)(v5 + 0x14) = v8; /*0x89f964*/
  }
  if ( v2[1] < 9 && (*(_DWORD *)v5 & 0x20) != 0 ) /*0x89f971*/
    *(_DWORD *)v5 = *(_DWORD *)v5 & 0xFFFF7FDF | 0x8000; /*0x89f97b*/
  result = *(_DWORD *)v5; /*0x89f97d*/
  if ( (*(_DWORD *)v5 & 0x3F) == 8 ) /*0x89f987*/
  {
    result &= ~0x4000u; /*0x89f989*/
    *(_DWORD *)v5 = result; /*0x89f98e*/
  }
  return result; /*0x89f990*/
}
