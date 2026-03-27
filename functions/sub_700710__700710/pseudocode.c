_DWORD **__thiscall sub_700710(void *this, _DWORD **a2)
{
  _DWORD **v2; // edi

  v2 = a2;
  if ( NiTMap_GetAt(*a2, (int)this, &a2) )
    return a2;
  else
    return (_DWORD **)(*(int (__thiscall **)(void *, _DWORD **))(*(_DWORD *)this + 0x18))(this, v2);
}
