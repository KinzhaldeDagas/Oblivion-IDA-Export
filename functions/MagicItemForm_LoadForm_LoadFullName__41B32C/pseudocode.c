int __usercall MagicItemForm_LoadForm_::LoadFullName@<eax>(int a1@<edi>, TESFullName *a2@<esi>)
{
  Data *v3; // [esp+0h] [ebp-4h]

  TESFullname_Load(a1 != 0 ? a2 : 0, v3);
  return MagicItemForm_LoadForm_::LoadBaseData_();
}
