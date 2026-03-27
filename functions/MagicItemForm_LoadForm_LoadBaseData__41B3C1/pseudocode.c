void __usercall MagicItemForm_LoadForm_::LoadBaseData(
        int a1@<eax>,
        int *a2@<ebx>,
        int a3@<esi>,
        int a4@<ebp>,
        int a5@<edi>,
        int a6)
{
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a3 + 0x3C))(a3, a2, a1);
  MagicItemForm_LoadForm_::LoadAdditionalData(a2, a4, a5, a3, a6);
}
