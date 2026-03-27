int __cdecl sub_8E8040(signed int a1)
{
  signed int v1; // edi
  void (__cdecl *v2)(int, int *, int, signed int *, int); // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v1 = a1;
  v7 = *(_DWORD *)(a1 + 0x21C);
  v2 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4);
  a1 = 4;
  v2(v7, &v8, 4, &a1, 1);
  v3 = sub_8E7E60(v8);
  v4 = v3;
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, signed int))(*v3 + 4))(v3, v1);
  v5 = v4[1];
  if ( *(_WORD *)(v5 + 4) )
    ++*(_WORD *)(v5 + 6);
  *v4 = &hkConstraintCinfo::`vftable';
  sub_8A0200(v4, 0);
  FormHeapFree((unsigned int)v4);
  return v5;
}
