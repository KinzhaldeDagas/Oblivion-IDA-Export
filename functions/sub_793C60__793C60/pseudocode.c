unsigned int *__thiscall sub_793C60(unsigned int *this)
{
  void *v2; // eax
  unsigned int v3; // edi

  *(_WORD *)this = 0;
  v2 = (void *)FormHeapAlloc(0x100u);
  v3 = (unsigned int)v2;
  if ( v2 )
    sub_401080(v2, 0x40, 4, (void *(__thiscall *)(void *))sub_7A66B0);
  else
    v3 = 0;
  *(this + 1) = v3;
  sub_787830(this, 4u);
  return this;
}
