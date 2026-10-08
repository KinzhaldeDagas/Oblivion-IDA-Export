void __usercall MagicItemObject_LoadForm_::LoadFullName(
        int a1@<edi>,
        TESFullName *a2@<esi>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5)
{
  Data *v5; // [esp+0h] [ebp-4h]

  TESFullname_Load(a1 != 0 ? a2 : 0, v5);
  MagicItemObject_LoadForm_::LoadBaseData_(a3, a4, a1, (int)a2, a5); /*0x41b61e*/
}
