char __thiscall sub_438C20(_DWORD *this, int a2)
{
  int v3; // ebx
  bool v4; // zf
  _DWORD v6[7]; // [esp-4h] [ebp-28h] BYREF
  unsigned int v7; // [esp+20h] [ebp-4h]

  v3 = 0; /*0x438c4b*/
  v4 = *(this + 2) == 0; /*0x438c4d*/
  v7 = 0; /*0x438c50*/
  if ( v4 ) /*0x438c54*/
  {
LABEL_6:
    v7 = 0xFFFFFFFF; /*0x438c85*/
    if ( a2 ) /*0x438c8f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 8)) ) /*0x438c95*/
        (**(void (__thiscall ***)(int, int))a2)(a2, 1); /*0x438ca7*/
    }
    return 0; /*0x438ca9*/
  }
  else
  {
    while ( 1 ) /*0x438c61*/
    {
      v6[6] = v6; /*0x438c61*/
      v6[0] = a2; /*0x438c65*/
      if ( a2 ) /*0x438c67*/
        InterlockedIncrement((volatile LONG *)(a2 + 8)); /*0x438c6d*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0x14))(this, v3, v6[0]) ) /*0x438c77*/
        break; /*0x438c77*/
      if ( (unsigned int)++v3 >= *(this + 2) ) /*0x438c83*/
        goto LABEL_6; /*0x438c83*/
    }
    v7 = 0xFFFFFFFF; /*0x438cc3*/
    if ( a2 ) /*0x438ccb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 8)) ) /*0x438cd1*/
        (**(void (__thiscall ***)(int, int))a2)(a2, 1); /*0x438ce3*/
    }
    return 1; /*0x438ce5*/
  }
}
