int __thiscall sub_9048D0(_DWORD *this, __m128 **a2, int a3, int a4)
{
  __m128 *v4; // edi
  int v6; // ecx
  __int32 v7; // edi
  _DWORD v9[4]; // [esp+10h] [ebp-50h] BYREF
  __m128 v10[4]; // [esp+20h] [ebp-40h] BYREF

  v4 = *a2; /*0x9048df*/
  sub_8B1F70(v10, a2[2], *a2 + 2); /*0x9048ef*/
  v6 = *(this + 3); /*0x9048f4*/
  v9[3] = a2; /*0x9048f7*/
  v9[2] = v10; /*0x9048ff*/
  v7 = v4->m128_i32[3]; /*0x904906*/
  v9[1] = a2[1]; /*0x904909*/
  v9[0] = v7; /*0x904919*/
  return (*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v6 + 0x1C))(v6, v9, a3, a4); /*0x904923*/
}
