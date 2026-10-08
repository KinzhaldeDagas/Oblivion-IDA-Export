int __thiscall sub_8C9770(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx

  if ( this && (v2 = *(this + 2)) != 0 && (v3 = *(_DWORD *)(v2 + 0x10)) != 0 ) /*0x8c9784*/
    v4 = *(_DWORD *)(v3 + 8); /*0x8c9786*/
  else
    v4 = 0; /*0x8c978b*/
  if ( v4 ) /*0x8c9793*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x8c979b*/
  return sub_6EC2C0(a2); /*0x8c97a5*/
}
