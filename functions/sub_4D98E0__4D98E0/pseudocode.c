float *__thiscall sub_4D98E0(_DWORD *this, float *a2)
{
  int v2; // eax

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x4d98e9*/
    return HavokVector_ToWorldVector(a2, (__m128 *)(*(_DWORD *)(v2 + 0x50) + 0xD0)); /*0x4d98f9*/
  else
    return HavokVector_ToWorldVector(a2, (__m128 *)&unk_BA7A40); /*0x4d990f*/
}
