char __thiscall sub_71B820(void *this, int a2)
{
  char result; // al

  if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 0x1C))(this, a2) )
    return 1;
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x20))(this, a2);
  if ( result )
    return 1;
  return result;
}
