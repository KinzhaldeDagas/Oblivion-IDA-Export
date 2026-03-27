unsigned int __thiscall sub_706EC0(char *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  char *v5; // edi
  unsigned int result; // eax
  int v7; // esi
  unsigned int (__cdecl *v8)(int, int *, int, signed int *, int); // eax
  int v9; // [esp-14h] [ebp-20h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_700A80((int)this, (int)this, (_DWORD *)a2);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v5 = this + 0x18;
  v9 = *(_DWORD *)(v2 + 0x220);
  a2 = 2;
  v4(v9, v5, 2, &a2, 1);
  result = *(_DWORD *)(v2 + 0xD8);
  if ( result >= 0x4010005 && result < 0x14010002 )
  {
    v7 = *(_DWORD *)(v2 + 0x220);
    v10 = ((unsigned __int8)*v5 >> 2) & 0xF;
    v8 = *(unsigned int (__cdecl **)(int, int *, int, signed int *, int))(v7 + 8);
    a2 = 4;
    return v8(v7, &v10, 4, &a2, 1);
  }
  return result;
}
