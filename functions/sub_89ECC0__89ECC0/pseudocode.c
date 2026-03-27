float *__thiscall sub_89ECC0(_DWORD *this, float *a2)
{
  int v2; // eax
  int v3; // eax
  __m128 *v4; // eax

  v2 = *(this + 4);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    if ( v3 )
      v4 = (__m128 *)(*(_DWORD *)(v3 + 0x50) + 0xD0);
    else
      v4 = (__m128 *)&stru_BA7A40;
    sub_43F3E0(a2, v4);
    return a2;
  }
  else
  {
    *a2 = Vector3_InitValue_;
    a2[1] = *(&Vector3_InitValue_ + 1);
    a2[2] = dword_B3F9B0;
    return a2;
  }
}
