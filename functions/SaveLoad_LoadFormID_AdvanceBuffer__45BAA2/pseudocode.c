// positive sp value has been detected, the output may be wrong!
char __userpurge SaveLoad_LoadFormID_::AdvanceBuffer@<al>(int a1@<ebp>, int a2@<edi>, int a3, int a4)
{
  char v5; // [esp-1h] [ebp-1h]

  *(_DWORD *)(a1 + 0x14) += a2;
  return v5;
}
