_DWORD *__thiscall sub_933870(int *this, __int16 a2, unsigned __int16 a3)
{
  int *v3; // esi
  int v4; // ecx
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // edx
  _DWORD *result; // eax
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+10h] [ebp-4h]

  v3 = this + 1;
  *(this + 2) = 0;
  LOWORD(v9) = a2;
  LOWORD(v11) = 0;
  HIWORD(v9) = 1;
  LOWORD(v10) = 1;
  if ( *(this + 2) == (*(this + 3) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v3, 8);
  v4 = v3[1];
  v5 = (_DWORD *)*v3;
  v5[2 * v4] = v9;
  v5[2 * v4 + 1] = v10;
  v6 = v3[1] + 1;
  v3[1] = v6;
  if ( v6 == (v3[2] & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v3, 8);
  v7 = v3[1];
  result = (_DWORD *)*v3;
  result[2 * v7] = a3;
  result[2 * v7 + 1] = v11;
  ++v3[1];
  return result;
}
