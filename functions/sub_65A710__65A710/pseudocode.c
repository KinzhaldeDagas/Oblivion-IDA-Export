float *__thiscall sub_65A710(Actor *this, float *a2)
{
  bhkCharacterProxy *CharProxy; // eax
  float *result; // eax
  __m128 *v4; // eax

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
  if ( CharProxy )
  {
    result = *((float **)CharProxy + 2);
    if ( result )
    {
      v4 = (__m128 *)sub_8AC0A0((char *)result);
      return sub_43F3E0(a2, v4);
    }
  }
  else
  {
    *a2 = Vector3_InitValue_;
    a2[1] = *(&Vector3_InitValue_ + 1);
    a2[2] = dword_B3F9B0;
    return a2;
  }
  return result;
}
