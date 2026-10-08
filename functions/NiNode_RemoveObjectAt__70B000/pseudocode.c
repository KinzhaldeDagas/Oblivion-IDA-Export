_DWORD *__thiscall NiNode::RemoveObjectAt(int this, _DWORD *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // edi

  v4 = a3; /*0x70b035*/
  if ( a3 >= *(unsigned __int16 *)(this + 0xB6) ) /*0x70b03b*/
  {
    *a2 = 0; /*0x70b0fc*/
    return a2; /*0x70b0f8*/
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * a3); /*0x70b047*/
    if ( v5 ) /*0x70b053*/
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x70b059*/
      *(_DWORD *)(v5 + 0x1C) = 0; /*0x70b077*/
      sub_6D7F60(this + 0xAC, &a3, v4); /*0x70b07e*/
      if ( a3 ) /*0x70b089*/
      {
        v6 = (void (__thiscall ***)(_DWORD, int))a3; /*0x70b08b*/
        if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) ) /*0x70b091*/
          (**v6)(v6, 1); /*0x70b0a7*/
      }
    }
    *a2 = v5; /*0x70b0af*/
    if ( v5 ) /*0x70b0b1*/
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x70b0b7*/
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x70b0cd*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x70b0df*/
    }
    return a2; /*0x70b0e1*/
  }
}
