int __thiscall sub_809050(void *this)
{
  int *v2; // esi
  int result; // eax

  v2 = dword_B47620;
  do
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++);
  while ( (int)v2 < (int)&unk_B47710 );
  return result;
}
