int __thiscall sub_8AB710(float *this, int a2, int *a3)
{
  int result; // eax
  unsigned int v6; // eax
  NiPoint3 *v7; // ebx
  unsigned int v8; // [esp+Ch] [ebp-4h]
  unsigned int v9; // [esp+14h] [ebp+4h]
  int v10; // [esp+18h] [ebp+8h]

  NiTimeController_CopyMembers(this, a2, a3); /*0x8ab720*/
  *(float *)(a2 + 0x3C) = *(this + 0xF); /*0x8ab728*/
  sub_8AA480((unsigned int *)(a2 + 0x40), *((_DWORD *)this + 0x14)); /*0x8ab734*/
  result = 0; /*0x8ab739*/
  v9 = 0; /*0x8ab73e*/
  if ( *((_DWORD *)this + 0x14) ) /*0x8ab73b*/
  {
    v10 = 0; /*0x8ab744*/
    do /*0x8ab79e*/
    {
      v6 = *(_DWORD *)(a2 + 0x4C); /*0x8ab753*/
      v7 = (NiPoint3 *)(v10 + *((_DWORD *)this + 0x11)); /*0x8ab756*/
      v8 = v6; /*0x8ab75d*/
      if ( v6 >= *(_DWORD *)(a2 + 0x48) ) /*0x8ab761*/
      {
        sub_8AA480((unsigned int *)(a2 + 0x40), v6 + *(_DWORD *)(a2 + 0x54)); /*0x8ab76b*/
        v6 = v8; /*0x8ab770*/
      }
      sub_8AA710((_DWORD *)(a2 + 0x40), v6, v7); /*0x8ab778*/
      *(_DWORD *)(a2 + 0x3C) = 0; /*0x8ab77f*/
      sub_8AABE0(a2); /*0x8ab786*/
      v10 += 0xC; /*0x8ab78f*/
      result = ++v9; /*0x8ab794*/
    }
    while ( v9 < *((_DWORD *)this + 0x14) ); /*0x8ab79e*/
  }
  return result; /*0x8ab7a1*/
}
