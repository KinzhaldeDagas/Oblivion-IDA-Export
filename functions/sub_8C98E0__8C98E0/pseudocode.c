int __thiscall sub_8C98E0(_DWORD *this, _BYTE *a2)
{
  FreeEntry *v3; // eax
  unsigned __int8 v4; // cl
  int v5; // eax
  double v6; // st7
  bool v7; // zf
  int v9; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( *(this + 3) ) /*0x8c98ec*/
  {
    *a2 = 0; /*0x8c9968*/
    return *(this + 3); /*0x8c996b*/
  }
  else
  {
    v3 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000060uLL, v9); /*0x8c98ff*/
    v4 = 0x10 - ((unsigned __int8)v3 & 0xF); /*0x8c990b*/
    v5 = (int)v3 + v4; /*0x8c9910*/
    *(_BYTE *)(v5 - 1) = v4; /*0x8c9912*/
    *(_DWORD *)v5 = 0; /*0x8c9915*/
    v6 = flt_B2EFC4; /*0x8c991e*/
    *(_DWORD *)(v5 + 8) = 0; /*0x8c9924*/
    *(float *)(v5 + 4) = v6; /*0x8c992b*/
    *(_OWORD *)(v5 + 0x10) = 0; /*0x8c992e*/
    *(_OWORD *)(v5 + 0x20) = 0; /*0x8c9934*/
    *(_OWORD *)(v5 + 0x30) = 0; /*0x8c9938*/
    *(float *)(v5 + 0x10) = 1.0; /*0x8c993c*/
    *(float *)(v5 + 0x24) = 1.0; /*0x8c993f*/
    *(float *)(v5 + 0x38) = 1.0; /*0x8c9942*/
    *(_OWORD *)(v5 + 0x40) = 0; /*0x8c9945*/
    v7 = *(this + 2) == 0; /*0x8c9949*/
    *(this + 3) = v5; /*0x8c994d*/
    if ( !v7 ) /*0x8c9950*/
      sub_8C9380(this, v5); /*0x8c9955*/
    *a2 = 1; /*0x8c995a*/
    return *(this + 3); /*0x8c995d*/
  }
}
