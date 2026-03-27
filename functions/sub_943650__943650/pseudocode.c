int __thiscall sub_943650(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 1;
  *v2 = *a2;
  v2[1] = a2[1];
  v2[2] = a2[2];
  v2[3] = a2[3];
  result = a2[4];
  v2[4] = result;
  return result;
}
