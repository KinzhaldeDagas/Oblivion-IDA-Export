int __thiscall sub_8C96D0(void *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2;
  sub_712A20(a2);
  sub_8AEAB0((signed int)v2);
  result = (*(int (__thiscall **)(void *, unsigned int **))(*(_DWORD *)this + 0x74))(this, &a2);
  if ( result )
    *(_DWORD *)(result + 8) = 0;
  return result;
}
