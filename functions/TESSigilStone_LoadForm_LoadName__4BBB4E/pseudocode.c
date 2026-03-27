int __usercall TESSigilStone_LoadForm_::LoadName@<eax>(Data *a1@<ebx>, TESFullName *a2@<esi>)
{
  if ( a2 )
    TESFullname_Load(a2 + 3, a1);
  else
    TESFullname_Load(0, a1);
  return TESSigilStone_LoadForm_::ChunkLoop_Next_Popstack();
}
