__int16 __thiscall sub_706690(NiRenderer *this, int a2)
{
  int v2; // edi
  int *v4; // esi
  __int16 result; // ax
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  int v8; // edi
  void (__cdecl *v9)(int, int *, int, int *, int); // edx
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp-14h] [ebp-20h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x706693*/
  sub_700AC0(this, (unsigned int *)a2); /*0x70669a*/
  v4 = (int *)&this->members.pad014[1]; /*0x70669f*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x7066ac*/
  {
    v6 = *(int (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x7066c3*/
    v10 = *(_DWORD *)(v2 + 0x21C); /*0x7066d0*/
    a2 = 2; /*0x7066d1*/
    result = v6(v10, v4, 2, &a2, 1); /*0x7066d9*/
  }
  else
  {
    result = *(_BYTE *)(v2 + 0x25C) & 7; /*0x7066b5*/
    *(_WORD *)v4 = result; /*0x7066b8*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0x14010002u ) /*0x7066e8*/
  {
    v11 = *(_DWORD *)(v2 + 0x21C); /*0x7066fe*/
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4); /*0x7066ff*/
    a2 = 4; /*0x706702*/
    v7(v11, &v12, 4, &a2, 1); /*0x70670a*/
    *(_WORD *)v4 = (0x10 * v12) | *(_WORD *)v4 & 0xFFCF; /*0x706725*/
    v8 = *(_DWORD *)(v2 + 0x21C); /*0x706728*/
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4); /*0x70672e*/
    a2 = 4; /*0x706739*/
    v9(v8, &v12, 4, &a2, 1); /*0x706741*/
    result = (8 * v12) | *(_WORD *)v4 & 0xFFF7; /*0x706758*/
    *(_WORD *)v4 = result; /*0x70675b*/
  }
  return result; /*0x70675e*/
}
