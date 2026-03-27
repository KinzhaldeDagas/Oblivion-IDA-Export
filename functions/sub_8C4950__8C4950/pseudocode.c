void __thiscall sub_8C4950(int this, int a2)
{
  int v3; // edi
  int v4; // eax

  *(float *)(a2 + 8) = *(float *)(this + 0x30);
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x20);
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 != *(_DWORD *)(this + 0x10) )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    v4 = *(_DWORD *)(this + 0x10);
    *(_DWORD *)(a2 + 4) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
}
