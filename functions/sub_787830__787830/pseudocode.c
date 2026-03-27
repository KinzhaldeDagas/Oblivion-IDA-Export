void __thiscall sub_787830(unsigned int *this, unsigned __int16 a2)
{
  int v3; // edi
  void *v4; // eax
  unsigned int v5; // ebx
  int v6; // ebx

  FormHeapFree(*(this + 1));
  v3 = a2;
  *(_WORD *)this = a2;
  v4 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1A != 0 ? 0xFFFFFFFF : a2 << 6);
  v5 = (unsigned int)v4;
  if ( v4 )
    sub_401080(v4, 0x40, a2, (void *(__thiscall *)(void *))sub_7A66B0);
  else
    v5 = 0;
  *(this + 1) = v5;
  if ( a2 )
  {
    v6 = 0;
    do
    {
      sub_7A6670((float *)(v6 + *(this + 1)));
      v6 += 0x40;
      --v3;
    }
    while ( v3 );
  }
}
