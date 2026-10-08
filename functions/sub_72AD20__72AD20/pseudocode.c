int __thiscall sub_72AD20(NiTriBasedGeomData *this, int stream)
{
  int v2; // edi
  void (__cdecl *v4)(int, char *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = stream; /*0x72ad22*/
  NiTriShapeData_Save((NiTriShapeData *)this, (NiStream *)stream); /*0x72ad29*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x72ad41*/
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v8 + 8); /*0x72ad42*/
  stream = 2; /*0x72ad45*/
  v4(v8, (char *)this + 0x58, 2, &stream, 1); /*0x72ad4d*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x72ad4f*/
  v6 = *(int (__cdecl **)(int, char *, int, int *, int))(v5 + 8); /*0x72ad55*/
  stream = 2; /*0x72ad66*/
  return v6(v5, (char *)this + 0x5A, 2, &stream, 1); /*0x72ad73*/
}
