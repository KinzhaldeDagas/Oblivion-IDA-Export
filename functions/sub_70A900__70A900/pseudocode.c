int *__thiscall sub_70A900(_DWORD *this, Ni2DBuffer *a2)
{
  int *result; // eax
  unsigned int i; // edi
  int v5; // ecx
  Ni2DBuffer *v6; // esi

  result = sub_70A500(this, (int *)&a2, a2, 1); /*0x70a932*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i ) /*0x70a939*/
  {
    v5 = *(_DWORD *)(*(this + 0x2C) + 4 * i); /*0x70a956*/
    if ( v5 ) /*0x70a95b*/
      result = (int *)(*(int (__thiscall **)(int, Ni2DBuffer *))(*(_DWORD *)v5 + 0x70))(v5, a2); /*0x70a967*/
  }
  v6 = a2; /*0x70a977*/
  if ( a2 ) /*0x70a985*/
  {
    result = (int *)InterlockedDecrement((volatile LONG *)&a2->members); /*0x70a98b*/
    if ( !result ) /*0x70a993*/
    {
      if ( v6 ) /*0x70a997*/
        return (*(int *(__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1); /*0x70a9a1*/
    }
  }
  return result; /*0x70a9a3*/
}
