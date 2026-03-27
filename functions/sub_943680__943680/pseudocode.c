int __thiscall sub_943680(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 6;
  *v2 = *a2;
  v2[1] = a2[1];
  v2[2] = a2[2];
  v2[3] = a2[3];
  v2[4] = a2[4];
  result = a2[5];
  v2[5] = result;
  return result;
}
