void __thiscall sub_7F2AB0(int this, float a2)
{
  char v2; // bl
  int v3; // esi
  int i; // edx
  float *v5; // eax

  v2 = *(_BYTE *)(this + 0x180); /*0x7f2ab5*/
  v3 = *(_DWORD *)(this + 0x84); /*0x7f2abc*/
  while ( v2 && v3 < *(_DWORD *)(this + 0x14C) ) /*0x7f2acd*/
  {
LABEL_5:
    for ( i = 0; i < *(_DWORD *)(this + 0x134); *v5 = a2 + *v5 ) /*0x7f2adf*/
    {
      v5 = (float *)(0x10 * (v3 + i * *(_DWORD *)(this + 0x14C)) + *(_DWORD *)(this + 0x6C) + 4); /*0x7f2af4*/
      ++i; /*0x7f2af8*/
    }
    if ( ++v3 >= *(_DWORD *)(this + 0x14C) ) /*0x7f2b10*/
    {
      if ( !v2 ) /*0x7f2b14*/
        break; /*0x7f2b14*/
      v3 = 0; /*0x7f2b16*/
      v2 = 0; /*0x7f2b18*/
    }
  }
  if ( v3 <= *(_DWORD *)(this + 0x88) ) /*0x7f2ad5*/
    goto LABEL_5; /*0x7f2ad5*/
}
