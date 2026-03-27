_DWORD *__thiscall NiNode::RemoveObject(_WORD *this, _DWORD *a2, int a3)
{
  unsigned int v4; // edi
  int v5; // esi
  void (__thiscall ***v7)(_DWORD, int); // edi

  v4 = 0;
  if ( *(this + 0x5B) )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v4);
      if ( v5 )
      {
        InterlockedIncrement((volatile LONG *)(v5 + 4));
        if ( v5 == a3 )
          break;
      }
      if ( v5 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      if ( ++v4 >= (unsigned __int16)*(this + 0x5B) )
        goto LABEL_8;
    }
    *(_DWORD *)(v5 + 0x1C) = 0;
    sub_6D7F60((int)(this + 0x56), &a3, v4);
    if ( a3 )
    {
      v7 = (void (__thiscall ***)(_DWORD, int))a3;
      if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
        (**v7)(v7, 1);
    }
    *a2 = v5;
    InterlockedIncrement((volatile LONG *)(v5 + 4));
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    return a2;
  }
  else
  {
LABEL_8:
    *a2 = 0;
    return a2;
  }
}
