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
  unsigned int v12; // ebx
  unsigned int v13; // esi
  int (__cdecl *v14)(unsigned int, int, int, int *, int); // ecx
  unsigned int v16; // [esp-3Ch] [ebp-110h]
  int v17; // [esp-34h] [ebp-108h]
  int v18; // [esp-30h] [ebp-104h]
  unsigned int v19; // [esp-28h] [ebp-FCh]
  unsigned int v20; // [esp-28h] [ebp-FCh]
  unsigned int v21; // [esp-14h] [ebp-E8h]
  unsigned int v22; // [esp-14h] [ebp-E8h]
  unsigned int v23; // [esp-14h] [ebp-E8h]
  unsigned int v24; // [esp-14h] [ebp-E8h]
  int *v25; // [esp-10h] [ebp-E4h]
  int v26; // [esp+10h] [ebp-C4h] BYREF
  int v27[16]; // [esp+14h] [ebp-C0h] BYREF
  char Src[64]; // [esp+54h] [ebp-80h] BYREF
  char source[64]; // [esp+94h] [ebp-40h] BYREF

  sub_7008A0((NiRenderer *)this, (signed int)a2); /*0x70eb04*/
  sub_70F520((char *)this + 8, (signed int)a2); /*0x70eb0d*/
  sub_712A20(a2); /*0x70eb14*/
  v3 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(a2[0x87] + 4); /*0x70eb1f*/
  v4 = this + 0x18; /*0x70eb2f*/
  v21 = a2[0x87]; /*0x70eb33*/
  v26 = 4; /*0x70eb34*/
  v3(v21, this + 0x18, 4, &v26, 1); /*0x70eb38*/
  v19 = a2[0x87]; /*0x70eb4c*/
  v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v19 + 4); /*0x70eb4d*/
  v26 = 4; /*0x70eb50*/
  v5(v19, this + 0x19, 4, &v26, 1); /*0x70eb54*/
  v6 = 0; /*0x70eb56*/
  if ( *(this + 0x18) ) /*0x70eb5b*/
  {
    do /*0x70ebd2*/
    {
      v22 = a2[0x87]; /*0x70eb74*/
      v7 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v22 + 4); /*0x70eb75*/
      v26 = 4; /*0x70eb78*/
      v7(v22, &Src[4 * v6], 4, &v26, 1); /*0x70eb80*/
      v20 = a2[0x87]; /*0x70eb99*/
      v8 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v20 + 4); /*0x70eb9a*/
      v26 = 4; /*0x70eb9d*/
      v8(v20, &source[4 * v6], 4, &v26, 1); /*0x70eba5*/
      v16 = a2[0x87]; /*0x70ebbb*/
      v9 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v16 + 4); /*0x70ebbc*/
      v26 = 4; /*0x70ebbf*/
      v9(v16, &v27[v6++], 4, &v26, 1); /*0x70ebc7*/
    }
    while ( v6 < *v4 ); /*0x70ebd2*/
  }
  v10 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(a2[0x87] + 4); /*0x70ebed*/
  v25 = &v27[*v4]; /*0x70ebf1*/
  v23 = a2[0x87]; /*0x70ebf2*/
  v26 = 4; /*0x70ebf3*/
  v10(v23, v25, 4, &v26, 1); /*0x70ebf7*/
  if ( a2[0x36] >= 0xA030006 ) /*0x70ec06*/
  {
    v24 = a2[0x87]; /*0x70ec23*/
    v11 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v24 + 4); /*0x70ec24*/
    v26 = 4; /*0x70ec27*/
    v11(v24, this + 0x1B, 4, &v26, 1); /*0x70ec2b*/
  }
  else
  {
    *(this + 0x1B) = 1; /*0x70ec08*/
  }
  sub_732280(this, *v4, *(this + 0x1B), v27[*v4]); /*0x70ec3f*/
  v12 = 4 * *v4; /*0x70ec4c*/
  memcpy((void *)*(this + 0x15), Src, v12); /*0x70ec55*/
  memcpy((void *)*(this + 0x16), source, v12); /*0x70ec67*/
  memcpy((void *)*(this + 0x17), v27, 4 * *v4 + 4); /*0x70ec80*/
  v13 = a2[0x87]; /*0x70ec8b*/
  v14 = *(int (__cdecl **)(unsigned int, int, int, int *, int))(v13 + 4); /*0x70eca2*/
  v18 = *(this + 0x1B) * *(_DWORD *)(*(this + 0x17) + 4 * *v4); /*0x70eca5*/
  v17 = *(this + 0x14); /*0x70eca6*/
  v26 = 1; /*0x70eca8*/
  return v14(v13, v17, v18, &v26, 1); /*0x70ecb5*/
}
