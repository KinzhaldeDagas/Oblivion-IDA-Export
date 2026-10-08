int __thiscall sub_72ACC0(NiTriBasedGeomData *this, signed int stream)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = stream; /*0x72acc2*/
  NiTriShapeData_Load((NiTriShapeData *)this, (NiStream *)stream); /*0x72acc9*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x72ace1*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 4); /*0x72ace2*/
  stream = 2; /*0x72ace5*/
  v4(v8, (char *)this + 0x58, 2, &stream, 1); /*0x72aced*/
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x72acef*/
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 4); /*0x72acf5*/
  stream = 2; /*0x72ad06*/
  return v6(v5, (char *)this + 0x5A, 2, &stream, 1); /*0x72ad13*/
}
