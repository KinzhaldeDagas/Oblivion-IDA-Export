int __thiscall sub_70EAF0(int *this, unsigned int *a2)
{
  void (__cdecl *v3)(unsigned int, int *, int, int *, int); // edx
  int *v4; // ebp
  void (__cdecl *v5)(unsigned int, int *, int, int *, int); // eax
  unsigned int v6; // ebx
  void (__cdecl *v7)(unsigned int, char *, int, int *, int); // eax
  void (__cdecl *v8)(unsigned int, char *, int, int *, int); // eax
  void (__cdecl *v9)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v10)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v11)(unsigned int, int *, int, int *, int); // eax
  int v12; // ebx
  unsigned int v13; // esi
  int (__cdecl *v14)(unsigned int, int, int, int *, int); // ecx
  unsigned int v16; // [esp-3Ch] [ebp-110h]
  int v17; // [esp-34h] [ebp-108h]
  int v18; // [esp-30h] [ebp-104h]
  unsigned int v19; // [esp-28h] [ebp-FCh]
  unsigned int v20; // [esp-28h] [ebp-FCh]
  size_t v21; // [esp-1Ch] [ebp-F0h]
  unsigned int v22; // [esp-14h] [ebp-E8h]
  unsigned int v23; // [esp-14h] [ebp-E8h]
  unsigned int v24; // [esp-14h] [ebp-E8h]
  unsigned int v25; // [esp-14h] [ebp-E8h]
  int *v26; // [esp-10h] [ebp-E4h]
  size_t v27; // [esp-10h] [ebp-E4h]
  size_t v28; // [esp-4h] [ebp-D8h]
  int v29; // [esp+10h] [ebp-C4h] BYREF
  int v30[16]; // [esp+14h] [ebp-C0h] BYREF
  char Src[64]; // [esp+54h] [ebp-80h] BYREF
  char v32[64]; // [esp+94h] [ebp-40h] BYREF

  sub_7008A0((NiRenderer *)this, (signed int)a2);
  sub_70F520((char *)this + 8, (signed int)a2);
  sub_712A20(a2);
  v3 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(a2[0x87] + 4);
  v4 = this + 0x18;
  v22 = a2[0x87];
  v29 = 4;
  v3(v22, this + 0x18, 4, &v29, 1);
  v19 = a2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v19 + 4);
  v29 = 4;
  v5(v19, this + 0x19, 4, &v29, 1);
  v6 = 0;
  if ( *(this + 0x18) )
  {
    do
    {
      v23 = a2[0x87];
      v7 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v23 + 4);
      v29 = 4;
      v7(v23, &Src[4 * v6], 4, &v29, 1);
      v20 = a2[0x87];
      v8 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v20 + 4);
      v29 = 4;
      v8(v20, &v32[4 * v6], 4, &v29, 1);
      v16 = a2[0x87];
      v9 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v16 + 4);
      v29 = 4;
      v9(v16, &v30[v6++], 4, &v29, 1);
    }
    while ( v6 < *v4 );
  }
  v10 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(a2[0x87] + 4);
  v26 = &v30[*v4];
  v24 = a2[0x87];
  v29 = 4;
  v10(v24, v26, 4, &v29, 1);
  if ( a2[0x36] >= 0xA030006 )
  {
    v25 = a2[0x87];
    v11 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v25 + 4);
    v29 = 4;
    v11(v25, this + 0x1B, 4, &v29, 1);
  }
  else
  {
    *(this + 0x1B) = 1;
  }
  sub_732280(this, *v4, *(this + 0x1B), v30[*v4]);
  v12 = 4 * *v4;
  LODWORD(v28) = v12;
  memcpy((void *)*(this + 0x15), Src, v28);
  LODWORD(v27) = v12;
  memcpy((void *)*(this + 0x16), v32, v27);
  LODWORD(v21) = 4 * *v4 + 4;
  memcpy((void *)*(this + 0x17), v30, v21);
  v13 = a2[0x87];
  v14 = *(int (__cdecl **)(unsigned int, int, int, int *, int))(v13 + 4);
  v18 = *(this + 0x1B) * *(_DWORD *)(*(this + 0x17) + 4 * *v4);
  v17 = *(this + 0x14);
  v29 = 1;
  return v14(v13, v17, v18, &v29, 1);
}
