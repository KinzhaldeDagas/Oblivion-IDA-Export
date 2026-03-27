void __thiscall sub_7C7DC0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // esi
  bool v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // [esp+0h] [ebp-8h] BYREF
  _DWORD *v7; // [esp+4h] [ebp-4h]

  v7 = this;
  if ( a2 )
  {
    v2 = (_DWORD *)*(this + 0x3A);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = (_DWORD *)v2[2];
        v2 = (_DWORD *)*v2;
        if ( v3 )
        {
          v4 = *sub_405AD0(v3, &v6) == a2;
          if ( v6 )
          {
            v5 = (void (__thiscall ***)(_DWORD, int))v6;
            if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
              (**v5)(v5, 1);
          }
          if ( v4 )
            break;
        }
        if ( !v2 )
          return;
      }
      sub_7C77C0(v7, (LONG)v3);
    }
  }
}
