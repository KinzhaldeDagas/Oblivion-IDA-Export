int *__thiscall sub_70A900(_DWORD *this, Ni2DBuffer *a2)
{
  int *result; // eax
  unsigned int i; // edi
  int v5; // ecx
  Ni2DBuffer *v6; // esi

  result = sub_70A500(this, (int *)&a2, a2, 1);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i )
  {
    v5 = *(_DWORD *)(*(this + 0x2C) + 4 * i);
    if ( v5 )
      result = (int *)(*(int (__thiscall **)(int, Ni2DBuffer *))(*(_DWORD *)v5 + 0x70))(v5, a2);
  }
  v6 = a2;
  if ( a2 )
  {
    result = (int *)InterlockedDecrement((volatile LONG *)&a2->members);
    if ( !result )
    {
      if ( v6 )
        return (*(int *(__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1);
    }
  }
  return result;
}
