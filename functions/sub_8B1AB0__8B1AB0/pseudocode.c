void __thiscall sub_8B1AB0(int this, int a2, int a3)
{
  int v3; // eax
  int i; // edx

  if ( *(float *)(a3 + 0x14) < (double)*(float *)(this + 0x24) ) /*0x8b1ac0*/
  {
    *(_OWORD *)(this + 0x10) = *(_OWORD *)a3; /*0x8b1ac5*/
    *(_DWORD *)(this + 0x20) = *(_DWORD *)(a3 + 0x10); /*0x8b1acc*/
    v3 = a2; /*0x8b1ad2*/
    *(_DWORD *)(this + 0x24) = *(_DWORD *)(a3 + 0x14); /*0x8b1ad6*/
    for ( i = *(_DWORD *)(a2 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x8b1ade*/
      v3 = i; /*0x8b1ae0*/
    *(_DWORD *)(this + 0x30) = v3; /*0x8b1ae9*/
    *(_DWORD *)(this + 4) = *(_DWORD *)(a3 + 0x14); /*0x8b1aef*/
  }
}
