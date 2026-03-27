void __cdecl sub_8E80C0(int a1, signed int a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  int v5; // [esp-14h] [ebp-20h]
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  v6 = (*(int (__thiscall **)(signed int))(*(_DWORD *)a2 + 0xC))(a2);
  v3 = sub_8E7E60(v6);
  sub_8A0200(v3, v2);
  v5 = *(_DWORD *)(a1 + 0x220);
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v5 + 8);
  a2 = 4;
  v4(v5, &v6, 4, &a2, 1);
  (*(void (__thiscall **)(_DWORD *, int))(*v3 + 8))(v3, a1);
  *v3 = &hkConstraintCinfo::`vftable';
  sub_8A0200(v3, 0);
  FormHeapFree((unsigned int)v3);
}
