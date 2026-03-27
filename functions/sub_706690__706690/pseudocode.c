__int16 __thiscall sub_706690(int *this, int a2)
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

  v2 = a2;
  sub_700AC0(this, (unsigned int *)a2);
  v4 = this + 6;
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v6 = *(int (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v10 = *(_DWORD *)(v2 + 0x21C);
    a2 = 2;
    result = v6(v10, v4, 2, &a2, 1);
  }
  else
  {
    result = *(_BYTE *)(v2 + 0x25C) & 7;
    *(_WORD *)v4 = result;
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0x14010002u )
  {
    v11 = *(_DWORD *)(v2 + 0x21C);
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4);
    a2 = 4;
    v7(v11, &v12, 4, &a2, 1);
    *(_WORD *)v4 = (0x10 * v12) | *(_WORD *)v4 & 0xFFCF;
    v8 = *(_DWORD *)(v2 + 0x21C);
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4);
    a2 = 4;
    v9(v8, &v12, 4, &a2, 1);
    result = (8 * v12) | *(_WORD *)v4 & 0xFFF7;
    *(_WORD *)v4 = result;
  }
  return result;
}
