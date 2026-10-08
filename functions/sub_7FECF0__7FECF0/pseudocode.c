// MoonSugarEffect: Lighting30Shader post-build/finalization iterates dword_B473D0..B474A8 through vtable +0x94 for each pooled pass.
int __thiscall sub_7FECF0(void *this)
{
  int *v2; // esi
  int result; // eax

  v2 = unk_B473D0; /*0x7fecf4*/
  do /*0x7fed18*/
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++); /*0x7fed0d*/
  while ( (int)v2 < (int)&unk_B474A8 ); /*0x7fed18*/
  return result; /*0x7fed1a*/
}
