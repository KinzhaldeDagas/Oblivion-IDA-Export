__int16 __thiscall sub_706E10(NiRenderer *this, int a2)
{
  int v2; // edi
  int *v4; // esi
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  unsigned int v6; // eax
  int v7; // edi
  void (__cdecl *v8)(int, int *, int, int *, int); // edx
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x706e13*/
  sub_700AC0(this, (unsigned int *)a2); /*0x706e1a*/
  v4 = (int *)&this->members.pad014[1]; /*0x706e1f*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x706e2c*/
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x706e43*/
    v10 = *(_DWORD *)(v2 + 0x21C); /*0x706e50*/
    a2 = 2; /*0x706e51*/
    v5(v10, v4, 2, &a2, 1); /*0x706e59*/
  }
  else
  {
    *(_WORD *)v4 = *(_BYTE *)(v2 + 0x25C) & 3; /*0x706e38*/
  }
  v6 = *(_DWORD *)(v2 + 0xD8); /*0x706e5e*/
  if ( v6 >= 0x4010005 && v6 < 0x14010002 ) /*0x706e70*/
  {
    v7 = *(_DWORD *)(v2 + 0x21C); /*0x706e72*/
    v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 4); /*0x706e78*/
    a2 = 4; /*0x706e8a*/
    v8(v7, &v11, 4, &a2, 1); /*0x706e92*/
    LOWORD(v6) = (4 * v11) | *(_WORD *)v4 & 0xFFC3; /*0x706ea9*/
    *(_WORD *)v4 = v6; /*0x706eac*/
  }
  return v6; /*0x706eaf*/
}
