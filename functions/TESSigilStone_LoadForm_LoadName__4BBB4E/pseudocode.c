int __usercall TESSigilStone_LoadForm_::LoadName@<eax>(Data *a1@<ebx>, TESFullName *a2@<esi>, int a3)
{
  if ( a2 ) /*0x4bbb50*/
    TESFullname_Load(a2 + 3, a1); /*0x4bbb57*/
  else
    TESFullname_Load(0, a1); /*0x4bbb62*/
  return TESSigilStone_LoadForm_::ChunkLoop_Next_Popstack((int *)a1, a3);
}
