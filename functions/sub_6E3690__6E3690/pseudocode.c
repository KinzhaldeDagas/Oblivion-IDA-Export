int __thiscall sub_6E3690(NiRenderer *this, signed int a2)
{
  signed int v2; // ebx
  int (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int result; // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  int v7; // edi
  int v8; // ebx
  signed int v9; // [esp-18h] [ebp-2Ch]
  int v10; // [esp-14h] [ebp-28h]
  int v11; // [esp-14h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6e3694*/
  sub_7008A0(this, a2); /*0x6e369d*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x6e36ba*/
  v4 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v10 + 4); /*0x6e36bb*/
  v12 = 4; /*0x6e36be*/
  result = v4(v10, &a2, 4, &v12, 1); /*0x6e36c2*/
  if ( a2 ) /*0x6e36cc*/
  {
    v11 = *(_DWORD *)(v2 + 0x21C); /*0x6e36e1*/
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4); /*0x6e36e2*/
    v12 = 4; /*0x6e36e5*/
    v6(v11, &v13, 4, &v12, 1); /*0x6e36e9*/
    v7 = v13; /*0x6e36eb*/
    v9 = a2; /*0x6e36f9*/
    LOBYTE(this->members.pad014[0]) = byte_B3D3E8[v13]; /*0x6e36fa*/
    v8 = (*(int (__cdecl **)(signed int, signed int))(4 * v7 + 0xB3D088))(v2, v9); /*0x6e3712*/
    (*(void (__cdecl **)(int, signed int, _DWORD))(4 * v7 + 0xB3D410))(v8, a2, LOBYTE(this->members.pad014[0])); /*0x6e371b*/
    return sub_6E3540(this, v8, a2, v7); /*0x6e3729*/
  }
  return result; /*0x6e372e*/
}
