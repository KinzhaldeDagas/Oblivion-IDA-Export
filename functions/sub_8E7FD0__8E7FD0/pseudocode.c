int __cdecl sub_8E7FD0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1);
  v3 = sub_8E7E60(v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  sub_8A0200(v3, a1);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))*v4)(v4, 0, a2);
  v5 = v4[1];
  if ( *(_WORD *)(v5 + 4) )
    ++*(_WORD *)(v5 + 6);
  *v4 = &hkConstraintCinfo::`vftable';
  sub_8A0200(v4, 0);
  FormHeapFree((unsigned int)v4);
  return v5;
}
