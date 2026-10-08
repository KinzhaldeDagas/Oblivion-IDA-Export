int __usercall TESSigilStone_LoadForm_::LoadIcon@<eax>(Data *a1@<ebx>, int a2@<esi>, int a3)
{
  if ( a2 ) /*0x4bbb6b*/
    TESTexture_Load(a2 + 0x48, a1); /*0x4bbb72*/
  else
    TESTexture_Load(0, a1); /*0x4bbb7d*/
  return TESSigilStone_LoadForm_::ChunkLoop_Next_Popstack((int *)a1, a3);
}
