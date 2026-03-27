void __thiscall sub_56FB40(int this)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // eax
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // edi
  int v7; // edi

  v2 = *(_DWORD **)(this + 0x2C);
  if ( v2[0x2E] )
  {
    if ( !*(_BYTE *)(this + 0x14) && *(_DWORD *)(*(_DWORD *)(this + 0x30) + 4) > 1u && v2[1] > 1u )
    {
      v3 = v2[0x2D];
      if ( v3 )
        v4 = *(_DWORD *)(v3 + 0x34);
      else
        v4 = 0;
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x4C))(v4) )
        sub_56D9E0((float *)this);
      else
        sub_56ECD0((float *)this);
    }
    v5 = InterlockedDecrement;
    *(_BYTE *)(this + 0x14) = 1;
    v6 = *(_DWORD *)(this + 0x2C);
    if ( v6 )
    {
      if ( !v5((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      *(_DWORD *)(this + 0x2C) = 0;
    }
    v7 = *(_DWORD *)(this + 0x30);
    if ( v7 )
    {
      if ( !v5((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      *(_DWORD *)(this + 0x30) = 0;
    }
  }
}
