bool __thiscall sub_517B60(char **this, int a2)
{
  return !a2 /*0x517b6a*/
      || *((_BYTE *)this + 0x10) != *(_BYTE *)(a2 + 0x10)
      || *this != *(char **)a2
      || *(double *)(a2 + 8) != *((double *)this + 1)
      || sub_517B20((const char **)this + 6, (const char **)(a2 + 0x18));
}
