// positive sp value has been detected, the output may be wrong!
char __userpurge sub_564944@<al>(int a1@<ecx>, int a2@<esi>, int a3, int a4)
{
  Ni2DBuffer *v5; // [esp-28h] [ebp-2Ch]
  unsigned int v6[5]; // [esp-10h] [ebp-14h] BYREF

  NiSmartPointer_Set__((Ni2DBuffer **)(a2 + a1), v5);
  v6[4] = 0xFFFFFFFF;
  BSStringT_Clear(v6);
  return 1;
}
