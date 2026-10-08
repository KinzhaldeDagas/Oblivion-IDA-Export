int __thiscall sub_6BEA00(char *this, signed int a2)
{
  signed int v2; // edi
  bool v3; // cf
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  unsigned int v6; // ebx
  char *v7; // esi
  int (__cdecl *v8)(int, char *, int, signed int *, int); // edx
  int result; // eax
  void (__cdecl *v10)(int, int *, int, signed int *, int); // eax
  int v11; // eax
  char *v12; // edx
  int v13; // [esp-14h] [ebp-2Ch]
  int v14; // [esp-14h] [ebp-2Ch]
  int v15; // [esp-14h] [ebp-2Ch]
  int v16; // [esp+10h] [ebp-8h] BYREF
  char *v17; // [esp+14h] [ebp-4h]

  v2 = a2; /*0x6bea07*/
  v3 = *(_DWORD *)(a2 + 0xD8) < 0xA010068u; /*0x6bea0b*/
  v17 = this; /*0x6bea17*/
  if ( v3 ) /*0x6bea20*/
  {
    v13 = *(_DWORD *)(a2 + 0x21C); /*0x6bea35*/
    v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v13 + 4); /*0x6bea36*/
    a2 = 4; /*0x6bea39*/
    v5(v13, &v16, 4, &a2, 1); /*0x6bea3d*/
  }
  v6 = 0; /*0x6bea42*/
  v7 = this + 0x14; /*0x6bea44*/
  do /*0x6beabe*/
  {
    v8 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6bea56*/
    v14 = *(_DWORD *)(v2 + 0x21C); /*0x6bea62*/
    a2 = 4; /*0x6bea63*/
    result = v8(v14, v7, 4, &a2, 1); /*0x6bea67*/
    if ( *(_DWORD *)v7 ) /*0x6bea6c*/
    {
      v15 = *(_DWORD *)(v2 + 0x21C); /*0x6bea84*/
      v10 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v15 + 4); /*0x6bea85*/
      a2 = 4; /*0x6bea88*/
      v10(v15, &v16, 4, &a2, 1); /*0x6bea8c*/
      v11 = v16; /*0x6bea8e*/
      v12 = v17; /*0x6bea92*/
      *((_DWORD *)v7 + 3) = v16; /*0x6bea96*/
      v12[v6 + 0x2C] = byte_B3D3E8[v11]; /*0x6bea9f*/
      result = (*(int (__cdecl **)(signed int, _DWORD))(4 * v11 + 0xB3D088))(v2, *(_DWORD *)v7); /*0x6beaae*/
      *((_DWORD *)v7 + 7) = result; /*0x6beab3*/
    }
    ++v6; /*0x6beab6*/
    v7 += 4; /*0x6beab9*/
  }
  while ( v6 < 3 ); /*0x6beabe*/
  return result; /*0x6beac0*/
}
