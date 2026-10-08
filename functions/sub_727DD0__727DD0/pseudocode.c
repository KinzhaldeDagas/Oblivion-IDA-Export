int __thiscall sub_727DD0(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, UInt32 *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x727dd2*/
  sub_726C30(this, a2); /*0x727dd9*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x727df1*/
  v4 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v8 + 4); /*0x727df2*/
  a2 = 4; /*0x727df5*/
  v4(v8, &this->members.pad014[6], 4, &a2, 1); /*0x727dfd*/
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x727dff*/
  v6 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(v5 + 4); /*0x727e05*/
  a2 = 4; /*0x727e16*/
  return v6(v5, &this->members.pad014[7], 4, &a2, 1); /*0x727e23*/
}
