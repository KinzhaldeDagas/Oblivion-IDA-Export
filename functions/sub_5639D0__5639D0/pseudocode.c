void __thiscall sub_5639D0(char **this, float *a2)
{
  char *v2; // ecx
  __m128 *v3; // eax

  if ( this )
  {
    v2 = *(this + 2);
    if ( v2 )
    {
      v3 = (__m128 *)sub_8AC0A0(v2);
      sub_43F3E0(a2, v3);
    }
  }
}
