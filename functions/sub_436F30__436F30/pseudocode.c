void __thiscall sub_436F30(int this)
{
  int v2; // edi

  if ( *(_DWORD *)(this + 0x18) )
  {
    if ( *(int *)(this + 0xC) >= 4
      && (!*(_DWORD *)(this + 0x1C)
       || *(unsigned __int16 *)(*(_DWORD *)(this + 0x1C) + 0xC) == *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x10)) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x18) + 0x24))(*(_DWORD *)(this + 0x18), this);
      v2 = *(_DWORD *)(this + 0x18);
      if ( v2 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) )
          (**(void (__thiscall ***)(int, int))v2)(v2, 1);
        *(_DWORD *)(this + 0x18) = 0;
      }
    }
  }
}
