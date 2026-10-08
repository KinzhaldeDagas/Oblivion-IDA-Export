char **__thiscall sub_739930(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x739933*/
  *this = (char *)&NiTArray<NiPointer<NiScreenPolygon>>::`vftable'; /*0x739938*/
  if ( v3 ) /*0x73993e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x739944*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x739950*/
    FormHeapFree(v4); /*0x739956*/
  }
  if ( (a2 & 1) != 0 ) /*0x739964*/
    FormHeapFree((unsigned int)this); /*0x739967*/
  return this; /*0x739971*/
}
