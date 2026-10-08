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

  v9 = *(unsigned __int16 *)(this + 0xD2) - 1; /*0x713538*/
  v6 = *(_DWORD *)(this + 0x220); /*0x713549*/
  v2 = *(int (__cdecl **)(int, int *, int, int *, int))(v6 + 8); /*0x71354a*/
  v8 = 4; /*0x71354d*/
  result = v2(v6, &v9, 4, &v8, 1); /*0x713555*/
  for ( i = 1; i < *(unsigned __int16 *)(this + 0xD2); ++i ) /*0x713566*/
  {
    v8 = **(_DWORD **)(*(_DWORD *)(this + 0xCC) + 4 * i); /*0x713582*/
    v7 = *(_DWORD *)(this + 0x220); /*0x713593*/
    v5 = *(int (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x713594*/
    v9 = 4; /*0x713597*/
    result = v5(v7, &v8, 4, &v9, 1); /*0x71359f*/
  }
  return result; /*0x7135b2*/
}
