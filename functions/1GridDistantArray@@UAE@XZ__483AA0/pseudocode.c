void __thiscall GridDistantArray::~GridDistantArray(int **this)
{
  int *v2; // eax
  unsigned int v3; // edi
  UInt32 v4; // edi

  *this = (int *)&GridDistantArray::`vftable';
  sub_481E10(this);
  v2 = *(this + 4);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 0x10u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_483600);
    FormHeapFree(v3);
  }
  v4 = dword_B34424;
  if ( dword_B34424 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(UInt32, int))v4)(v4, 1);
    }
    dword_B34424 = 0;
  }
  sub_481DF0(this);
}
