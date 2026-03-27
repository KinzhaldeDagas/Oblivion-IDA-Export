int __thiscall sub_759FF0(NiTriBasedGeomData *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int i; // ebx
  void (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // edx
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  int v8; // edi
  int (__cdecl *v9)(int, char *, int, int *, int); // edx
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp-14h] [ebp-24h]
  int v14; // [esp-10h] [ebp-20h]
  int v15; // [esp-Ch] [ebp-1Ch]
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_73F950(this, a2);
  for ( i = 0; (unsigned __int16)i < this->members.super.m_usVertices; ++i )
    sub_75F910((char *)(*((_DWORD *)this + 0x17) + 0x1C * (unsigned __int16)i), (signed int)v2);
  LOBYTE(a2) = *((_DWORD *)this + 0x18) != 0;
  v11 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v11 + 8);
  v16 = 1;
  v5(v11, &a2, 1, &v16, 1);
  if ( (_BYTE)a2 )
  {
    v15 = 4 * this->members.super.m_usVertices;
    v6 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
    v14 = *((_DWORD *)this + 0x18);
    v12 = v2[0x88];
    v16 = 4;
    v6(v12, v14, v15, &v16, 1);
  }
  v13 = v2[0x88];
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v13 + 8);
  v16 = 2;
  v7(v13, (char *)this + 0x64, 2, &v16, 1);
  v8 = v2[0x88];
  v9 = *(int (__cdecl **)(int, char *, int, int *, int))(v8 + 8);
  v16 = 2;
  return v9(v8, (char *)this + 0x66, 2, &v16, 1);
}
