int __thiscall sub_91DBB0(_DWORD *this, int a2)
{
  int v2; // ecx
  __m128 *v3; // edx
  int v5; // [esp-8h] [ebp-24h]
  __m128 v6; // [esp+Ch] [ebp-10h] BYREF

  v2 = *(this + 0xFFFFFFFC); /*0x91dbc6*/
  v3 = *(__m128 **)(a2 + 0x10); /*0x91dbc9*/
  v5 = unk_BA8458; /*0x91dbd3*/
  v6 = _mm_add_ps(*v3, v3[1]); /*0x91dbe1*/
  return (*(int (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)v2 + 0x1C))( /*0x91dbed*/
           v2,
           v3,
           &v6,
           0xFFFF0000,
           v5);
}
