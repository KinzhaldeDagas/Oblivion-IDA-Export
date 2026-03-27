_DWORD *__thiscall NiNode::RemoveObjectAt(int this, _DWORD *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // edi

  v4 = a3;
  if ( a3 >= *(unsigned __int16 *)(this + 0xB6) )
  {
    *a2 = 0;
    return a2;
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * a3);
    if ( v5 )
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4));
      *(_DWORD *)(v5 + 0x1C) = 0;
      sub_6D7F60(this + 0xAC, &a3, v4);
      if ( a3 )
      {
        v6 = (void (__thiscall ***)(_DWORD, int))a3;
        if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
          (**v6)(v6, 1);
      }
    }
    *a2 = v5;
    if ( v5 )
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4));
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    return a2;
  }
}
