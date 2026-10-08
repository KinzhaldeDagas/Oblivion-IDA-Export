void __userpurge sub_6286B0(int this@<ecx>, double a2@<st0>, Actor *a1)
{
  int v3; // eax

  v3 = *(_DWORD *)(this + 0x2BC); /*0x6286b0*/
  if ( v3 == 1 || v3 == 3 ) /*0x6286be*/
  {
    __asm { fld1 } /*0x6286c0*/
    *(_DWORD *)(this + 0x2BC) = 0; /*0x6286c2*/
    __asm { fstp    dword ptr [ecx+2C0h] } /*0x6286cc*/
    *(float *)(this + 0x2C0) = _ET1; /*0x6286cc*/
    sub_5EE1B0(a1, a2); /*0x6286d6*/
  }
}
