char __thiscall sub_71B820(void *this, int a2)
{
  char result; // al

  if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 0x1C))(this, a2) ) /*0x71b82e*/
    return 1; /*0x71b82e*/
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x20))(this, a2); /*0x71b83c*/
  if ( result ) /*0x71b840*/
    return 1; /*0x71b848*/
  return result; /*0x71b842*/
}
