int __thiscall sub_8BC370(int *this)
{
  int v2; // eax
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 2); /*0x8bc373*/
  v3 = 0; /*0x8bc377*/
  *this = (int)&off_A98360; /*0x8bc37b*/
  if ( v2 > 0 ) /*0x8bc381*/
  {
    do /*0x8bc399*/
    {
      v4 = *(void (__thiscall ****)(_DWORD, int))(*(this + 1) + 4 * v3); /*0x8bc386*/
      if ( v4 ) /*0x8bc38b*/
        (**v4)(v4, 1); /*0x8bc391*/
      ++v3; /*0x8bc396*/
    }
    while ( v3 < *(this + 2) ); /*0x8bc399*/
  }
  result = *(this + 3); /*0x8bc39b*/
  if ( result >= 0 ) /*0x8bc3a0*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bc3b2*/
    if ( !v6 ) /*0x8bc3ba*/
      v6 = unk_BA7D9C; /*0x8bc3bc*/
    result = sub_8A75D0(v6, (_DWORD *)*(this + 1), 4 * result, 0x14); /*0x8bc3d1*/
  }
  *this = (int)&off_A99B50; /*0x8bc3d7*/
  return result; /*0x8bc3d6*/
}
