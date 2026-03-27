void __thiscall sub_6C6AC0(_DWORD *this)
{
  unsigned int v2; // ebp
  int v3; // ebx
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  if ( *(this + 3) )
  {
    v3 = 0;
    do
    {
      v4 = v3 + *(this + 5);
      if ( *(_DWORD *)(v4 + 8) )
      {
        (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v4 + 8) + 0x9C))(
          *(_DWORD *)(v4 + 8),
          &v6,
          *(unsigned __int8 *)(v4 + 0xC));
        if ( v6 )
        {
          v5 = (void (__thiscall ***)(_DWORD, int))v6;
          if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
            (**v5)(v5, 1);
        }
      }
      ++v2;
      v3 += 0x10;
    }
    while ( v2 < *(this + 3) );
  }
}
