int __thiscall sub_756EB0(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, UInt32 *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-44h]
  int v11; // [esp-28h] [ebp-30h]
  int v12; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x756eb2*/
  sub_752DC0(this, (unsigned int *)a2); /*0x756eb9*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x756ed1*/
  v4 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v12 + 4); /*0x756ed2*/
  a2 = 4; /*0x756ed5*/
  v4(v12, &this->members.pad014[1], 4, &a2, 1); /*0x756edd*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x756ef2*/
  v5 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v11 + 4); /*0x756ef3*/
  a2 = 2; /*0x756ef6*/
  v5(v11, &this->members.pad014[2], 2, &a2, 1); /*0x756efe*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x756f13*/
  v6 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v10 + 4); /*0x756f14*/
  a2 = 4; /*0x756f17*/
  v6(v10, &this->members.pad014[3], 4, &a2, 1); /*0x756f1f*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x756f21*/
  v8 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(v7 + 4); /*0x756f27*/
  a2 = 2; /*0x756f38*/
  return v8(v7, &this->members.pad014[4], 2, &a2, 1); /*0x756f45*/
}
