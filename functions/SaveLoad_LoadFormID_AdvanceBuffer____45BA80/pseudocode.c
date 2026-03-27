// positive sp value has been detected, the output may be wrong!
char __userpurge SaveLoad_LoadFormID_::AdvanceBuffer__@<al>(int a1@<ebp>, int a2, int a3)
{
  char v4; // [esp-1h] [ebp-1h]

  *(_DWORD *)(a1 + 0x14) += a3;
  return v4;
}
