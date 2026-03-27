int __userpurge ValueModifierEffect_ModifyAV_::ApplyRecoverableMod@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)a2 + 0x294))(a2, *(_DWORD *)(a3 + 0x38), a8, a1);
}
