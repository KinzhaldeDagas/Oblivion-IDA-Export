UInt32 *__thiscall sub_70A840(_DWORD *this, Ni2DBuffer *a2)
{
  UInt32 *result; // eax
  unsigned int i; // edi
  int v5; // ecx
  Ni2DBuffer *v6; // esi

  result = sub_7077D0(this, (UInt32 *)&a2, a2, 1);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i )
  {
    v5 = *(_DWORD *)(*(this + 0x2C) + 4 * i);
    if ( v5 )
      result = (UInt32 *)(*(int (__thiscall **)(int, Ni2DBuffer *))(*(_DWORD *)v5 + 0x6C))(v5, a2);
  }
  v6 = a2;
  if ( a2 )
  {
    result = (UInt32 *)InterlockedDecrement((volatile LONG *)&a2->members);
    if ( !result )
    {
      if ( v6 )
        return (UInt32 *)(*(int *(__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1);
    }
  }
  return result;
}
