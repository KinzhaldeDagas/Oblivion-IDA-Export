int __thiscall sub_628460(void *this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 0x2C4))(this, 0x400, 1);
  result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 0x51C))(this, a2, 0);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 0x2C4))(this, 0x400, 0);
  return result;
}
