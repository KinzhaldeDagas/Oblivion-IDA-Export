void __thiscall sub_7E5B50(void *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  unsigned int i; // esi

  v3 = a2;
  if ( a2 )
  {
    v4 = a2[0x2A];
    v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
    v6 = v5;
    if ( v4 )
    {
      if ( !v5 )
        return;
      a2 = v3;
      InterlockedIncrement(v3 + 1);
      NiTArray_AddItem((int)this + 0x110, (LONG *)&a2);
      if ( !InterlockedDecrement(v3 + 1) )
        (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1);
    }
    if ( v6 )
    {
      for ( i = 0; *(unsigned __int16 *)(v6 + 0xB6) > i; sub_7E5B50(
                                                           this,
                                                           *(_DWORD **)(*(_DWORD *)(v6 + 0xB0) + 4 * i++)) )
        ;
    }
  }
}
