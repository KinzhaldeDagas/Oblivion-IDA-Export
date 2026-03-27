int __thiscall sub_8A1DB0(int *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2;
  sub_712A20(a2);
  sub_8A25C0(this, (signed int)v2);
  result = (*(int (__thiscall **)(int *, unsigned int **))(*this + 0x74))(this, &a2);
  if ( result )
    *(_DWORD *)(result + 4) = 0;
  return result;
}
