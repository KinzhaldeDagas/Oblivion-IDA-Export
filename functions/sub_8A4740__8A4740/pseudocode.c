int __thiscall sub_8A4740(int *this)
{
  int v1; // ebx
  int v2; // ebp
  int *v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // esi
  char v6; // [esp+13h] [ebp-5h]
  int v7; // [esp+14h] [ebp-4h] BYREF

  v1 = 0;
  v7 = 0;
  v2 = 0;
  v3 = this + 4;
  while ( 1 )
  {
    if ( !v3 || (v1 |= 1u, v6 = 1, !*sub_677C70(v3, &v7)) )
      v6 = 0;
    if ( (v1 & 1) != 0 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v7;
      v1 &= ~1u;
      if ( v7 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        {
          if ( v4 )
            (**v4)(v4, 1);
        }
      }
    }
    if ( !v6 )
      break;
    v3 = (int *)v3[1];
    ++v2;
  }
  return v2;
}
