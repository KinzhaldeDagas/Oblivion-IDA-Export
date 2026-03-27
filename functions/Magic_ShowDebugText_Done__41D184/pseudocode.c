// positive sp value has been detected, the output may be wrong!
int __usercall Magic_ShowDebugText_::Done@<eax>(int a1@<ebx>, int a2, int a3, int a4, _DWORD *a5, int a6, _DWORD *a7)
{
  *a5 = a1;
  *a7 = a6;
  return a6;
}
