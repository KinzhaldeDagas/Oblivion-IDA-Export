void __thiscall sub_677CF0(int *this, int a2)
{
  int v2; // ebx
  int *v3; // eax
  int *v4; // esi
  bool v5; // zf
  _DWORD *v6; // edi
  int v7[7]; // [esp-4h] [ebp-28h] BYREF
  unsigned int v8; // [esp+20h] [ebp-4h]

  v2 = a2;
  v8 = 0;
  if ( a2 )
  {
    v3 = this + 1;
    v4 = this;
    if ( *(this + 1) )
    {
      do
      {
        v4 = (int *)*v3;
        v5 = *(_DWORD *)(*v3 + 4) == 0;
        v3 = (int *)(*v3 + 4);
      }
      while ( !v5 );
    }
    if ( *v4 )
    {
      v6 = (_DWORD *)FormHeapAlloc(8u);
      v7[5] = (int)v6;
      LOBYTE(v8) = 1;
      if ( v6 )
      {
        v7[0] = v2;
        v7[6] = (int)v7;
        InterlockedIncrement((volatile LONG *)(v2 + 4));
        v4[1] = (int)sub_532DF0(v6, v7[0]);
      }
      else
      {
        v4[1] = 0;
      }
    }
    else
    {
      sub_55E2A0(v4, &a2);
    }
    v8 = 0xFFFFFFFF;
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
}
