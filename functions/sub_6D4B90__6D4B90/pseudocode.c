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

  v2 = a2;
  sub_7008A0(this, a2);
  v28 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v28 + 4);
  v36 = 4;
  v4(v28, &a2, 4, &v36, 1);
  if ( a2 )
  {
    v29 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v29 + 4);
    v36 = 4;
    v5(v29, &v37, 4, &v36, 1);
    v6 = v37;
    v24 = a2;
    LOBYTE(this->members.pad014[0xD]) = byte_B3D3E8[v37];
    v7 = (*(int (__cdecl **)(signed int, signed int))(4 * v6 + 0xB3D088))(v2, v24);
    v21 = LOBYTE(this->members.pad014[0xD]);
    v37 = v7;
    (*(void (__cdecl **)(int, signed int, int))(4 * v6 + 0xB3D410))(v7, a2, v21);
    sub_6D4A10(this, v37, a2, v6);
  }
  v30 = *(_DWORD *)(v2 + 0x21C);
  v8 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v30 + 4);
  v37 = 4;
  v8(v30, &a2, 4, &v37, 1);
  if ( a2 )
  {
    v31 = *(_DWORD *)(v2 + 0x21C);
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v31 + 4);
    v37 = 4;
    v9(v31, &v36, 4, &v37, 1);
    v10 = v36;
    v25 = a2;
    BYTE1(this->members.pad014[0xD]) = byte_B3D3E8[v36];
    v11 = (*(int (__cdecl **)(signed int, signed int))(4 * v10 + 0xB3D088))(v2, v25);
    v22 = BYTE1(this->members.pad014[0xD]);
    v37 = v11;
    (*(void (__cdecl **)(int, signed int, int))(4 * v10 + 0xB3D410))(v11, a2, v22);
    sub_6D4A70(this, v37, a2, v10);
  }
  v32 = *(_DWORD *)(v2 + 0x21C);
  v12 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v32 + 4);
  v37 = 4;
  v12(v32, &a2, 4, &v37, 1);
  if ( a2 )
  {
    v33 = *(_DWORD *)(v2 + 0x21C);
    v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v33 + 4);
    v37 = 4;
    v13(v33, &v36, 4, &v37, 1);
    v14 = v36;
    v26 = a2;
    BYTE2(this->members.pad014[0xD]) = byte_B3D3E8[v36];
    v15 = (*(int (__cdecl **)(signed int, signed int))(4 * v14 + 0xB3D088))(v2, v26);
    v23 = BYTE2(this->members.pad014[0xD]);
    v37 = v15;
    (*(void (__cdecl **)(int, signed int, int))(4 * v14 + 0xB3D410))(v15, a2, v23);
    sub_6D4AD0(this, v37, a2, v14);
  }
  v34 = *(_DWORD *)(v2 + 0x21C);
  v16 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v34 + 4);
  v37 = 4;
  result = v16(v34, &a2, 4, &v37, 1);
  if ( a2 )
  {
    v35 = *(_DWORD *)(v2 + 0x21C);
    v18 = *(void (__cdecl **)(int, int *, int, int *, int))(v35 + 4);
    v37 = 4;
    v18(v35, &v36, 4, &v37, 1);
    v19 = v36;
    v27 = a2;
    HIBYTE(this->members.pad014[0xD]) = byte_B3D3E8[v36];
    v20 = (*(int (__cdecl **)(signed int, signed int))(4 * v19 + 0xB3D088))(v2, v27);
    (*(void (__cdecl **)(int, signed int, _DWORD))(4 * v19 + 0xB3D410))(v20, a2, HIBYTE(this->members.pad014[0xD]));
    return sub_6D4B30(this, v20, a2, v19);
  }
  return result;
}
