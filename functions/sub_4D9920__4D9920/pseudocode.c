float *__thiscall sub_4D9920(_DWORD *this, float *a2)
{
  int v2; // eax

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x4d9929*/
    return sub_4D68A0(a2, (__m128 *)(*(_DWORD *)(v2 + 0x50) + 0xE0)); /*0x4d9939*/
  else
    return sub_4D68A0(a2, (__m128 *)&unk_BA7A40); /*0x4d994f*/
}
