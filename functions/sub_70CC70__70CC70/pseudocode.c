int __thiscall sub_70CC70(_DWORD *this)
{
  int v1; // edx
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  int result; // eax

  v1 = *(this + 0x22);
  v2 = this + 0x22;
  v3 = this + 8;
  *v3 = v1;
  v4 = v2[1];
  result = v2[2];
  v3[1] = v4;
  v3[2] = result;
  return result;
}
