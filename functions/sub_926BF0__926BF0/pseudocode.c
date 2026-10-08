int __thiscall sub_926BF0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  int v4; // esi
  void (__cdecl *v5)(int, signed int *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, int, int, int *, int); // edx
  int v9; // [esp-14h] [ebp-20h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x926bf3*/
  sub_8B3180(this, a2); /*0x926bfa*/
  v4 = *(this + 1); /*0x926bff*/
  LOBYTE(a2) = *(_BYTE *)(v4 + 0x90); /*0x926c0f*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x926c20*/
  v5 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v9 + 8); /*0x926c21*/
  v10 = 1; /*0x926c24*/
  v5(v9, &a2, 1, &v10, 1); /*0x926c2c*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x926c2e*/
  v7 = *(int (__cdecl **)(int, int, int, int *, int))(v6 + 8); /*0x926c34*/
  v10 = 1; /*0x926c48*/
  return v7(v6, v4 + 0x91, 1, &v10, 1); /*0x926c55*/
}
