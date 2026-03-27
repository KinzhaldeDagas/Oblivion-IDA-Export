char __thiscall sub_438C20(_DWORD *this, int a2)
{
  int v3; // ebx
  bool v4; // zf
  _DWORD v6[7]; // [esp-4h] [ebp-28h] BYREF
  unsigned int v7; // [esp+20h] [ebp-4h]

  v3 = 0;
  v4 = *(this + 2) == 0;
  v7 = 0;
  if ( v4 )
  {
LABEL_6:
    v7 = 0xFFFFFFFF;
    if ( a2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 8)) )
        (**(void (__thiscall ***)(int, int))a2)(a2, 1);
    }
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v6[6] = v6;
      v6[0] = a2;
      if ( a2 )
        InterlockedIncrement((volatile LONG *)(a2 + 8));
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0x14))(this, v3, v6[0]) )
        break;
      if ( (unsigned int)++v3 >= *(this + 2) )
        goto LABEL_6;
    }
    v7 = 0xFFFFFFFF;
    if ( a2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 8)) )
        (**(void (__thiscall ***)(int, int))a2)(a2, 1);
    }
    return 1;
  }
}
