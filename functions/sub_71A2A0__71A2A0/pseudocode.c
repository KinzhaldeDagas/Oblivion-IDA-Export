int __thiscall sub_71A2A0(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
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

  v2 = a2; /*0x71a2a4*/
  sub_732EB0(this, a2); /*0x71a2ab*/
  v4 = *(int (__cdecl **)(int, NiTriBasedGeomData *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x71a2b6*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x71a2c6*/
  a2 = 2; /*0x71a2c7*/
  result = v4(v12, this + 1, 2, &a2, 1); /*0x71a2cf*/
  v6 = *((_WORD *)this + 0x22); /*0x71a2d1*/
  if ( v6 ) /*0x71a2da*/
  {
    v14 = *((_DWORD *)this + 0x12); /*0x71a2f6*/
    v13 = *(_DWORD *)(v2 + 0x220); /*0x71a2f7*/
    v7 = *(void (__cdecl **)(int, int, int, int *, int))(v13 + 8); /*0x71a2f8*/
    v17 = 2; /*0x71a2fb*/
    v7(v13, v14, 2 * v6, &v17, 1); /*0x71a303*/
    v8 = *(_DWORD *)(v2 + 0x220); /*0x71a309*/
    LOBYTE(a2) = *((_DWORD *)this + 0x13) != 0; /*0x71a319*/
    v9 = *(int (__cdecl **)(int, int *, int, int *, int))(v8 + 8); /*0x71a31d*/
    v17 = 1; /*0x71a328*/
    result = v9(v8, &a2, 1, &v17, 1); /*0x71a330*/
    if ( (_BYTE)a2 ) /*0x71a33a*/
    {
      v10 = *(_DWORD *)(v2 + 0x220); /*0x71a33f*/
      v11 = *(int (__cdecl **)(int, int, int, int *, int))(v10 + 8); /*0x71a351*/
      v16 = 2 * (unsigned __int16)(this->members.m_usTriangles + 2 * *((_WORD *)this + 0x22)); /*0x71a35e*/
      v15 = *((_DWORD *)this + 0x13); /*0x71a35f*/
      v17 = 2; /*0x71a361*/
      return v11(v10, v15, v16, &v17, 1); /*0x71a369*/
    }
  }
  return result; /*0x71a36e*/
}
