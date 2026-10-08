void __thiscall sub_73EB90(char *this, unsigned int a2)
{
  signed int v2; // ebx
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  unsigned int i; // edi
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp-10h] [ebp-20h]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x73eb92*/
  sub_6EBA80((NiRenderer *)this, a2); /*0x73eb9b*/
  sub_716EA0(this + 8, v2); /*0x73eba4*/
  sub_716EA0(this + 0x18, v2); /*0x73ebad*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x73ebc6*/
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v7 + 4); /*0x73ebc7*/
  v10 = 4; /*0x73ebca*/
  v4(v7, &a2, 4, &v10, 1); /*0x73ebd2*/
  sub_73E6A0(this, v2, a2); /*0x73ebde*/
  for ( i = 0; i < a2; ++i ) /*0x73ebe9*/
  {
    v9 = *((_DWORD *)this + 0xB) + 4 * i; /*0x73ec05*/
    v8 = *(_DWORD *)(v2 + 0x21C); /*0x73ec06*/
    v6 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 4); /*0x73ec07*/
    v10 = 4; /*0x73ec0a*/
    v6(v8, v9, 4, &v10, 1); /*0x73ec12*/
  }
}
