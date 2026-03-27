void __thiscall sub_7C76D0(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  LONG (__stdcall *v5)(volatile LONG *); // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  v3 = (_DWORD *)*(this + 0x3E);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = v3[2];
      v3 = (_DWORD *)*v3;
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 0x130) == a2 )
          break;
      }
      if ( !v3 )
        return;
    }
    a2 = v4;
    InterlockedIncrement((volatile LONG *)(v4 + 4));
    v9 = 0;
    sub_7D5F80(this + 0x3D, &v8, &a2);
    v5 = InterlockedDecrement;
    if ( v8 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v8;
      if ( !v5((volatile LONG *)(v8 + 4)) )
        (**v6)(v6, 1);
    }
    v7 = (void (__thiscall ***)(_DWORD, int))a2;
    v9 = 0xFFFFFFFF;
    if ( a2 )
    {
      if ( !v5((volatile LONG *)(a2 + 4)) )
        (**v7)(v7, 1);
    }
  }
}
