int __thiscall sub_933810(int *this, unsigned __int16 a2)
{
  int *v2; // esi
  int v3; // ecx
  _DWORD *v4; // edx
  int v6; // [esp+8h] [ebp-4h]

  v2 = this + 1;
  *(this + 2) = 0;
  LOWORD(v6) = 0;
  if ( *(this + 2) == (*(this + 3) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v2, 8);
  v3 = v2[1];
  v4 = (_DWORD *)*v2;
  v4[2 * v3] = a2;
  v4[2 * v3 + 1] = v6;
  ++v2[1];
  return v6;
}
