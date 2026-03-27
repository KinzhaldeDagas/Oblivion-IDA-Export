float *__thiscall sub_54F100(void *this)
{
  float *v2; // eax

  v2 = (float *)FormHeapAlloc(0x14u);
  if ( v2 )
    return sub_54EAA0(v2, (int)this);
  else
    return 0;
}
