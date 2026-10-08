void __stdcall sub_4B8400(int a1)
{
  *(_BYTE *)(a1 + 8) = 0; /*0x4b8404*/
  NiTListNodePool_Release((_DWORD *)a1); /*0x4b840f*/
}
