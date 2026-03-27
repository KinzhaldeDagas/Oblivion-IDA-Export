char __thiscall sub_703DC0(int this, int a2, int a3)
{
  unsigned int v4; // edi
  int v5; // ebp
  void (__thiscall ***v6)(_DWORD, int); // ebx

  v4 = a2 + 6;
  if ( a2 + 6 >= (unsigned int)*(unsigned __int16 *)(this + 0x26) )
  {
    if ( v4 >= *(unsigned __int16 *)(this + 0x24) )
      NiTArray_SetSize((unsigned __int16 *)(this + 0x1C), v4 + *(unsigned __int16 *)(this + 0x2A));
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x1C), v4, &a3);
    v5 = a3;
    if ( a3 )
      *(_WORD *)(this + 0x18) = *(_WORD *)(this + 0x18) & 0xF00F
                              | (0x10 * ((unsigned __int8)(*(unsigned __int16 *)(this + 0x18) >> 4) + 1));
  }
  else
  {
    v5 = a3;
    v6 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this + 0x20) + 4 * v4);
    if ( a3 )
    {
      if ( !v6 )
        *(_WORD *)(this + 0x18) = *(_WORD *)(this + 0x18) & 0xF00F
                                | (0x10 * ((unsigned __int8)(*(unsigned __int16 *)(this + 0x18) >> 4) + 1));
    }
    else if ( v6 )
    {
      *(_WORD *)(this + 0x18) = *(_WORD *)(this + 0x18) & 0xF00F
                              | (0x10 * ((unsigned __int8)(*(unsigned __int16 *)(this + 0x18) >> 4) - 1));
    }
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x1C), v4, &a3);
    if ( v6 )
    {
      (**v6)(v6, 1);
      return sub_703D70(this, v5);
    }
  }
  return sub_703D70(this, v5);
}
