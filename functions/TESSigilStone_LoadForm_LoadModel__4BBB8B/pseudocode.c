int __usercall TESSigilStone_LoadForm_::LoadModel@<eax>(Data *a1@<ebx>, int a2@<esi>)
{
  float *v2; // eax

  if ( a2 )
    v2 = (float *)(a2 + 0x30);
  else
    v2 = 0;
  TESModel_Load(v2, a1);
  return TESSigilStone_LoadForm_::ChunkLoop_Next_Popstack();
}
