float *__thiscall sub_4D98E0(_DWORD *this, float *a2)
{
  int v2; // eax

  if ( this && (v2 = *(this + 2)) != 0 )
    return sub_43F3E0(a2, (__m128 *)(*(_DWORD *)(v2 + 0x50) + 0xD0));
  else
    return sub_43F3E0(a2, (__m128 *)&stru_BA7A40);
}
