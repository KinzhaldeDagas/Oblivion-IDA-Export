void __usercall MagicItemObject_LoadForm_::LoadBaseData(
        int a1@<eax>,
        int *a2@<ebx>,
        int a3@<esi>,
        int a4@<ebp>,
        int a5@<edi>,
        int a6)
{
  int v6; // eax

  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a3 + 0x3C))(a3, a2, a1);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x24))(a3);
  MagicItemObject_LoadForm_::LoadAdditionalData(v6, a2, a4, a5, a3, a6);
}
