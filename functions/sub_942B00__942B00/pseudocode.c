signed int __thiscall sub_942B00(int *this, char *a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ecx

  v4 = sub_942A80(this, a2);
  v5 = *(this + 2);
  if ( v4 > v5 )
    return 1;
  *a3 = *(_DWORD *)(*this + 4 * (v4 + 2 * v5 + 2));
  return 0;
}
