int __thiscall sub_6D0E80(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD *, int, int *, int); // eax
  void (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  unsigned int v6; // ecx
  int v7; // eax
  void (__cdecl *v8)(int, unsigned int *, int, int *, int); // edx
  int i; // ebx
  int v10; // eax
  int (__cdecl *v11)(int, unsigned int *, int, int *, int); // edx
  int result; // eax
  unsigned int j; // ebx
  unsigned int v14; // eax
  int v15; // eax
  int (__cdecl *v16)(int, int *, int, int *, int); // edx
  int v17; // [esp-14h] [ebp-30h]
  int v18; // [esp-14h] [ebp-30h]
  int v19; // [esp-14h] [ebp-30h]
  unsigned int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h] BYREF

  v2 = a2; /*0x6d0e86*/
  j_NiTimeController_SaveBinary(this, (signed int)a2); /*0x6d0e8e*/
  v17 = v2[0x88]; /*0x6d0ea6*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v17 + 8); /*0x6d0ea7*/
  v21 = 2; /*0x6d0eaa*/
  v4(v17, this + 0xF, 2, &v21, 1); /*0x6d0eb2*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x14)); /*0x6d0ec2*/
  LOBYTE(a2) = *((_BYTE *)this + 0x5A); /*0x6d0ece*/
  v18 = v2[0x88]; /*0x6d0edf*/
  v5 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v18 + 8); /*0x6d0ee0*/
  v21 = 1; /*0x6d0ee3*/
  v5(v18, &a2, 1, &v21, 1); /*0x6d0eeb*/
  v6 = (*(unsigned __int16 (__thiscall **)(_DWORD *))(*this + 0x74))(this); /*0x6d0ef9*/
  v7 = v2[0x88]; /*0x6d0efc*/
  v20 = v6; /*0x6d0f09*/
  v8 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v7 + 8); /*0x6d0f0d*/
  v21 = 4; /*0x6d0f1c*/
  v8(v7, &v20, 4, &v21, 1); /*0x6d0f20*/
  for ( i = 0; (unsigned __int16)i < v20; ++i ) /*0x6d0f2b*/
  {
    v10 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x80))(this, i); /*0x6d0f3b*/
    (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v10); /*0x6d0f45*/
  }
  v11 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v2[0x88] + 8); /*0x6d0f60*/
  v19 = v2[0x88]; /*0x6d0f69*/
  v21 = 4; /*0x6d0f6a*/
  result = v11(v19, &v20, 4, &v21, 1); /*0x6d0f6e*/
  for ( j = 0; j < v20; ++j ) /*0x6d0f79*/
  {
    v14 = *((unsigned __int16 *)this + 0x25); /*0x6d0f80*/
    *(float *)&v21 = 0.0; /*0x6d0f88*/
    if ( j < v14 ) /*0x6d0f8c*/
      v21 = *(int *)(*(this + 0x11) + 4 * j); /*0x6d0f94*/
    v15 = v2[0x88]; /*0x6d0f9c*/
    v22 = v21; /*0x6d0fa4*/
    v16 = *(int (__cdecl **)(int, int *, int, int *, int))(v15 + 8); /*0x6d0fad*/
    v21 = 4; /*0x6d0fb7*/
    result = v16(v15, &v22, 4, &v21, 1); /*0x6d0fbb*/
  }
  return result; /*0x6d0fc9*/
}
