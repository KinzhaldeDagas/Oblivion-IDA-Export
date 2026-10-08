void __userpurge ValueModifierEffect_ModifyAV_::ApplyMod(int a1@<edi>, int a2@<esi>, int a3, int a4)
{
  __asm { fstp    [esp+8+var_8] } /*0x6a85d6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x2A4))(a1); /*0x6a85dc*/
  ValueModifierEffect_ModifyAV_::Done(a3, a4); /*0x6a85de*/
}
