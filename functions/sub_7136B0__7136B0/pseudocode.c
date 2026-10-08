int __thiscall sub_7136B0(_DWORD *this, int a2)
{
  void (__cdecl *v3)(int, int *, int, int *, int); // eax
  int v4; // esi
  int (__cdecl *v5)(int, int, int, int *, int); // eax
  int result; // eax
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v7 = *(this + 0x87); /*0x7136cb*/
  v3 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 4); /*0x7136cc*/
  v9 = 4; /*0x7136cf*/
  v3(v7, &v8, 4, &v9, 1); /*0x7136d7*/
  v4 = *(this + 0x87); /*0x7136dd*/
  v5 = *(int (__cdecl **)(int, int, int, int *, int))(v4 + 4); /*0x7136e7*/
  v9 = 1; /*0x7136f4*/
  result = v5(v4, a2, v8, &v9, 1); /*0x7136fc*/
  *(_BYTE *)(v8 + a2) = 0; /*0x713705*/
  return result; /*0x713709*/
}
