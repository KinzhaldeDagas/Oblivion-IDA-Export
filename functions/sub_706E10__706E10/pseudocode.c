__int16 __thiscall sub_706E10(int *this, int a2)
{
  int v2; // edi
  int *v4; // esi
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  unsigned int v6; // eax
  int v7; // edi
  void (__cdecl *v8)(int, int *, int, int *, int); // edx
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_700AC0(this, (unsigned int *)a2);
  v4 = this + 6;
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v10 = *(_DWORD *)(v2 + 0x21C);
    a2 = 2;
    v5(v10, v4, 2, &a2, 1);
  }
  else
  {
    *(_WORD *)v4 = *(_BYTE *)(v2 + 0x25C) & 3;
  }
  v6 = *(_DWORD *)(v2 + 0xD8);
  if ( v6 >= 0x4010005 && v6 < 0x14010002 )
  {
    v7 = *(_DWORD *)(v2 + 0x21C);
    v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 4);
    a2 = 4;
    v8(v7, &v11, 4, &a2, 1);
    LOWORD(v6) = (4 * v11) | *(_WORD *)v4 & 0xFFC3;
    *(_WORD *)v4 = v6;
  }
  return v6;
}
