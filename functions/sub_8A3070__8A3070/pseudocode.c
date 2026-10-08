int __thiscall sub_8A3070(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ecx
  _OWORD *v4; // ecx
  __int128 v5; // xmm0

  result = a2; /*0x8a3078*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8a3082*/
  {
    v4 = *(_OWORD **)(v3 + 0x50); /*0x8a3084*/
    v5 = v4[1]; /*0x8a3087*/
    ++v4; /*0x8a308b*/
    *(_OWORD *)a2 = v5; /*0x8a308e*/
    *(_OWORD *)(a2 + 0x10) = v4[1]; /*0x8a3095*/
    *(_OWORD *)(a2 + 0x20) = v4[2]; /*0x8a309d*/
    *(_OWORD *)(a2 + 0x30) = v4[3]; /*0x8a30a5*/
  }
  else
  {
    *(_OWORD *)a2 = 0; /*0x8a30b4*/
    *(_OWORD *)(a2 + 0x10) = 0; /*0x8a30b7*/
    *(_OWORD *)(a2 + 0x20) = 0; /*0x8a30bb*/
    *(float *)a2 = 1.0; /*0x8a30bf*/
    *(float *)(a2 + 0x14) = 1.0; /*0x8a30c1*/
    *(float *)(a2 + 0x28) = 1.0; /*0x8a30c4*/
    *(_OWORD *)(a2 + 0x30) = 0; /*0x8a30c7*/
  }
  return result; /*0x8a30ab*/
}
