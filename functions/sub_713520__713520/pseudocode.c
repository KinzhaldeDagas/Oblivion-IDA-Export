int __thiscall sub_713520(int this)
{
  int (__cdecl *v2)(int, int *, int, int *, int); // eax
  int result; // eax
  unsigned int i; // edi
  int (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-24h]
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v9 = *(unsigned __int16 *)(this + 0xD2) - 1;
  v6 = *(_DWORD *)(this + 0x220);
  v2 = *(int (__cdecl **)(int, int *, int, int *, int))(v6 + 8);
  v8 = 4;
  result = v2(v6, &v9, 4, &v8, 1);
  for ( i = 1; i < *(unsigned __int16 *)(this + 0xD2); ++i )
  {
    v8 = **(_DWORD **)(*(_DWORD *)(this + 0xCC) + 4 * i);
    v7 = *(_DWORD *)(this + 0x220);
    v5 = *(int (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v9 = 4;
    result = v5(v7, &v8, 4, &v9, 1);
  }
  return result;
}
