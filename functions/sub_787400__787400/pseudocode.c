int __thiscall sub_787400(_DWORD *this, unsigned int *a2)
{
  float *v3; // eax
  float *v4; // eax

  v3 = (float *)FormHeapAlloc(0x40u);
  if ( v3 )
    v4 = sub_7A5470(v3);
  else
    v4 = 0;
  *(this + 0x14) = v4;
  return sub_7A5530(v4, a2);
}
