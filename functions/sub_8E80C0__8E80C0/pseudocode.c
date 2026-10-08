void __cdecl sub_8E80C0(int a1, signed int a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  int v5; // [esp-14h] [ebp-20h]
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x8e80c3*/
  v6 = (*(int (__thiscall **)(signed int))(*(_DWORD *)a2 + 0xC))(a2); /*0x8e80d1*/
  v3 = sub_8E7E60(v6); /*0x8e80dd*/
  sub_8A0200(v3, v2); /*0x8e80e2*/
  v5 = *(_DWORD *)(a1 + 0x220); /*0x8e80ff*/
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v5 + 8); /*0x8e8100*/
  a2 = 4; /*0x8e8103*/
  v4(v5, &v6, 4, &a2, 1); /*0x8e810b*/
  (*(void (__thiscall **)(_DWORD *, int))(*v3 + 8))(v3, a1); /*0x8e8118*/
  *v3 = &hkConstraintCinfo::`vftable'; /*0x8e811e*/
  sub_8A0200(v3, 0); /*0x8e8124*/
  FormHeapFree((unsigned int)v3); /*0x8e812a*/
}
