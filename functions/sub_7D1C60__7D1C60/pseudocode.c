int __thiscall sub_7D1C60(void *this)
{
  int *v2; // esi
  int result; // eax

  v2 = dword_B455A0;
  do
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++);
  while ( (int)v2 < (int)&dword_B45C2C );
  return result;
}
