char __thiscall sub_6D4B90(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // ebx
  int v7; // eax
  void (__cdecl *v8)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v9)(int, int *, int, int *, int); // eax
  int v10; // ebx
  int v11; // eax
  void (__cdecl *v12)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v13)(int, int *, int, int *, int); // eax
  int v14; // ebx
  int v15; // eax
  int (__cdecl *v16)(int, signed int *, int, int *, int); // eax
  char result; // al
  void (__cdecl *v18)(int, int *, int, int *, int); // eax
  int v19; // ebx
  int v20; // edi
  int v21; // [esp-20h] [ebp-38h]
  int v22; // [esp-20h] [ebp-38h]
  int v23; // [esp-20h] [ebp-38h]
  signed int v24; // [esp-18h] [ebp-30h]
  signed int v25; // [esp-18h] [ebp-30h]
  signed int v26; // [esp-18h] [ebp-30h]
  signed int v27; // [esp-18h] [ebp-30h]
  int v28; // [esp-14h] [ebp-2Ch]
  int v29; // [esp-14h] [ebp-2Ch]
  int v30; // [esp-14h] [ebp-2Ch]
  int v31; // [esp-14h] [ebp-2Ch]
  int v32; // [esp-14h] [ebp-2Ch]
  int v33; // [esp-14h] [ebp-2Ch]
  int v34; // [esp-14h] [ebp-2Ch]
  int v35; // [esp-14h] [ebp-2Ch]
  int v36; // [esp+10h] [ebp-8h] BYREF
  int v37; // [esp+14h] [ebp-4h] BYREF

  v2 = a2; /*0x6d4b97*/
  sub_7008A0(this, a2); /*0x6d4b9e*/
  v28 = *(_DWORD *)(v2 + 0x21C); /*0x6d4bbb*/
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v28 + 4); /*0x6d4bbc*/
  v36 = 4; /*0x6d4bbf*/
  v4(v28, &a2, 4, &v36, 1); /*0x6d4bc3*/
  if ( a2 ) /*0x6d4bcd*/
  {
    v29 = *(_DWORD *)(v2 + 0x21C); /*0x6d4be2*/
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v29 + 4); /*0x6d4be3*/
    v36 = 4; /*0x6d4be6*/
    v5(v29, &v37, 4, &v36, 1); /*0x6d4bea*/
    v6 = v37; /*0x6d4bec*/
    v24 = a2; /*0x6d4bfb*/
    LOBYTE(this->members.pad014[0xD]) = byte_B3D3E8[v37]; /*0x6d4bfc*/
    v7 = (*(int (__cdecl **)(signed int, signed int))(4 * v6 + 0xB3D088))(v2, v24); /*0x6d4c07*/
    v21 = LOBYTE(this->members.pad014[0xD]); /*0x6d4c11*/
    v37 = v7; /*0x6d4c13*/
    (*(void (__cdecl **)(int, signed int, int))(4 * v6 + 0xB3D410))(v7, a2, v21); /*0x6d4c1f*/
    sub_6D4A10(this, v37, a2, v6); /*0x6d4c31*/
  }
  v30 = *(_DWORD *)(v2 + 0x21C); /*0x6d4c49*/
  v8 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v30 + 4); /*0x6d4c4a*/
  v37 = 4; /*0x6d4c4d*/
  v8(v30, &a2, 4, &v37, 1); /*0x6d4c51*/
  if ( a2 ) /*0x6d4c5b*/
  {
    v31 = *(_DWORD *)(v2 + 0x21C); /*0x6d4c70*/
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v31 + 4); /*0x6d4c71*/
    v37 = 4; /*0x6d4c74*/
    v9(v31, &v36, 4, &v37, 1); /*0x6d4c78*/
    v10 = v36; /*0x6d4c7a*/
    v25 = a2; /*0x6d4c89*/
    BYTE1(this->members.pad014[0xD]) = byte_B3D3E8[v36]; /*0x6d4c8a*/
    v11 = (*(int (__cdecl **)(signed int, signed int))(4 * v10 + 0xB3D088))(v2, v25); /*0x6d4c95*/
    v22 = BYTE1(this->members.pad014[0xD]); /*0x6d4c9f*/
    v37 = v11; /*0x6d4ca1*/
    (*(void (__cdecl **)(int, signed int, int))(4 * v10 + 0xB3D410))(v11, a2, v22); /*0x6d4cad*/
    sub_6D4A70(this, v37, a2, v10); /*0x6d4cbf*/
  }
  v32 = *(_DWORD *)(v2 + 0x21C); /*0x6d4cd7*/
  v12 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v32 + 4); /*0x6d4cd8*/
  v37 = 4; /*0x6d4cdb*/
  v12(v32, &a2, 4, &v37, 1); /*0x6d4cdf*/
  if ( a2 ) /*0x6d4ce9*/
  {
    v33 = *(_DWORD *)(v2 + 0x21C); /*0x6d4cfe*/
    v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v33 + 4); /*0x6d4cff*/
    v37 = 4; /*0x6d4d02*/
    v13(v33, &v36, 4, &v37, 1); /*0x6d4d06*/
    v14 = v36; /*0x6d4d08*/
    v26 = a2; /*0x6d4d17*/
    BYTE2(this->members.pad014[0xD]) = byte_B3D3E8[v36]; /*0x6d4d18*/
    v15 = (*(int (__cdecl **)(signed int, signed int))(4 * v14 + 0xB3D088))(v2, v26); /*0x6d4d23*/
    v23 = BYTE2(this->members.pad014[0xD]); /*0x6d4d2d*/
    v37 = v15; /*0x6d4d2f*/
    (*(void (__cdecl **)(int, signed int, int))(4 * v14 + 0xB3D410))(v15, a2, v23); /*0x6d4d3b*/
    sub_6D4AD0(this, v37, a2, v14); /*0x6d4d4d*/
  }
  v34 = *(_DWORD *)(v2 + 0x21C); /*0x6d4d65*/
  v16 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v34 + 4); /*0x6d4d66*/
  v37 = 4; /*0x6d4d69*/
  result = v16(v34, &a2, 4, &v37, 1); /*0x6d4d6d*/
  if ( a2 ) /*0x6d4d77*/
  {
    v35 = *(_DWORD *)(v2 + 0x21C); /*0x6d4d8c*/
    v18 = *(void (__cdecl **)(int, int *, int, int *, int))(v35 + 4); /*0x6d4d8d*/
    v37 = 4; /*0x6d4d90*/
    v18(v35, &v36, 4, &v37, 1); /*0x6d4d94*/
    v19 = v36; /*0x6d4d96*/
    v27 = a2; /*0x6d4da4*/
    HIBYTE(this->members.pad014[0xD]) = byte_B3D3E8[v36]; /*0x6d4da5*/
    v20 = (*(int (__cdecl **)(signed int, signed int))(4 * v19 + 0xB3D088))(v2, v27); /*0x6d4dbd*/
    (*(void (__cdecl **)(int, signed int, _DWORD))(4 * v19 + 0xB3D410))(v20, a2, HIBYTE(this->members.pad014[0xD])); /*0x6d4dc6*/
    return sub_6D4B30(this, v20, a2, v19); /*0x6d4dd4*/
  }
  return result; /*0x6d4dd9*/
}
