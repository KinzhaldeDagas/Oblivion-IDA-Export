_DWORD **__thiscall sub_700710(void *this, _DWORD **a2)
{
  _DWORD **v2; // edi

  v2 = a2; /*0x700712*/
  if ( NiTMap_GetAt(*a2, (int)this, &a2) ) /*0x700720*/
    return a2; /*0x700729*/
  else
    return (*(_DWORD **(__thiscall **)(void *, _DWORD **))(*(_DWORD *)this + 0x18))(this, v2); /*0x70073a*/
}
