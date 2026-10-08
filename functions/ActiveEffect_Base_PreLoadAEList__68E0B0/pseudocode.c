// Verified pre-load lifecycle hook: before list restoration, iterates current ActiveEffects and calls vtable slot +0x20 with the supplied load context. This is the preLoad slot in ActiveEffectVtbl; LockEffect and OpenEffect use the shared no-op.
int __cdecl ActiveEffect_Base_PreLoadAEList(_DWORD *a1, int a2)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i; i = (_DWORD *)i[1] ) /*0x68e0b7*/
  {
    if ( !i[1] && !*i ) /*0x68e0c6*/
      break; /*0x68e0c9*/
    result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*i + 0x20))(*i, a2); /*0x68e0d3*/
  }
  return result; /*0x68e0dd*/
}
