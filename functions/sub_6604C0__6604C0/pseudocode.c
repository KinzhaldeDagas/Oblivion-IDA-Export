int __thiscall sub_6604C0(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  double v5; // st7
  float v7; // [esp+8h] [ebp-4h]

  if ( *(this + 0x588) || (v2 = MEMORY[0xB3BB0C]) == 0 ) /*0x6604cc*/
  {
    sub_5EE660(this, (float *)a2); /*0x660515*/
    return a2; /*0x66051a*/
  }
  else
  {
    v3 = *(_DWORD *)(v2 + 0x88); /*0x6604d5*/
    v4 = *(_DWORD *)(v2 + 0x8C); /*0x6604db*/
    v5 = *(float *)(v2 + 0x90) - dbl_A3F3A0; /*0x6604ef*/
    *(_DWORD *)a2 = v3; /*0x6604f9*/
    *(_DWORD *)(a2 + 4) = v4; /*0x6604fb*/
    v7 = v5; /*0x6604fe*/
    *(float *)(a2 + 8) = v7; /*0x660506*/
    return a2; /*0x6604f5*/
  }
}
