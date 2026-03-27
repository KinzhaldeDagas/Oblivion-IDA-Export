int __thiscall sub_71A2A0(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, NiTriBasedGeomData *, int, int *, int); // edx
  int result; // eax
  unsigned __int16 v6; // cx
  void (__cdecl *v7)(int, int, int, int *, int); // eax
  int v8; // eax
  int (__cdecl *v9)(int, int *, int, int *, int); // edx
  int v10; // edi
  int (__cdecl *v11)(int, int, int, int *, int); // ecx
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp-14h] [ebp-24h]
  int v14; // [esp-10h] [ebp-20h]
  int v15; // [esp-10h] [ebp-20h]
  int v16; // [esp-Ch] [ebp-1Ch]
  int v17; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_732EB0(this, a2);
  v4 = *(int (__cdecl **)(int, NiTriBasedGeomData *, int, int *, int))(v2[0x88] + 8);
  v12 = v2[0x88];
  a2 = 2;
  result = v4(v12, this + 1, 2, &a2, 1);
  v6 = *((_WORD *)this + 0x22);
  if ( v6 )
  {
    v14 = *((_DWORD *)this + 0x12);
    v13 = v2[0x88];
    v7 = *(void (__cdecl **)(int, int, int, int *, int))(v13 + 8);
    v17 = 2;
    v7(v13, v14, 2 * v6, &v17, 1);
    v8 = v2[0x88];
    LOBYTE(a2) = *((_DWORD *)this + 0x13) != 0;
    v9 = *(int (__cdecl **)(int, int *, int, int *, int))(v8 + 8);
    v17 = 1;
    result = v9(v8, &a2, 1, &v17, 1);
    if ( (_BYTE)a2 )
    {
      v10 = v2[0x88];
      v11 = *(int (__cdecl **)(int, int, int, int *, int))(v10 + 8);
      v16 = 2 * (unsigned __int16)(this->members.m_usTriangles + 2 * *((_WORD *)this + 0x22));
      v15 = *((_DWORD *)this + 0x13);
      v17 = 2;
      return v11(v10, v15, v16, &v17, 1);
    }
  }
  return result;
}
