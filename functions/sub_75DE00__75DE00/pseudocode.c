int __thiscall sub_75DE00(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // edx
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  unsigned int i; // ebx
  int v9; // ecx
  bool v10; // zf
  int *v11; // edx
  int v13; // [esp-3Ch] [ebp-54h]
  int v14; // [esp-14h] [ebp-2Ch]
  int v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x75de07*/
  sub_759FF0(this, (_DWORD *)a2); /*0x75de0e*/
  v14 = v2[0x88]; /*0x75de2a*/
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v14 + 8); /*0x75de2b*/
  a2 = 4; /*0x75de2e*/
  v4(v14, (char *)this + 0x70, 4, &a2, 1); /*0x75de32*/
  v5 = v2[0x88]; /*0x75de37*/
  LOBYTE(a2) = *((_BYTE *)this + 0x6C); /*0x75de44*/
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v5 + 8); /*0x75de48*/
  v15 = 1; /*0x75de53*/
  v6(v5, &a2, 1, &v15, 1); /*0x75de5b*/
  v15 = *((unsigned __int16 *)this + 0x3F); /*0x75de68*/
  v13 = v2[0x88]; /*0x75de78*/
  v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v13 + 8); /*0x75de79*/
  a2 = 4; /*0x75de7c*/
  v7(v13, &v15, 4, &a2, 1); /*0x75de80*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x3F); ++i ) /*0x75de87*/
  {
    v9 = *((_DWORD *)this + 0x1E); /*0x75de90*/
    v10 = *(_DWORD *)(v9 + 4 * i) == 0; /*0x75de93*/
    a2 = 4; /*0x75dea1*/
    if ( v10 ) /*0x75dea6*/
    {
      v16 = 0; /*0x75deb8*/
      v11 = &v16; /*0x75dec0*/
    }
    else
    {
      v15 = *(unsigned __int16 *)(*(_DWORD *)(v9 + 4 * i) + 8); /*0x75deae*/
      v11 = &v15; /*0x75deb2*/
    }
    (*(void (__cdecl **)(_DWORD, int *, int, int *, int))(v2[0x88] + 8))(v2[0x88], v11, 4, &a2, 1); /*0x75decf*/
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x1A)); /*0x75deec*/
}
