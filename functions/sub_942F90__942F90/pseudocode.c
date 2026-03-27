int __thiscall sub_942F90(int *this, int a2, char *a3)
{
  int result; // eax

  result = sub_942B40(this + 2, a3, 0);
  if ( result )
  {
    result = *(_DWORD *)(result + 4);
    if ( result )
      return ((int (__cdecl *)(int))result)(a2);
  }
  return result;
}
