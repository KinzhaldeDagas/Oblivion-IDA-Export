int __thiscall sub_9268F0(_DWORD *this, signed int a2)
{
  signed int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int, int, signed int *, int); // eax
  void (__cdecl *v7)(int, int, int, signed int *, int); // eax
  int v8; // esi
  int (__cdecl *v9)(int, int, int, signed int *, int); // edx
  int v11; // [esp-3Ch] [ebp-44h]
  int v12; // [esp-28h] [ebp-30h]
  int v13; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x9268f1*/
  sub_8A0C80(this, a2); /*0x9268f9*/
  v4 = *(this + 1); /*0x9268fe*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x926914*/
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v13 + 8); /*0x926915*/
  a2 = 4; /*0x926918*/
  v5(v13, v4 + 0x10, 4, &a2, 1); /*0x926920*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x926935*/
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v12 + 8); /*0x926936*/
  a2 = 1; /*0x926939*/
  v6(v12, v4 + 0x14, 1, &a2, 1); /*0x926941*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x926956*/
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v11 + 8); /*0x926957*/
  a2 = 0x40; /*0x92695a*/
  v7(v11, v4 + 0x20, 0x40, &a2, 1); /*0x926962*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x926964*/
  v9 = *(int (__cdecl **)(int, int, int, signed int *, int))(v8 + 8); /*0x92696a*/
  a2 = 0x40; /*0x92697b*/
  return v9(v8, v4 + 0x60, 0x40, &a2, 1); /*0x926988*/
}
