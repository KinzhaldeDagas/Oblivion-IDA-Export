BOOL __thiscall sub_5E6160(void *this)
{
  int v1; // eax
  int v2; // eax
  BOOL result; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x330))(this);
  result = 0;
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 0x70);
    if ( v2 == 5 || v2 == 6 )
      return 1;
  }
  return result;
}
