void __thiscall sub_67A850(int *this)
{
  int *v2; // edi
  int v3; // esi
  int v4; // edi
  int *v5; // [esp-4h] [ebp-Ch]

  v2 = (int *)*(this + 1);
  if ( v2 )
  {
    v5 = (int *)*(this + 1);
    *(this + 1) = v2[1];
    sub_55E2A0(this, v5);
    v3 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      {
        if ( v3 )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
    }
    FormHeapFree((unsigned int)v2);
  }
  else
  {
    v4 = *this;
    if ( *this )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *this = 0;
    }
  }
}
