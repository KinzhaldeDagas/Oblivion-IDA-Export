int __usercall TESSigilStone_LoadForm_::LoadIcon@<eax>(Data *a1@<ebx>, int a2@<esi>)
{
  if ( a2 )
    TESTexture_Load(a2 + 0x48, a1);
  else
    TESTexture_Load(0, a1);
  return TESSigilStone_LoadForm_::ChunkLoop_Next_Popstack();
}
