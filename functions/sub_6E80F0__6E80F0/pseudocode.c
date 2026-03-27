void __thiscall sub_6E80F0(int this, char a2)
{
  int v3; // esi

  v3 = *(_DWORD *)(this + 0x10);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *(_DWORD *)(this + 0x10) = 0;
    *(_BYTE *)(this + 0xC) = a2;
  }
  else
  {
    *(_BYTE *)(this + 0xC) = a2;
  }
}
