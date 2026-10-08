bool __thiscall sub_5E1D70(void *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0; /*0x5e1d7d*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1d81*/
  if ( v3 ) /*0x5e1d85*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1d91*/
      v2 = v3; /*0x5e1d97*/
  }
  return (*(_DWORD *)(v2 + 0x28) & 8) != 0; /*0x5e1d9c*/
}
