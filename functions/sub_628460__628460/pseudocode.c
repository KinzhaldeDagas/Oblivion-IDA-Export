int __thiscall sub_628460(void *this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 0x2C4))(this, 0x400, 1); /*0x628472*/
  result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 0x51C))(this, a2, 0); /*0x628485*/
  if ( (_BYTE)result ) /*0x628489*/
    return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 0x2C4))(this, 0x400, 0); /*0x62849c*/
  return result; /*0x62849e*/
}
