int __cdecl sub_8E7FD0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1); /*0x8e7fe0*/
  v3 = sub_8E7E60(v2); /*0x8e7fe3*/
  v4 = v3; /*0x8e7fe8*/
  if ( !v3 ) /*0x8e7fef*/
    return 0; /*0x8e8035*/
  sub_8A0200(v3, a1); /*0x8e7ff4*/
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))*v4)(v4, 0, a2); /*0x8e8005*/
  v5 = v4[1]; /*0x8e8007*/
  if ( *(_WORD *)(v5 + 4) ) /*0x8e800a*/
    ++*(_WORD *)(v5 + 6); /*0x8e8010*/
  *v4 = &hkConstraintCinfo::`vftable'; /*0x8e8019*/
  sub_8A0200(v4, 0); /*0x8e801f*/
  FormHeapFree((unsigned int)v4); /*0x8e8025*/
  return v5; /*0x8e802f*/
}
