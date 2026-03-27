int __thiscall sub_9048D0(_DWORD *this, __m128 **a2, int a3, int a4)
{
  __m128 *v4; // edi
  int v6; // ecx
  __int32 v7; // edi
  _DWORD v9[4]; // [esp+10h] [ebp-50h] BYREF
  __m128 v10[4]; // [esp+20h] [ebp-40h] BYREF

  v4 = *a2;
  sub_8B1F70(v10, a2[2], *a2 + 2);
  v6 = *(this + 3);
  v9[3] = a2;
  v9[2] = v10;
  v7 = v4->m128_i32[3];
  v9[1] = a2[1];
  v9[0] = v7;
  return (*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v6 + 0x1C))(v6, v9, a3, a4);
}
