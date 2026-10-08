void __thiscall sub_497370(unsigned int *this, const void **a2)
{
  unsigned __int8 v3; // al
  void *v4; // eax
  unsigned int v5; // edx

  if ( a2 )
  {
    FormHeapFree(*(this + 1)); /*0x497380*/
    v3 = *(_BYTE *)a2; /*0x497385*/
    *(_BYTE *)this = *(_BYTE *)a2; /*0x497387*/
    v4 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v3);
    v5 = 0x1C * *(unsigned __int8 *)this; /*0x4973b0*/
    *(this + 1) = (unsigned int)v4; /*0x4973b2*/
    memcpy(v4, a2[1], v5); /*0x4973bb*/
  }
}
