int __usercall TESSigilStone_LoadForm_::LoadModel@<eax>(Data *a1@<ebx>, int a2@<esi>, int a3)
{
  float *v3; // eax

  if ( a2 ) /*0x4bbb8d*/
    v3 = (float *)(a2 + 0x30); /*0x4bbb8f*/
  else
    v3 = 0; /*0x4bbb94*/
  TESModel_Load(v3, a1); /*0x4bbb98*/
  return TESSigilStone_LoadForm_::ChunkLoop_Next_Popstack((int *)a1, a3);
}
