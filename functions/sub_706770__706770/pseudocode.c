int __thiscall sub_706770(char *this, signed int a2)
{
  signed int v2; // esi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  char *v5; // edi
  int result; // eax
  unsigned int v7; // eax
  void (__cdecl *v8)(int, int *, int, signed int *, int); // edx
  int v9; // esi
  int (__cdecl *v10)(int, int *, int, signed int *, int); // edx
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_700A80((int)this, (int)this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v5 = this + 0x18;
  v11 = *(_DWORD *)(v2 + 0x220);
  a2 = 2;
  result = v4(v11, v5, 2, &a2, 1);
  if ( *(_DWORD *)(v2 + 0xD8) < 0x14010002u )
  {
    v7 = *(unsigned __int16 *)v5;
    v13 = (v7 >> 4) & 3;
    v14 = (v7 >> 3) & 1;
    v8 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v12 = *(_DWORD *)(v2 + 0x220);
    a2 = 4;
    v8(v12, &v13, 4, &a2, 1);
    v9 = *(_DWORD *)(v2 + 0x220);
    v10 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v9 + 8);
    a2 = 4;
    return v10(v9, &v14, 4, &a2, 1);
  }
  return result;
}
