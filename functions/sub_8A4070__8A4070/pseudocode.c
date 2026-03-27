void __thiscall sub_8A4070(int *this, int a2)
{
  int v3; // ebp
  int *v4; // edi
  int v5; // eax
  bool v6; // zf
  _DWORD *v7; // eax
  int *v8[7]; // [esp-4h] [ebp-28h] BYREF
  unsigned int v9; // [esp+20h] [ebp-4h]

  v3 = a2;
  v9 = 0;
  if ( a2 )
  {
    if ( *this )
    {
      v4 = (int *)FormHeapAlloc(8u);
      v8[5] = v4;
      LOBYTE(v9) = 1;
      if ( v4 )
      {
        v5 = *this;
        v6 = *this == 0;
        v8[6] = (int *)v8;
        v8[0] = (int *)v5;
        if ( !v6 )
          InterlockedIncrement((volatile LONG *)(v5 + 4));
        v7 = sub_532DF0(v4, (int)v8[0]);
      }
      else
      {
        v7 = 0;
      }
      v7[1] = *(this + 1);
      LOBYTE(v9) = 0;
      *(this + 1) = (int)v7;
      v8[0] = &a2;
    }
    else
    {
      v8[0] = &a2;
    }
    sub_55E2A0(this, v8[0]);
    v9 = 0xFFFFFFFF;
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
}
