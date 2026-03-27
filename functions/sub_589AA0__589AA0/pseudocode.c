void __thiscall sub_589AA0(_DWORD *this)
{
  int v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // esi
  int v4; // [esp+8h] [ebp-4h] BYREF

  v2 = *(this + 9);
  if ( v2 )
  {
    sub_589890(this);
    if ( *(_DWORD *)(v2 + 0x1C) )
    {
      nullsub_returnTrue_0arg();
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v2 + 0x1C) + 0x88))(*(_DWORD *)(v2 + 0x1C), &v4, v2);
      if ( v4 )
      {
        v3 = (void (__thiscall ***)(_DWORD, int))v4;
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
          (**v3)(v3, 1);
      }
      nullsub_returnTrue_0arg();
    }
    *(this + 9) = 0;
  }
}
