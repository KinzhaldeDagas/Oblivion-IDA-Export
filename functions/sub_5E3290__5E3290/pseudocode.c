bool __thiscall sub_5E3290(void *this)
{
  int v2; // eax
  bool result; // al

  result = 0;
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x24 )
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
    if ( v2 )
    {
      if ( *(_BYTE *)(v2 + 0x104) == 4 )
        return 1;
    }
  }
  return result;
}
