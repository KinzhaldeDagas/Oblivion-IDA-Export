int __thiscall sub_810AA0(void *this)
{
  int *v2; // esi
  int result; // eax

  v2 = dword_B47790;
  do
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++);
  while ( (int)v2 < (int)dword_B47800 );
  return result;
}
