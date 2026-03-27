int __userpurge SaveLoad_SaveCreatedObjects_::FormLoop_Next@<eax>(int a1, int a2, int a3, int a4, int a5)
{
  return SaveLoad_SaveCreatedObjects_::SaveLoop_Check(a1, a2, a3, a4, *(_DWORD *)(a5 + 4));
}
