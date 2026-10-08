char __thiscall sub_703DC0(int this, int a2, int a3)
{
  unsigned int v4; // edi
  int v5; // ebp
  void (__thiscall ***v6)(_DWORD, int); // ebx

  v4 = a2 + 6; /*0x703dce*/
  if ( a2 + 6 >= (unsigned int)*(unsigned __int16 *)(this + 0x26) ) /*0x703dd3*/
  {
    if ( v4 >= *(unsigned __int16 *)(this + 0x24) ) /*0x703e65*/
      NiTArray_SetSize((unsigned __int16 *)(this + 0x1C), v4 + *(unsigned __int16 *)(this + 0x2A)); /*0x703e70*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x1C), v4, &a3); /*0x703e7d*/
    v5 = a3; /*0x703e82*/
    if ( a3 ) /*0x703e88*/
      *(_WORD *)(this + 0x18) = *(_WORD *)(this + 0x18) & 0xF00F /*0x703ea6*/
                              | (0x10 * ((unsigned __int8)(*(unsigned __int16 *)(this + 0x18) >> 4) + 1));
  }
  else
  {
    v5 = a3; /*0x703dd9*/
    v6 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this + 0x20) + 4 * v4); /*0x703de2*/
    if ( a3 ) /*0x703de5*/
    {
      if ( !v6 ) /*0x703de9*/
        *(_WORD *)(this + 0x18) = *(_WORD *)(this + 0x18) & 0xF00F /*0x703e07*/
                                | (0x10 * ((unsigned __int8)(*(unsigned __int16 *)(this + 0x18) >> 4) + 1));
    }
    else if ( v6 ) /*0x703e0f*/
    {
      *(_WORD *)(this + 0x18) = *(_WORD *)(this + 0x18) & 0xF00F /*0x703e2d*/
                              | (0x10 * ((unsigned __int8)(*(unsigned __int16 *)(this + 0x18) >> 4) - 1));
    }
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x1C), v4, &a3); /*0x703e3a*/
    if ( v6 ) /*0x703e41*/
    {
      (**v6)(v6, 1); /*0x703e4b*/
      return sub_703D70(this, v5); /*0x703e59*/
    }
  }
  return sub_703D70(this, v5); /*0x703e55*/
}
