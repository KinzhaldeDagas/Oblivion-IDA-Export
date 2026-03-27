void __thiscall sub_497370(unsigned int *this, const void **a2)
{
  unsigned __int8 v3; // al
  void *v4; // eax
  int v5; // edx
  size_t v6; // [esp-Ch] [ebp-14h]

  if ( a2 )
  {
    FormHeapFree(*(this + 1));
    v3 = *(_BYTE *)a2;
    *(_BYTE *)this = *(_BYTE *)a2;
    v4 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v3);
    v5 = 0x1C * *(unsigned __int8 *)this;
    *(this + 1) = (unsigned int)v4;
    LODWORD(v6) = v5;
    memcpy(v4, a2[1], v6);
  }
}
