UInt32 *__thiscall sub_722B30(_DWORD *this, Ni2DBuffer *a2)
{
  UInt32 *result; // eax
  int **v4; // ebx
  int v5; // esi
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  bool v7; // zf
  Ni2DBuffer *v8; // esi

  result = sub_7077D0(this, (UInt32 *)&a2, a2, 1);
  v4 = (int **)result;
  v5 = *(this + 0x2B);
  v6 = InterlockedDecrement;
  if ( v5 != *result )
  {
    if ( v5 )
    {
      if ( !v6((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    result = (UInt32 *)*v4;
    v7 = *v4 == 0;
    *(this + 0x2B) = *v4;
    if ( !v7 )
      result = (UInt32 *)InterlockedIncrement((volatile LONG *)result + 1);
  }
  v8 = a2;
  if ( a2 )
  {
    result = (UInt32 *)v6((volatile LONG *)&a2->members);
    if ( !result )
    {
      if ( v8 )
        return (UInt32 *)(*(int *(__thiscall **)(Ni2DBuffer *, int))v8->__vftable)(v8, 1);
    }
  }
  return result;
}
