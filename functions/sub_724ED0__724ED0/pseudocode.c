char __thiscall sub_724ED0(float **this, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // edx
  int v5; // eax
  float *v6; // ecx
  float *v7; // esi
  int v8; // ebx

  v2 = (unsigned int)*(this + 8); /*0x724ed5*/
  if ( v2 != *(_DWORD *)(a2 + 0x20) ) /*0x724edb*/
    return 0; /*0x724edd*/
  v4 = 0; /*0x724ee4*/
  if ( !v2 ) /*0x724ee9*/
    return 1; /*0x724f21*/
  v5 = *(_DWORD *)(a2 + 0x24); /*0x724eeb*/
  v6 = *(this + 9); /*0x724eee*/
  v7 = (float *)(v5 + 4); /*0x724ef3*/
  v8 = v5 - (_DWORD)v6; /*0x724ef6*/
  while ( *v6 == *(float *)((char *)v6 + v8) && v6[1] == *v7 ) /*0x724f12*/
  {
    ++v4; /*0x724f14*/
    v7 += 4; /*0x724f17*/
    v6 += 4; /*0x724f1a*/
    if ( v4 >= v2 ) /*0x724f1f*/
      return 1; /*0x724f1f*/
  }
  return 0; /*0x724edf*/
}
