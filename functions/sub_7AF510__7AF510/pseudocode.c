void __thiscall sub_7AF510(_DWORD *this)
{
  int v2; // ebp
  int *v3; // esi
  int v4; // edi
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // ebx

  v2 = *(this + 0x26);
  v3 = (int *)(*(this + 0x25) + 0x58);
  v4 = *v3;
  if ( *v3 != v2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *v3 = v2;
    if ( v2 )
      InterlockedIncrement((volatile LONG *)(v2 + 4));
  }
  v5 = *(this + 0x27);
  v6 = *(this + 0x25);
  v7 = *(_DWORD *)(v6 + 0x44);
  v8 = (_DWORD *)(v6 + 0x44);
  if ( v7 != v5 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *v8 = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
}
